f.read.files.from.directory <- function(aDir, aExp, aExt, aExc, aHead, aSep, useHeader = FALSE) {
	# WARNING useHeader still neads aHead (it just tells if the first row shall be removed or not)
	# read all the files from a given directory that contain a regular expression aExp and the ending aExt. All with aExc will be excluded
	# aHead is a vector with the column names, aSep is the separator
	fList <- grep(aExp, list.files(aDir, aExt), value = TRUE)
	if (aExc != "") { fList <- fList[-grep(aExc,fList)] }
	sList <- sapply(fList, function(x) substr(x, 1, nchar(x)-nchar(aExt)))
	# read first all the files in a list and get a list of all the rownames (RID)
	RID <- c()
	tList <- list()
	for (sampleName in sList) {
		if (useHeader) {tList[[sampleName]] <- read.table(file.path(aDir,paste(sampleName, aExt, sep="")), header = TRUE, sep = aSep, quote = "", row.names = 1)}
		else {tList[[sampleName]] <- read.table(file.path(aDir,paste(sampleName, aExt, sep="")), header = FALSE, sep = aSep, quote = "", row.names = 1)}
		colnames(tList[[sampleName]]) <- aHead
		RID <- union(RID, rownames(tList[[sampleName]]))
	}
	# create a list of matrices containing values from all samples - for every datatype one matrix
	out <- list()
	for (h in aHead) {
		out[[h]] <- matrix(0, length(RID), length(sList), FALSE, list(RID, sList))
		for (sampleName in sList) {
			out[[h]][rownames(tList[[sampleName]]), sampleName] <- tList[[sampleName]][,h]
		}
	}
	return(out)
}

f.read.Rcount <- function(aDir, aExp = "", aExc = "", toReturn = "TH") {
	# the function will read all "*.txt" files in the given directory. One can give regular expressions for aExp and aExc
	# aExc: files containing this regular expression will be omitted
	# aExp: only files containing this regular expression will be loaded
	fullData <- f.read.files.from.directory(aDir, aExp, ".txt", aExc, c("sumUnAmb", "sumAmb", "sumAllo", "sumDistUnAmb", "sumDistAmb", "sumDistAllo", "TH", "VAL"), "\t")
	out <- round(fullData[[toReturn]])
	return(out)
}

f.genetodensity <- function(x,y) {
	require("MASS")
	est <- kde2d(x, y, n = 50) # needs MASS - calculates the two dimensional density
	if (sum(is.na(est$z)) > 0) {
		est <- kde2d(x, y, n = 50, h = c(bw.nrd0(x), bw.nrd0(y))) # needs MASS - calculates the two dimensional density
	}
	dvec <- as.vector(est$z) # note: as.vector takes columnwise, rows correspond to the value of x, columns to the value of y - the y index counts therefore 50 times
	xind <- findInterval(x, est$x) # find the intervals to which a gene belongs
	yind <- findInterval(y, est$y) # find the intervals to which a gene belongs
	vecind <- (yind-1)*50 + xind # this is a vector with indices for dvec. 
	dens <- dvec[vecind]
	names(dens) <- names(x)
	return(dens)
}

f.genetodensitycolor <- function(x,y) {
	require("MASS")
	require("colorRamps")
	grids <- 100
	out <- list()
	est <- kde2d(x, y, n = grids) # needs MASS - calculates the two dimensional density
	if (sum(is.na(est$z)) > 0) {
		est <- kde2d(x, y, n = grids, h = c(bw.nrd0(x), bw.nrd0(y))) # needs MASS - calculates the two dimensional density
	}
	dvec <- as.vector(est$z) # note: as.vector takes columnwise, rows correspond to the value of x, columns to the value of y - the y index counts therefore grids times
	xind <- findInterval(x, est$x) # find the intervals to which a gene belongs
	yind <- findInterval(y, est$y) # find the intervals to which a gene belongs
	vecind <- (yind-1)*grids + xind # this is a vector with indices for dvec. 
	dens <- dvec[vecind]
	dens_with_genes <- unique(dens)
	names(dens) <- names(x)
	out$dens <- dens
	out$denschar <- as.vector(dens, mode = "character")
	colgrad <- blue2red(length(dens_with_genes))
	#colgrad <- rainbow(length(dens_with_genes), start = 0, end = 1, alpha = 0.8)
	#colgrad <- heat.colors(length(dens_with_genes), alpha = 0.8)
	#colgrad <- terrain.colors(length(dens_with_genes), alpha = 0.8)
	#colgrad <- topo.colors(length(dens_with_genes), alpha = 0.8)
	#colgrad <- cm.colors(length(dens_with_genes), alpha = 0.8)
	sdens_with_genes <- sort(dens_with_genes, decreasing = FALSE)
	names(colgrad) <- sdens_with_genes
	out$cols <- colgrad
	genecols <- colgrad[as.vector(dens, mode = "character")]
	names(genecols) <- names(x)
	out$genecols <- genecols
	return(out)
}

f.histogram <- function(x, y = c(), xName = "", useFreq = FALSE, ...) 
{
	# this is a normal histogram mode (not bars, but frequency or density)
	# x: values
	# xName: x-axis label
	# useFreq: will plot frequencies instead of densities
	if (length(x) == length(y)) {
		toPlot <- list(x = x, y = y)
		class(toPlot) <- "density"
	} else {
		toPlot <- density(x)
	}
	if (useFreq) { 
		toPlot$y <- toPlot$y * length(x)
	}
	par(mar = c(5,4,1,1))
	plot(
		toPlot,
	  #main = "",
	  bty = "n",
	  xaxs = "r",
	  yaxs = "r",
	  xlab = xName,
	  ylab = "",
	  las = 1,
	  cex = 0.4,
	  tck = 0.01,
	  ...
	)
	text(
		par("usr")[1] + par("usr")[2]/15,
		 par("usr")[4] - par("usr")[4]/15,
		 adj = c(0,1),
		 labels = paste(c("median:", "mean:", "sd:"),
		 c(round(median(x), digits = 3),
		   round(mean(x), digits = 3),
		   round(sd(x), digits = 3)),
		   collapse = "\n", sep=" ")
		   )
}

f.scatter <- function(x, y, xName = "", yName = "", cexFactor = 1, ...)
{
	# this will draw a normal scatterplot
	# x: x values
	# y: y values
	# xName: x-axis label
	# yName: y-axis label
	par(mar = c(5,5,1,1))
	plot(
		y ~ x,
	  #main = "",
	  bty = "n",
	  xaxs = "r",
	  yaxs = "r",
	  xlab = xName,
	  ylab = yName,
	  las = 1,
	  cex = 0.2*cexFactor,
	  tck = 0.01,
	  pch = 19,
	  ...
	)
	text(
		par("usr")[1] + par("usr")[2]/15,
		 par("usr")[4] - par("usr")[4]/15,
		 adj = c(0,1),
		 labels = paste(c("corP:", "corS:", "n:"),
		 c(round(cor(x,y,method="pearson"), digits = 3),
				 round(cor(x,y,method="spearman"), digits = 3),
					   length(x)),
				 collapse = "\n", sep=" ")
		 )
}


###############################################################################
## plot functions (higher level for multiple plots)
###############################################################################

f.comp <- function(x,rt){
	if(rt==0){y <- x>0}
	else{y <- x>=rt}
	return(y)
}

f.pair.all <- function(data, rdir, rt = 0, prefix = "RNA-Seq", scaleToSample = FALSE) 
{
	# this function draws scatterplots, histograms and sorted scatters
	# x <dataframe/matrix>: values, one sample in one columns
	# rdir <directory>: folder for the figure
	# rt <number>: a threshold for the number of reads
	# prefix <string>: a word that will be added to the filename
	hits.union <- rownames(data)[which(apply(f.comp(data,rt),1,sum) > 0)]
	data <- data[hits.union,]
	# get sorted data and make sure everything is a data frame
	s.data <- apply(data,2,sort)
	data <- as.data.frame(data)
	s.data <- as.data.frame(s.data)
	# some variables
	ns = ncol(data)
	sn = colnames(data)
	afname <- paste(prefix,'_pairs_',rt,'_',paste(sn,collapse='_'),sep='')
	if (nchar(afname) > 50) { afname <- paste(prefix,'_pairs_',rt,'_many',sep='') }
	afpath <- file.path(rdir,paste(afname, '.tiff', sep = ''))
	tiff(file=afpath, width = 600*ns, height = 600*ns, units = "px", pointsize = 20, compression = "lzw", bg = "white")
	# plot everything
	layout(mat=matrix(c(1:(ns*ns)), nrow=ns, byrow = TRUE))
	cat(paste("plotting", ns, "rows\n"))
	cat(paste(c("|", rep(' ', ns),"|\n|"),sep='',collapse=''))
	for (i in c(1:ns))
	{
		for (k in c(1:ns))
		{
			if (scaleToSample) {
				xMin <- floor(min(data[,k]))
				xMax <- ceiling(max(data[,k]))
				yMin <- floor(min(data[,i]))
				yMax <- ceiling(max(data[,i]))
			} else {
				xMin <- floor(min(data))
				xMax <- ceiling(max(data))
				yMin <- floor(min(data))
				yMax <- ceiling(max(data))
			}
			if (i == k) 
			{
				# histogram in the diagonal
				f.histogram(data[f.comp(data[,k],rt),k], xName = sn[k], xlim = c(xMin, xMax), main = "")
			}
			else if (i < k)
			{	
				# scatterplot with densities on the top right
				colorGrad <- f.genetodensitycolor(data[,k], data[,i])
				f.scatter(data[,k], data[,i], sn[k], sn[i], cexFactor = 1, col = colorGrad$genecols, xlim = c(xMin, xMax), ylim = c(yMin, yMax), main = "")
				abline(0,1,col="black")
			}
			else if (i > k)
			{
				# sorted scatterplot on the bottom left
				f.scatter(s.data[,k], s.data[,i], sn[k], sn[i], cexFactor = 1, xlim = c(xMin, xMax), ylim = c(yMin, yMax), main = "")
				abline(0,1,col="darkorchid3")
			}
		}
		cat("#")
	}
	cat('|\n')
	dev.off()
}




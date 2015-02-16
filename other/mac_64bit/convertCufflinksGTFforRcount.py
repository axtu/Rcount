import sys

usage = """

python %s cufflinksGTF

the cufflinks GTFs can be downloaded from
http://tophat.cbcb.umd.edu/igenomes.shtml
they need to be edited with this script to work with the p502 formatter.

alternative format is printed to std::out

outfile then looks like:
Chr1    TOPHAT   gene    3631    5899    0       +       0       gene_id "AT1G01010"; transcript_id "none";
Chr1    TOPHAT      mRNA    3631    5899    0       +       0       gene_id "AT1G01010"; transcript_id "AT1G01010.1";
Chr1    TOPHAT    mRNA    3631    3913    0       +       0       gene_id "AT1G01010"; transcript_id "AT1G01010.1";

note - all feature mappings come from
http://www.ensembl.org/Help/Faq?id=468
and
http://vega.sanger.ac.uk/info/about/gene_and_transcript_types.html


""" % sys.argv[0]

if len(sys.argv) < 2:
	sys.exit(usage)

cufflinksGTF = sys.argv[1]

global protein_coding_features
global pseudogene_features
global long_noncoding_features
global short_noncoding_features

# the feature lists
protein_coding_features = [
	"IG_C_gene",
	"IG_D_gene",
	"IG_gene",
	"IG_J_gene",
	"IG_LV_gene",
	"IG_M_gene",
	"IG_V_gene",
	"IG_Z_gene",
	"nonsense_mediated_decay",
	"nontranslating_CDS",
	"non_stop_decay",
	"polymorphic",
	"polymorphic_pseudogene",
	"protein_coding",
	"TR_C_gene",
	"TR_D_gene",
	"TR_gene",
	"TR_J_gene",
	"TR_V_gene"
	]

pseudogene_features = [
	"disrupted_domain",
	"IG_C_pseudogene",
	"IG_J_pseudogene",
	"IG_pseudogene",
	"IG_V_pseudogene",
	"processed_pseudogene",
	"pseudogene",
	"transcribed_processed_pseudogene",
	"transcribed_unitary_pseudogene",
	"transcribed_unprocessed_pseudogene",
	"translated_processed_pseudogene",
	"TR_J_pseudogene",
	"TR_pseudogene",
	"TR_V_pseudogene",
	"unitary_pseudogene",
	"unprocessed_pseudogene"
	]

long_noncoding_features = [
	"3prime_overlapping_ncrna",
	"ambiguous_orf",
	"antisense",
	"antisense_RNA",
	"lincRNA",
	"ncrna_host",
	"non_coding",
	"processed_transcript",
	"retained_intron",
	"sense_intronic",
	"sense_overlapping"
	]

short_noncoding_features = [
	"miRNA",
	"miRNA_pseudogene",
	"misc_RNA",
	"misc_RNA_pseudogene",
	"Mt_rRNA",
	"Mt_tRNA",
	"Mt_tRNA_pseudogene",
	"ncRNA",
	"ncRNA_pseudogene",
	"rRNA",
	"rRNA_pseudogene",
	"scRNA",
	"scRNA_pseudogene",
	"snlRNA", "snoRNA",
	"snoRNA_pseudogene",
	"snRNA",
	"snRNA_pseudogene",
	"tRNA",
	"tRNA_pseudogene"
	]

class annoNode():
	
	def __init__(self, chrom, source, feature, start, end, score, strand, frame, gene_id, transcript_id, nodeType):
		self.chrom = chrom
		self.source = "tophat_anno"
		self.feature = feature
		self.start = start
		self.end = end
		self.score = score
		self.strand = strand
		self.frame = frame
		self.gene_id = gene_id
		self.transcript_id = transcript_id
		self.nodeType = nodeType
		self.subEntries = []
		if source in protein_coding_features:
			if nodeType == "LOCUS":
				self.feature = "protein_coding_locus"
			elif nodeType == "TRANSCRIPT":
				if feature == "CDS":
					self.feature = "CDSPROTEIN"
				else:
					self.feature = source
		elif source in pseudogene_features:
			if nodeType == "LOCUS":
				self.feature = "pseudogene_locus"
			elif nodeType == "TRANSCRIPT":
				self.feature = source
		elif source in long_noncoding_features:
			if nodeType == "LOCUS":
				self.feature = "long_noncoding_locus"
			elif nodeType == "TRANSCRIPT":
				self.feature = source
		elif source in short_noncoding_features:
			if nodeType == "LOCUS":
				self.feature = "short_noncoding_locus"
			elif nodeType == "TRANSCRIPT":
				self.feature = source
		else:
			if nodeType == "LOCUS":
				self.feature = "other_locus"
			elif nodeType == "TRANSCRIPT":
				self.feature = source
		#if nodeType == "LOCUS":
			#if source in ["protein_coding", "snRNA", "tRNA", "rRNA", "miRNA", "snoRNA", "ncRNA", "snlRNA"]:
				#self.feature = "gene"
			#elif source == "pseudogene":
				#self.feature = source
			#elif source == "transposable_element_gene":
				#self.feature = source
			#else:
				#errMess = "unknown source: %s" % source
				#sys.exit(errMess)
		#elif nodeType == "TRANSCRIPT":
			#if source in ["protein_coding"]:
				#if feature == "CDS":
					#self.feature = "protein"
				#else:
					#self.feature = "mRNA"
			#elif source in ["snRNA", "tRNA", "rRNA", "miRNA", "snoRNA", "ncRNA", "snlRNA"]:
				#self.feature = source
			#elif source == "pseudogene":
				#self.feature = "pseudogenic_transcript"
			#elif source == "transposable_element_gene":
				#self.feature = "mRNA"
			#else:
				#errMess = "unknown source: %s" % source
				#sys.exit(errMess)
	
	def __str__(self):
		out = '\t'.join([self.chrom, self.source, self.feature, str(self.start), str(self.end), str(self.score), self.strand, self.frame, 'gene_id "'+self.gene_id+'"; transcript_id "'+self.transcript_id+'";'])
		if len(self.subEntries) > 0:
			self.subEntries.sort(lambda x, y: cmp(x.start, y.start))
			subOut = '\n'.join([str(x) for x in self.subEntries])
			out = out + '\n' + subOut
		return out
	
	def getStartEnd(self):
		if len(self.subEntries) > 0:
			for mod in self.subEntries:
				mod.getStartEnd()
			self.start = min([x.start for x in self.subEntries])
			self.end = max([x.end for x in self.subEntries])
	
	def addExon(self, chrom, source, feature, start, end, score, strand, frame, gene_id, transcript_id):
		if self.nodeType == "LOCUS":
			added = False
			for mod in self.subEntries:
				if mod.transcript_id == transcript_id:
					mod.addExon(chrom, source, feature, start, end, score, strand, frame, gene_id, transcript_id)
					added = True
					break
			if not added:
				newEntry = annoNode(chrom, source, feature, start, end, score, strand, frame, gene_id, transcript_id, "TRANSCRIPT")
				newEntry.addExon(chrom, source, feature, start, end, score, strand, frame, gene_id, transcript_id)
				self.subEntries.append(newEntry)
		else:
			newEntry = annoNode(chrom, source, feature, start, end, score, strand, frame, gene_id, transcript_id, "EXON")
			self.subEntries.append(newEntry)
		

def decode_gtf(line):
	fields = line[:-1].split('\t')
	chrom = fields[0]
	source = fields[1]
	feature = fields[2]
	start = int(fields[3])
	end = int(fields[4])
	try:
		score = float(fields[5])
	except ValueError:
		score = 0
	strand = fields[6]
	frame = fields[7]
	rest = fields[8]
	rest_fields = rest[:-2].split('"; ')
	restDict = {}
	for rf in rest_fields:
		key, value = rf.split(' "')
		restDict[key] = value
	gene_id = restDict["gene_id"]
	transcript_id = restDict["transcript_id"]
	return (chrom, source, feature, start, end, score, strand, frame, gene_id, transcript_id)

# load anno

anno = []
nameToIndex = {}
with open(cufflinksGTF, 'rb') as infile:
	for line in infile:
		chrom, source, feature, start, end, score, strand, frame, gene_id, transcript_id = decode_gtf(line)
		if feature not in ["exon", "CDS"]:
			continue
		if feature == "CDS":
			transcript_id += "_Protein"
		if not nameToIndex.has_key(gene_id):
			newEntry = annoNode(chrom, source, feature, start, end, score, strand, frame, gene_id, "none", "LOCUS")
			nameToIndex[gene_id] = len(anno)
			anno.append(newEntry)
		anno[nameToIndex[gene_id]].addExon(chrom, source, feature, start, end, score, strand, frame, gene_id, transcript_id)

for gene in anno:
	gene.getStartEnd()
	print gene
















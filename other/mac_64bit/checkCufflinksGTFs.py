import sys

fileRoot = "/media/DataDisk1/GFF3files/p502_annotation_source/source_gtfs/"
drosophila = "Dm_ensembl_BDGP5.25_genes.gtf"
arabidopsis = "At_ensembl_TAIR10_genes.gtf"
bos = "Bt_ensembl_Btau_4.0_genes.gtf"
caen = "Ce_ensembl_WS220_genes.gtf"
gallus = "Gg_ensembl_WASHUC2_genes.gtf"
sac = "Sc_ensembl_EF4_genes.gtf"
canis = "Cf_ensembl_BROADD2_genes.gtf"
homo = "Hs_ensembl_GRCh37_genes.gtf"
mus = "Mm_ensembl_NCBIM37_genes.gtf"
rattus = "Rn_ensembl_RGSC3.4_genes.gtf"

infileList = [drosophila, arabidopsis, bos, caen, gallus, sac, canis, rattus, mus, homo]

featureTypes = {}
for ifn in infileList:
	print >> sys.stderr, "processing: " + ifn
	with open(fileRoot+ifn, 'rb') as infile:
		spec = ifn.split('_')[0]
		for line in infile:
			if line[0] == "#":
				continue
			fields = line[:-1].split('\t')
			ft = fields[1]
			if not featureTypes.has_key(ft):
				featureTypes[ft] = set([])
			featureTypes[ft].add(spec)

for ft, specs in featureTypes.items():
	print >> sys.stderr, ft + ":\t" + ', '.join(list(specs))
% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/findMarkersTree.R
\name{plotMarkerHeatmap}
\alias{plotMarkerHeatmap}
\title{Generate heatmap for a marker decision tree}
\usage{
plotMarkerHeatmap(
  tree,
  counts,
  branchPoint,
  featureLabels,
  topFeatures = 10,
  silent = FALSE
)
}
\arguments{
\item{tree}{A decision tree returned from \link{findMarkersTree} function.}

\item{counts}{Numeric matrix. Gene-by-cell counts matrix.}

\item{branchPoint}{Character. Name of branch point to plot heatmap for.
Name should match those in \emph{tree$branchPoints}.}

\item{featureLabels}{List of feature cluster assignments. Length should
be equal to number of rows in counts matrix, and formatting should match
that used in \emph{findMarkersTree()}. Required when using clusters
of features and not previously provided to \emph{findMarkersTree()}}

\item{topFeatures}{Integer. Number of genes to plot per marker module.
Genes are sorted based on their AUC for their respective cluster.
Default is 10.}

\item{silent}{Logical. Whether to avoid plotting heatmap to screen.
Default is FALSE.}
}
\value{
A heatmap visualizing the counts matrix for the cells and genes at
the specified branch point.
}
\description{
Creates heatmap for a specified branch point in a marker tree.
}
\examples{
\dontrun{
# Generate simulated single-cell dataset using celda
sim_counts <- simulateCells("celda_CG", K = 4, L = 10, G = 100)

# Celda clustering into 5 clusters & 10 modules
cm <- celda_CG(sim_counts, K = 5, L = 10, verbose = FALSE)

# Get features matrix and cluster assignments
factorized <- factorizeMatrix(cm)
features <- factorized$proportions$cell
class <- celdaClusters(cm)

# Generate Decision Tree
DecTree <- findMarkersTree(features, class, threshold = 1)

# Plot example heatmap
plotMarkerHeatmap(DecTree, assay(sim_counts),
  branchPoint = "top_level",
  featureLabels = paste0("L", celdaModules(cm)))
}
}

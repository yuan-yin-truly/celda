% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/moduleHeatmap.R
\name{moduleHeatmap}
\alias{moduleHeatmap}
\alias{moduleHeatmap,SingleCellExperiment-method}
\title{Heatmap for featureModules}
\usage{
moduleHeatmap(x, ...)

\S4method{moduleHeatmap}{SingleCellExperiment}(
  x,
  useAssay = "counts",
  altExpName = "featureSubset",
  featureModule = NULL,
  col = circlize::colorRamp2(c(-2, 0, 2), c("#1E90FF", "#FFFFFF", "#CD2626")),
  topCells = 100,
  topFeatures = NULL,
  normalizedCounts = NA,
  normalize = "proportion",
  transformationFun = sqrt,
  scaleRow = scale,
  showFeaturenames = TRUE,
  trim = c(-2, 2),
  rowFontSize = NULL,
  showHeatmapLegend = FALSE,
  showTopAnnotationLegend = FALSE,
  showTopAnnotationName = FALSE,
  topAnnotationHeight = 5,
  showModuleLabel = TRUE,
  moduleLabel = "auto",
  moduleLabelSize = NULL,
  width = "auto",
  height = "auto",
  unit = "mm",
  ncol = NULL,
  useRaster = TRUE,
  ...
)
}
\arguments{
\item{x}{A numeric \link{matrix} of counts or a
\linkS4class{SingleCellExperiment}
with the matrix located in the assay slot under \code{useAssay}.
Rows represent features and columns represent cells.}

\item{...}{Additional parameters passed to \link[ComplexHeatmap]{Heatmap}.}

\item{useAssay}{A string specifying which \link{assay}
slot to use if \code{x} is a
\linkS4class{SingleCellExperiment} object. Default "counts".}

\item{altExpName}{The name for the \link{altExp} slot
to use. Default "featureSubset".}

\item{featureModule}{Integer Vector. The featureModule(s) to display.
Multiple modules can be included in a vector. Default \code{NULL} which
plots all module heatmaps.}

\item{col}{Passed to \link[ComplexHeatmap]{Heatmap}. Set color boundaries
and colors.}

\item{topCells}{Integer. Number of cells with the highest and lowest
probabilities for each module to include in the heatmap. For example, if
\code{topCells = 50}, the 50 cells with the lowest probabilities and
the 50 cells
with the highest probabilities for each featureModule will be included. If
NULL, all cells will be plotted. Default 100.}

\item{topFeatures}{Integer. Plot `topFeatures` features with the highest
probabilities in the module heatmap for each featureModule. If \code{NULL},
plot all features in the module. Default \code{NULL}.}

\item{normalizedCounts}{Integer matrix. Rows represent features and columns
represent cells. If you have a normalized matrix result from
\link{normalizeCounts}, you can pass through the result here to
skip the normalization step in this function. Make sure the colnames and
rownames match the object in x. This matrix should
correspond to one generated from this count matrix
\code{assay(altExp(x, altExpName), i = useAssay)}. If \code{NA},
normalization will be carried out in the following form
\code{normalizeCounts(assay(altExp(x, altExpName), i = useAssay),
normalize = "proportion", transformationFun = sqrt)}.
Use of this parameter is particularly useful for plotting many
module heatmaps, where normalizing the counts matrix repeatedly would
be too time consuming. Default NA.}

\item{normalize}{Character. Passed to \link{normalizeCounts} if
\code{normalizedCounts} is \code{NA}.
Divides counts by the library sizes for each cell. One of 'proportion',
'cpm', 'median', or 'mean'. 'proportion' uses the total counts for each
cell as the library size. 'cpm' divides the library size of each cell by
one million to produce counts per million. 'median' divides the library
size of each cell by the median library size across all cells. 'mean'
divides the library size of each cell by the mean library size across all
cells. Default "proportion".}

\item{transformationFun}{Function. Passed to \link{normalizeCounts} if
\code{normalizedCounts} is \code{NA}. Applys a transformation such as
\link{sqrt}, \link{log}, \link{log2}, \link{log10}, or \link{log1p}.
If NULL, no transformation will be applied. Occurs after normalization.
Default \link{sqrt}.}

\item{scaleRow}{Function. Which function to use to scale each individual
row. Set to NULL to disable. Occurs after normalization and log
transformation. For example, \link{scale} will Z-score transform each row.
Default \link{scale}.}

\item{showFeaturenames}{Logical. Wheter feature names should be displayed.
Default TRUE.}

\item{trim}{Numeric vector. Vector of length two that specifies the lower
and upper bounds for plotting the data. This threshold is applied
after row scaling. Set to NULL to disable. Default \code{c(-2,2)}.}

\item{rowFontSize}{Integer. Font size for feature names. If \code{NULL},
then the size will automatically be determined. Default \code{NULL}.}

\item{showHeatmapLegend}{Passed to \link[ComplexHeatmap]{Heatmap}. Show
legend for expression levels.}

\item{showTopAnnotationLegend}{Passed to
\link[ComplexHeatmap]{HeatmapAnnotation}. Show legend for cell annotation.}

\item{showTopAnnotationName}{Passed to
\link[ComplexHeatmap]{HeatmapAnnotation}. Show heatmap top annotation name.}

\item{topAnnotationHeight}{Passed to
\link[ComplexHeatmap]{HeatmapAnnotation}. Column annotation height.
\link[ComplexHeatmap]{rowAnnotation}. Show legend for module annotation.}

\item{showModuleLabel}{Show left side module labels.}

\item{moduleLabel}{The left side row titles for module heatmap. Must be
vector of the same length as \code{featureModule}. Default "auto", which
automatically pulls module labels from \code{x}.}

\item{moduleLabelSize}{Passed to \link{gpar}. The size of text (in points).}

\item{width}{Passed to \link[multipanelfigure]{multi_panel_figure}. The
width of the output figure.}

\item{height}{Passed to \link[multipanelfigure]{multi_panel_figure}. The
height of the output figure.}

\item{unit}{Passed to \link[multipanelfigure]{multi_panel_figure}. Single
character object defining the unit of all dimensions defined.}

\item{ncol}{Integer. Number of columns of module heatmaps. If \code{NULL},
then this will be automatically calculated so that the number of columns
and rows will be approximately the same. Default \code{NULL}.}

\item{useRaster}{Boolean. Rasterizing will make the heatmap a single object
and reduced the memory of the plot and the size of a file. If \code{NULL},
then rasterization will be automatically determined by the underlying
\link[ComplexHeatmap]{Heatmap} function. Default \code{TRUE}.}
}
\value{
A \link[multipanelfigure]{multi_panel_figure} object if plotting
 more than one module heatmaps. Otherwise a
 \link[ComplexHeatmap]{HeatmapList} object is returned.
}
\description{
Renders a heatmap for selected \code{featureModule}. Cells are
 ordered from those with the lowest probability of the module on the left to
 the highest probability on the right. Features are ordered from those
 with the highest probability in the module
 on the top to the lowest probability on the bottom. Use of
 \link[multipanelfigure]{save_multi_panel_figure} is recommended for
 outputting figures in various formats.
}
\examples{
data(sceCeldaCG)
moduleHeatmap(sceCeldaCG, width = 250, height = 250)
}

% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/celda_functions.R
\name{recodeClusterZ}
\alias{recodeClusterZ}
\title{Recode cell cluster labels}
\usage{
recodeClusterZ(sce, from, to, altExpName = "featureSubset")
}
\arguments{
\item{sce}{\linkS4class{SingleCellExperiment} object returned from
\link{celda_C} or \link{celda_CG}. Must contain column
\code{celda_cell_cluster} in
\code{\link{colData}(altExp(sce, altExpName))}.}

\item{from}{Numeric vector. Unique values in the range of
\code{seq(celdaClusters(sce, altExpName = altExpName))} that correspond to
the original cluster
labels in \code{sce}.}

\item{to}{Numeric vector. Unique values in the range of
\code{seq(celdaClusters(sce, altExpName = altExpName))} that correspond to
the new cluster labels.}

\item{altExpName}{The name for the \link{altExp} slot
to use. Default "featureSubset".}
}
\value{
\linkS4class{SingleCellExperiment} object with recoded cell
 cluster labels.
}
\description{
Recode cell subpopulaton clusters using a mapping in the
 \code{from} and \code{to} arguments.
}
\examples{
data(sceCeldaCG)
sceReorderedZ <- recodeClusterZ(sceCeldaCG, c(1, 3), c(3, 1))
}

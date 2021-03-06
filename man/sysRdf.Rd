% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/data.R
\docType{data}
\name{sysRdf}
\alias{sysRdf}
\title{Example rdf file with annual data.}
\format{A multi level list. \code{sysRdf$meta} provides a description
of the RiverWare run used to generate this data.}
\source{
Bureau of Reclamation, 2016
}
\usage{
sysRdf
}
\description{
An example of an rdf file that has already been read into R via
\code{\link[=read.rdf]{read.rdf()}}. This example contains 23 slots, at the annual
timestep for 11 years and 25 runs. Slots only include
flags. Use this with \code{\link[=rdf_slot_names]{rdf_slot_names()}} or
\code{\link[=rdf_get_slot]{rdf_get_slot()}} to use the data.
}
\keyword{datasets}

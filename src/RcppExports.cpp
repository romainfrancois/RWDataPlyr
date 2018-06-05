// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rdf_to_rwtbl_cpp
List rdf_to_rwtbl_cpp(std::vector<std::string> rdf, std::vector<std::string> keep_cols, String const scenario, bool add_ym);
RcppExport SEXP _RWDataPlyr_rdf_to_rwtbl_cpp(SEXP rdfSEXP, SEXP keep_colsSEXP, SEXP scenarioSEXP, SEXP add_ymSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type rdf(rdfSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type keep_cols(keep_colsSEXP);
    Rcpp::traits::input_parameter< String const >::type scenario(scenarioSEXP);
    Rcpp::traits::input_parameter< bool >::type add_ym(add_ymSEXP);
    rcpp_result_gen = Rcpp::wrap(rdf_to_rwtbl_cpp(rdf, keep_cols, scenario, add_ym));
    return rcpp_result_gen;
END_RCPP
}
// rdf_to_rwtbl_cpp_old
DataFrame rdf_to_rwtbl_cpp_old(std::vector<std::string> rdf);
RcppExport SEXP _RWDataPlyr_rdf_to_rwtbl_cpp_old(SEXP rdfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type rdf(rdfSEXP);
    rcpp_result_gen = Rcpp::wrap(rdf_to_rwtbl_cpp_old(rdf));
    return rcpp_result_gen;
END_RCPP
}

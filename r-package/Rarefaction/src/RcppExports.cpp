// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_rarefaction
List rcpp_rarefaction(Rcpp::String input, Rcpp::String output, NumericMatrix rMatrix, StringVector inColNames, StringVector inRowNames, int repeats, long rareDepth, int NoOfMatrices, bool verbose, bool returnObject, bool transpose);
RcppExport SEXP rarefaction_rcpp_rarefaction(SEXP inputSEXP, SEXP outputSEXP, SEXP rMatrixSEXP, SEXP inColNamesSEXP, SEXP inRowNamesSEXP, SEXP repeatsSEXP, SEXP rareDepthSEXP, SEXP NoOfMatricesSEXP, SEXP verboseSEXP, SEXP returnObjectSEXP, SEXP transposeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::String >::type input(inputSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type output(outputSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type rMatrix(rMatrixSEXP);
    Rcpp::traits::input_parameter< StringVector >::type inColNames(inColNamesSEXP);
    Rcpp::traits::input_parameter< StringVector >::type inRowNames(inRowNamesSEXP);
    Rcpp::traits::input_parameter< int >::type repeats(repeatsSEXP);
    Rcpp::traits::input_parameter< long >::type rareDepth(rareDepthSEXP);
    Rcpp::traits::input_parameter< int >::type NoOfMatrices(NoOfMatricesSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< bool >::type returnObject(returnObjectSEXP);
    Rcpp::traits::input_parameter< bool >::type transpose(transposeSEXP);
    __result = Rcpp::wrap(rcpp_rarefaction(input, output, rMatrix, inColNames, inRowNames, repeats, rareDepth, NoOfMatrices, verbose, returnObject, transpose));
    return __result;
END_RCPP
}

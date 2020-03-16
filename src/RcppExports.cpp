// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// decontXEM
Rcpp::List decontXEM(const arma::sp_mat& counts, const NumericVector& counts_colsums, const NumericVector& theta, const NumericMatrix& eta, const NumericMatrix& phi, const IntegerVector& z, const double& pseudocount);
RcppExport SEXP _celda_decontXEM(SEXP countsSEXP, SEXP counts_colsumsSEXP, SEXP thetaSEXP, SEXP etaSEXP, SEXP phiSEXP, SEXP zSEXP, SEXP pseudocountSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type counts(countsSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type counts_colsums(counts_colsumsSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type phi(phiSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type z(zSEXP);
    Rcpp::traits::input_parameter< const double& >::type pseudocount(pseudocountSEXP);
    rcpp_result_gen = Rcpp::wrap(decontXEM(counts, counts_colsums, theta, eta, phi, z, pseudocount));
    return rcpp_result_gen;
END_RCPP
}
// decontXLogLik
double decontXLogLik(const arma::sp_mat& counts, const NumericVector& theta, const NumericMatrix& eta, const NumericMatrix& phi, const IntegerVector& z, const double& pseudocount);
RcppExport SEXP _celda_decontXLogLik(SEXP countsSEXP, SEXP thetaSEXP, SEXP etaSEXP, SEXP phiSEXP, SEXP zSEXP, SEXP pseudocountSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type counts(countsSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type phi(phiSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type z(zSEXP);
    Rcpp::traits::input_parameter< const double& >::type pseudocount(pseudocountSEXP);
    rcpp_result_gen = Rcpp::wrap(decontXLogLik(counts, theta, eta, phi, z, pseudocount));
    return rcpp_result_gen;
END_RCPP
}
// decontXInitialize
Rcpp::List decontXInitialize(const arma::sp_mat& counts, const NumericVector& theta, const IntegerVector& z, const double& pseudocount);
RcppExport SEXP _celda_decontXInitialize(SEXP countsSEXP, SEXP thetaSEXP, SEXP zSEXP, SEXP pseudocountSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type counts(countsSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type z(zSEXP);
    Rcpp::traits::input_parameter< const double& >::type pseudocount(pseudocountSEXP);
    rcpp_result_gen = Rcpp::wrap(decontXInitialize(counts, theta, z, pseudocount));
    return rcpp_result_gen;
END_RCPP
}
// calculateNativeMatrix
arma::sp_mat calculateNativeMatrix(const arma::sp_mat& counts, const arma::sp_mat& native_counts, const NumericVector& theta, const NumericMatrix& eta, const NumericMatrix& phi, const IntegerVector& z, const IntegerVector row_index, const IntegerVector col_index, const double& pseudocount);
RcppExport SEXP _celda_calculateNativeMatrix(SEXP countsSEXP, SEXP native_countsSEXP, SEXP thetaSEXP, SEXP etaSEXP, SEXP phiSEXP, SEXP zSEXP, SEXP row_indexSEXP, SEXP col_indexSEXP, SEXP pseudocountSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type counts(countsSEXP);
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type native_counts(native_countsSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type eta(etaSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type phi(phiSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type z(zSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type row_index(row_indexSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type col_index(col_indexSEXP);
    Rcpp::traits::input_parameter< const double& >::type pseudocount(pseudocountSEXP);
    rcpp_result_gen = Rcpp::wrap(calculateNativeMatrix(counts, native_counts, theta, eta, phi, z, row_index, col_index, pseudocount));
    return rcpp_result_gen;
END_RCPP
}
// cG_calcGibbsProbY_Simple
NumericVector cG_calcGibbsProbY_Simple(const IntegerMatrix counts, IntegerVector nGbyTS, IntegerMatrix nTSbyC, IntegerVector nbyTS, IntegerVector nbyG, const IntegerVector y, const int L, const int index, const double gamma, const double beta, const double delta);
RcppExport SEXP _celda_cG_calcGibbsProbY_Simple(SEXP countsSEXP, SEXP nGbyTSSEXP, SEXP nTSbyCSEXP, SEXP nbyTSSEXP, SEXP nbyGSEXP, SEXP ySEXP, SEXP LSEXP, SEXP indexSEXP, SEXP gammaSEXP, SEXP betaSEXP, SEXP deltaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix >::type counts(countsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nGbyTS(nGbyTSSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type nTSbyC(nTSbyCSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nbyTS(nbyTSSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nbyG(nbyGSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< const int >::type L(LSEXP);
    Rcpp::traits::input_parameter< const int >::type index(indexSEXP);
    Rcpp::traits::input_parameter< const double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< const double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const double >::type delta(deltaSEXP);
    rcpp_result_gen = Rcpp::wrap(cG_calcGibbsProbY_Simple(counts, nGbyTS, nTSbyC, nbyTS, nbyG, y, L, index, gamma, beta, delta));
    return rcpp_result_gen;
END_RCPP
}
// cG_CalcGibbsProbY_ori
NumericVector cG_CalcGibbsProbY_ori(const int index, const IntegerMatrix& counts, const IntegerMatrix& nTSbyC, const IntegerVector& nbyTS, const IntegerVector& nGbyTS, const IntegerVector& nbyG, const IntegerVector& y, const int L, const int nG, const NumericVector& lg_beta, const NumericVector& lg_gamma, const NumericVector& lg_delta, const double delta);
RcppExport SEXP _celda_cG_CalcGibbsProbY_ori(SEXP indexSEXP, SEXP countsSEXP, SEXP nTSbyCSEXP, SEXP nbyTSSEXP, SEXP nGbyTSSEXP, SEXP nbyGSEXP, SEXP ySEXP, SEXP LSEXP, SEXP nGSEXP, SEXP lg_betaSEXP, SEXP lg_gammaSEXP, SEXP lg_deltaSEXP, SEXP deltaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type index(indexSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type counts(countsSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type nTSbyC(nTSbyCSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type nbyTS(nbyTSSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type nGbyTS(nGbyTSSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type nbyG(nbyGSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const int >::type L(LSEXP);
    Rcpp::traits::input_parameter< const int >::type nG(nGSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type lg_beta(lg_betaSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type lg_gamma(lg_gammaSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type lg_delta(lg_deltaSEXP);
    Rcpp::traits::input_parameter< const double >::type delta(deltaSEXP);
    rcpp_result_gen = Rcpp::wrap(cG_CalcGibbsProbY_ori(index, counts, nTSbyC, nbyTS, nGbyTS, nbyG, y, L, nG, lg_beta, lg_gamma, lg_delta, delta));
    return rcpp_result_gen;
END_RCPP
}
// cG_CalcGibbsProbY_fastRow
NumericVector cG_CalcGibbsProbY_fastRow(const int index, const IntegerMatrix& counts, const IntegerMatrix& nTSbyC, const IntegerVector& nbyTS, const IntegerVector& nGbyTS, const IntegerVector& nbyG, const IntegerVector& y, const int L, const int nG, const NumericVector& lg_beta, const NumericVector& lg_gamma, const NumericVector& lg_delta, const double delta);
RcppExport SEXP _celda_cG_CalcGibbsProbY_fastRow(SEXP indexSEXP, SEXP countsSEXP, SEXP nTSbyCSEXP, SEXP nbyTSSEXP, SEXP nGbyTSSEXP, SEXP nbyGSEXP, SEXP ySEXP, SEXP LSEXP, SEXP nGSEXP, SEXP lg_betaSEXP, SEXP lg_gammaSEXP, SEXP lg_deltaSEXP, SEXP deltaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type index(indexSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type counts(countsSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type nTSbyC(nTSbyCSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type nbyTS(nbyTSSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type nGbyTS(nGbyTSSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type nbyG(nbyGSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const int >::type L(LSEXP);
    Rcpp::traits::input_parameter< const int >::type nG(nGSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type lg_beta(lg_betaSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type lg_gamma(lg_gammaSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type lg_delta(lg_deltaSEXP);
    Rcpp::traits::input_parameter< const double >::type delta(deltaSEXP);
    rcpp_result_gen = Rcpp::wrap(cG_CalcGibbsProbY_fastRow(index, counts, nTSbyC, nbyTS, nGbyTS, nbyG, y, L, nG, lg_beta, lg_gamma, lg_delta, delta));
    return rcpp_result_gen;
END_RCPP
}
// cG_CalcGibbsProbY
NumericVector cG_CalcGibbsProbY(const int index, const IntegerMatrix& counts, const IntegerMatrix& nTSbyC, const IntegerVector& nbyTS, const IntegerVector& nGbyTS, const IntegerVector& nbyG, const IntegerVector& y, const int L, const int nG, const NumericVector& lg_beta, const NumericVector& lg_gamma, const NumericVector& lg_delta, const double delta);
RcppExport SEXP _celda_cG_CalcGibbsProbY(SEXP indexSEXP, SEXP countsSEXP, SEXP nTSbyCSEXP, SEXP nbyTSSEXP, SEXP nGbyTSSEXP, SEXP nbyGSEXP, SEXP ySEXP, SEXP LSEXP, SEXP nGSEXP, SEXP lg_betaSEXP, SEXP lg_gammaSEXP, SEXP lg_deltaSEXP, SEXP deltaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type index(indexSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type counts(countsSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type nTSbyC(nTSbyCSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type nbyTS(nbyTSSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type nGbyTS(nGbyTSSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type nbyG(nbyGSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const int >::type L(LSEXP);
    Rcpp::traits::input_parameter< const int >::type nG(nGSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type lg_beta(lg_betaSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type lg_gamma(lg_gammaSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type lg_delta(lg_deltaSEXP);
    Rcpp::traits::input_parameter< const double >::type delta(deltaSEXP);
    rcpp_result_gen = Rcpp::wrap(cG_CalcGibbsProbY(index, counts, nTSbyC, nbyTS, nGbyTS, nbyG, y, L, nG, lg_beta, lg_gamma, lg_delta, delta));
    return rcpp_result_gen;
END_RCPP
}
// eigenMatMultInt
SEXP eigenMatMultInt(const Eigen::Map<Eigen::MatrixXd> A, const Eigen::Map< Eigen::MatrixXi> B);
RcppExport SEXP _celda_eigenMatMultInt(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd> >::type A(ASEXP);
    Rcpp::traits::input_parameter< const Eigen::Map< Eigen::MatrixXi> >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(eigenMatMultInt(A, B));
    return rcpp_result_gen;
END_RCPP
}
// fastNormProp
SEXP fastNormProp(NumericMatrix R_counts, double R_alpha);
RcppExport SEXP _celda_fastNormProp(SEXP R_countsSEXP, SEXP R_alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type R_counts(R_countsSEXP);
    Rcpp::traits::input_parameter< double >::type R_alpha(R_alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(fastNormProp(R_counts, R_alpha));
    return rcpp_result_gen;
END_RCPP
}
// fastNormPropLog
SEXP fastNormPropLog(NumericMatrix R_counts, double R_alpha);
RcppExport SEXP _celda_fastNormPropLog(SEXP R_countsSEXP, SEXP R_alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type R_counts(R_countsSEXP);
    Rcpp::traits::input_parameter< double >::type R_alpha(R_alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(fastNormPropLog(R_counts, R_alpha));
    return rcpp_result_gen;
END_RCPP
}
// fastNormPropSqrt
SEXP fastNormPropSqrt(NumericMatrix R_counts, double R_alpha);
RcppExport SEXP _celda_fastNormPropSqrt(SEXP R_countsSEXP, SEXP R_alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type R_counts(R_countsSEXP);
    Rcpp::traits::input_parameter< double >::type R_alpha(R_alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(fastNormPropSqrt(R_counts, R_alpha));
    return rcpp_result_gen;
END_RCPP
}
// nonzero
SEXP nonzero(NumericMatrix R_counts);
RcppExport SEXP _celda_nonzero(SEXP R_countsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type R_counts(R_countsSEXP);
    rcpp_result_gen = Rcpp::wrap(nonzero(R_counts));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP _colSumByGroup(SEXP, SEXP);
RcppExport SEXP _colSumByGroup_numeric(SEXP, SEXP);
RcppExport SEXP _colSumByGroupChange(SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP _perplexityG(SEXP, SEXP, SEXP, SEXP);
RcppExport SEXP _rowSumByGroup(SEXP, SEXP);
RcppExport SEXP _rowSumByGroup_numeric(SEXP, SEXP);
RcppExport SEXP _rowSumByGroupChange(SEXP, SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_celda_decontXEM", (DL_FUNC) &_celda_decontXEM, 7},
    {"_celda_decontXLogLik", (DL_FUNC) &_celda_decontXLogLik, 6},
    {"_celda_decontXInitialize", (DL_FUNC) &_celda_decontXInitialize, 4},
    {"_celda_calculateNativeMatrix", (DL_FUNC) &_celda_calculateNativeMatrix, 9},
    {"_celda_cG_calcGibbsProbY_Simple", (DL_FUNC) &_celda_cG_calcGibbsProbY_Simple, 11},
    {"_celda_cG_CalcGibbsProbY_ori", (DL_FUNC) &_celda_cG_CalcGibbsProbY_ori, 13},
    {"_celda_cG_CalcGibbsProbY_fastRow", (DL_FUNC) &_celda_cG_CalcGibbsProbY_fastRow, 13},
    {"_celda_cG_CalcGibbsProbY", (DL_FUNC) &_celda_cG_CalcGibbsProbY, 13},
    {"_celda_eigenMatMultInt", (DL_FUNC) &_celda_eigenMatMultInt, 2},
    {"_celda_fastNormProp", (DL_FUNC) &_celda_fastNormProp, 2},
    {"_celda_fastNormPropLog", (DL_FUNC) &_celda_fastNormPropLog, 2},
    {"_celda_fastNormPropSqrt", (DL_FUNC) &_celda_fastNormPropSqrt, 2},
    {"_celda_nonzero", (DL_FUNC) &_celda_nonzero, 1},
    {"_colSumByGroup",         (DL_FUNC) &_colSumByGroup,         2},
    {"_colSumByGroup_numeric", (DL_FUNC) &_colSumByGroup_numeric, 2},
    {"_colSumByGroupChange",   (DL_FUNC) &_colSumByGroupChange,   4},
    {"_perplexityG",           (DL_FUNC) &_perplexityG,           4},
    {"_rowSumByGroup",         (DL_FUNC) &_rowSumByGroup,         2},
    {"_rowSumByGroup_numeric", (DL_FUNC) &_rowSumByGroup_numeric, 2},
    {"_rowSumByGroupChange",   (DL_FUNC) &_rowSumByGroupChange,   4},
    {NULL, NULL, 0}
};

RcppExport void R_init_celda(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

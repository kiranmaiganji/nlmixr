// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// lin_cmt_stan
SEXP lin_cmt_stan(Eigen::Map<Eigen::VectorXd> obs_time, Eigen::Map<Eigen::VectorXd> dose_time, Eigen::Map<Eigen::VectorXd> dose, Eigen::Map<Eigen::VectorXd> Tinf, Eigen::Map<Eigen::VectorXd> params, SEXP oralSEXP, SEXP infusionSEXP, SEXP ncmtSEXP, SEXP parameterizationSEXP);
RcppExport SEXP _nlmixr_lin_cmt_stan(SEXP obs_timeSEXP, SEXP dose_timeSEXP, SEXP doseSEXP, SEXP TinfSEXP, SEXP paramsSEXP, SEXP oralSEXPSEXP, SEXP infusionSEXPSEXP, SEXP ncmtSEXPSEXP, SEXP parameterizationSEXPSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type obs_time(obs_timeSEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type dose_time(dose_timeSEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type dose(doseSEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type Tinf(TinfSEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type oralSEXP(oralSEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type infusionSEXP(infusionSEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type ncmtSEXP(ncmtSEXPSEXP);
    Rcpp::traits::input_parameter< SEXP >::type parameterizationSEXP(parameterizationSEXPSEXP);
    rcpp_result_gen = Rcpp::wrap(lin_cmt_stan(obs_time, dose_time, dose, Tinf, params, oralSEXP, infusionSEXP, ncmtSEXP, parameterizationSEXP));
    return rcpp_result_gen;
END_RCPP
}
// llik_binomial_c
SEXP llik_binomial_c(Eigen::Map<Eigen::VectorXd> y, Eigen::Map<Eigen::VectorXd> N, Eigen::Map<Eigen::VectorXd> params);
RcppExport SEXP _nlmixr_llik_binomial_c(SEXP ySEXP, SEXP NSEXP, SEXP paramsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type y(ySEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type N(NSEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type params(paramsSEXP);
    rcpp_result_gen = Rcpp::wrap(llik_binomial_c(y, N, params));
    return rcpp_result_gen;
END_RCPP
}
// llik_poisson
SEXP llik_poisson(Eigen::Map<Eigen::VectorXd> y, Eigen::Map<Eigen::VectorXd> params);
RcppExport SEXP _nlmixr_llik_poisson(SEXP ySEXP, SEXP paramsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type y(ySEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type params(paramsSEXP);
    rcpp_result_gen = Rcpp::wrap(llik_poisson(y, params));
    return rcpp_result_gen;
END_RCPP
}
// llik_normal
SEXP llik_normal(Eigen::Map<Eigen::VectorXd> y, Eigen::Map<Eigen::VectorXd> params);
RcppExport SEXP _nlmixr_llik_normal(SEXP ySEXP, SEXP paramsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type y(ySEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type params(paramsSEXP);
    rcpp_result_gen = Rcpp::wrap(llik_normal(y, params));
    return rcpp_result_gen;
END_RCPP
}
// llik_betabinomial
SEXP llik_betabinomial(Eigen::Map<Eigen::VectorXd> y, Eigen::Map<Eigen::VectorXd> N, Eigen::Map<Eigen::VectorXd> params);
RcppExport SEXP _nlmixr_llik_betabinomial(SEXP ySEXP, SEXP NSEXP, SEXP paramsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type y(ySEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type N(NSEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type params(paramsSEXP);
    rcpp_result_gen = Rcpp::wrap(llik_betabinomial(y, N, params));
    return rcpp_result_gen;
END_RCPP
}
// llik_student_t
SEXP llik_student_t(Eigen::Map<Eigen::VectorXd> y, Eigen::Map<Eigen::VectorXd> params);
RcppExport SEXP _nlmixr_llik_student_t(SEXP ySEXP, SEXP paramsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type y(ySEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type params(paramsSEXP);
    rcpp_result_gen = Rcpp::wrap(llik_student_t(y, params));
    return rcpp_result_gen;
END_RCPP
}
// llik_beta
SEXP llik_beta(Eigen::Map<Eigen::VectorXd> y, Eigen::Map<Eigen::VectorXd> params);
RcppExport SEXP _nlmixr_llik_beta(SEXP ySEXP, SEXP paramsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type y(ySEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type params(paramsSEXP);
    rcpp_result_gen = Rcpp::wrap(llik_beta(y, params));
    return rcpp_result_gen;
END_RCPP
}
// llik_neg_binomial
SEXP llik_neg_binomial(Eigen::Map<Eigen::VectorXd> y, Eigen::Map<Eigen::VectorXd> params);
RcppExport SEXP _nlmixr_llik_neg_binomial(SEXP ySEXP, SEXP paramsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type y(ySEXP);
    Rcpp::traits::input_parameter< Eigen::Map<Eigen::VectorXd> >::type params(paramsSEXP);
    rcpp_result_gen = Rcpp::wrap(llik_neg_binomial(y, params));
    return rcpp_result_gen;
END_RCPP
}

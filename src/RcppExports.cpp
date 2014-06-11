// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP CCD_rcpp_hello_world() {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        List __result = rcpp_hello_world();
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ccdSetPrior
void ccdSetPrior(SEXP inRcppCcdInterface, const std::string& priorTypeName, double variance, SEXP excludeNumeric);
RcppExport SEXP CCD_ccdSetPrior(SEXP inRcppCcdInterfaceSEXP, SEXP priorTypeNameSEXP, SEXP varianceSEXP, SEXP excludeNumericSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP );
        Rcpp::traits::input_parameter< const std::string& >::type priorTypeName(priorTypeNameSEXP );
        Rcpp::traits::input_parameter< double >::type variance(varianceSEXP );
        Rcpp::traits::input_parameter< SEXP >::type excludeNumeric(excludeNumericSEXP );
        ccdSetPrior(inRcppCcdInterface, priorTypeName, variance, excludeNumeric);
    }
    return R_NilValue;
END_RCPP
}
// ccdPredictModel
List ccdPredictModel(SEXP inRcppCcdInterface);
RcppExport SEXP CCD_ccdPredictModel(SEXP inRcppCcdInterfaceSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP );
        List __result = ccdPredictModel(inRcppCcdInterface);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ccdSetControl
void ccdSetControl(SEXP inRcppCcdInterface, int maxIterations, double tolerance);
RcppExport SEXP CCD_ccdSetControl(SEXP inRcppCcdInterfaceSEXP, SEXP maxIterationsSEXP, SEXP toleranceSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP );
        Rcpp::traits::input_parameter< int >::type maxIterations(maxIterationsSEXP );
        Rcpp::traits::input_parameter< double >::type tolerance(toleranceSEXP );
        ccdSetControl(inRcppCcdInterface, maxIterations, tolerance);
    }
    return R_NilValue;
END_RCPP
}
// ccdFitModel
List ccdFitModel(SEXP inRcppCcdInterface);
RcppExport SEXP CCD_ccdFitModel(SEXP inRcppCcdInterfaceSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP );
        List __result = ccdFitModel(inRcppCcdInterface);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ccdLogModel
List ccdLogModel(SEXP inRcppCcdInterface);
RcppExport SEXP CCD_ccdLogModel(SEXP inRcppCcdInterfaceSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type inRcppCcdInterface(inRcppCcdInterfaceSEXP );
        List __result = ccdLogModel(inRcppCcdInterface);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ccdInitializeModel
List ccdInitializeModel(SEXP inModelData, const std::string& modelType, bool computeMLE = false);
RcppExport SEXP CCD_ccdInitializeModel(SEXP inModelDataSEXP, SEXP modelTypeSEXP, SEXP computeMLESEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type inModelData(inModelDataSEXP );
        Rcpp::traits::input_parameter< const std::string& >::type modelType(modelTypeSEXP );
        Rcpp::traits::input_parameter< bool >::type computeMLE(computeMLESEXP );
        List __result = ccdInitializeModel(inModelData, modelType, computeMLE);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// isRcppPtrNull
bool isRcppPtrNull(SEXP x);
RcppExport SEXP CCD_isRcppPtrNull(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type x(xSEXP );
        bool __result = isRcppPtrNull(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ccdGetNumberOfStrata
size_t ccdGetNumberOfStrata(Environment x);
RcppExport SEXP CCD_ccdGetNumberOfStrata(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Environment >::type x(xSEXP );
        size_t __result = ccdGetNumberOfStrata(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ccdGetNumberOfColumns
size_t ccdGetNumberOfColumns(Environment x);
RcppExport SEXP CCD_ccdGetNumberOfColumns(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Environment >::type x(xSEXP );
        size_t __result = ccdGetNumberOfColumns(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ccdGetNumberOfRows
size_t ccdGetNumberOfRows(Environment x);
RcppExport SEXP CCD_ccdGetNumberOfRows(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Environment >::type x(xSEXP );
        size_t __result = ccdGetNumberOfRows(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ccdReadData
List ccdReadData(const std::string& fileName, const std::string& modelTypeName);
RcppExport SEXP CCD_ccdReadData(SEXP fileNameSEXP, SEXP modelTypeNameSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const std::string& >::type fileName(fileNameSEXP );
        Rcpp::traits::input_parameter< const std::string& >::type modelTypeName(modelTypeNameSEXP );
        List __result = ccdReadData(fileName, modelTypeName);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// ccdModelData
List ccdModelData(SEXP pid, SEXP y, SEXP z, SEXP offs, SEXP dx, SEXP sx, SEXP ix);
RcppExport SEXP CCD_ccdModelData(SEXP pidSEXP, SEXP ySEXP, SEXP zSEXP, SEXP offsSEXP, SEXP dxSEXP, SEXP sxSEXP, SEXP ixSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type pid(pidSEXP );
        Rcpp::traits::input_parameter< SEXP >::type y(ySEXP );
        Rcpp::traits::input_parameter< SEXP >::type z(zSEXP );
        Rcpp::traits::input_parameter< SEXP >::type offs(offsSEXP );
        Rcpp::traits::input_parameter< SEXP >::type dx(dxSEXP );
        Rcpp::traits::input_parameter< SEXP >::type sx(sxSEXP );
        Rcpp::traits::input_parameter< SEXP >::type ix(ixSEXP );
        List __result = ccdModelData(pid, y, z, offs, dx, sx, ix);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}

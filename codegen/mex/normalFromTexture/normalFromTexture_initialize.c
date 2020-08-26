/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * normalFromTexture_initialize.c
 *
 * Code generation for function 'normalFromTexture_initialize'
 *
 */

/* Include files */
#include "normalFromTexture_initialize.h"
#include "_coder_normalFromTexture_mex.h"
#include "normalFromTexture.h"
#include "normalFromTexture_data.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;

/* Function Declarations */
static void normalFromTexture_once(void);

/* Function Definitions */
static void normalFromTexture_once(void)
{
  mex_InitInfAndNan();

  /* Allocate instance data */
  covrtAllocateInstanceData(&emlrtCoverageInstance);

  /* Initialize Coverage Information */
  covrtScriptInit(&emlrtCoverageInstance,
                  "C:\\Users\\Anton\\Desktop\\NormalFromTexture\\normalFromTexture.m",
                  0U, 1U, 1U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(&emlrtCoverageInstance, 0U, 0U, "normalFromTexture", 0, -1, 966);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(&emlrtCoverageInstance, 0U, 0U, 338, -1, 961);

  /* Initialize If Information */
  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(&emlrtCoverageInstance, 0U);
}

void normalFromTexture_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtLicenseCheckR2012b(&st, "Image_Toolbox", 2);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    normalFromTexture_once();
  }
}

/* End of code generation (normalFromTexture_initialize.c) */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_normalFromTexture_api.h
 *
 * Code generation for function '_coder_normalFromTexture_api'
 *
 */

#ifndef _CODER_NORMALFROMTEXTURE_API_H
#define _CODER_NORMALFROMTEXTURE_API_H

/* Include files */
#include <stddef.h>
#include <stdlib.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"

/* Type Definitions */
#ifndef struct_emxArray_uint8_T
#define struct_emxArray_uint8_T

struct emxArray_uint8_T
{
  uint8_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_uint8_T*/

#ifndef typedef_emxArray_uint8_T
#define typedef_emxArray_uint8_T

typedef struct emxArray_uint8_T emxArray_uint8_T;

#endif                                 /*typedef_emxArray_uint8_T*/

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void normalFromTexture(emxArray_uint8_T *img, real_T strength,
  emxArray_uint8_T *N);
extern void normalFromTexture_api(const mxArray * const prhs[2], int32_T nlhs,
  const mxArray *plhs[1]);
extern void normalFromTexture_atexit(void);
extern void normalFromTexture_initialize(void);
extern void normalFromTexture_terminate(void);
extern void normalFromTexture_xil_shutdown(void);
extern void normalFromTexture_xil_terminate(void);

#endif

/* End of code generation (_coder_normalFromTexture_api.h) */

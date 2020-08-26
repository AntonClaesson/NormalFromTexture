/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * normalFromTexture_emxAPI.h
 *
 * Code generation for function 'normalFromTexture_emxAPI'
 *
 */

#ifndef NORMALFROMTEXTURE_EMXAPI_H
#define NORMALFROMTEXTURE_EMXAPI_H

/* Include files */
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "normalFromTexture_types.h"

/* Function Declarations */
extern emxArray_uint8_T *emxCreateND_uint8_T(int numDimensions, const int *size);
extern emxArray_uint8_T *emxCreateWrapperND_uint8_T(unsigned char *data, int
  numDimensions, const int *size);
extern emxArray_uint8_T *emxCreateWrapper_uint8_T(unsigned char *data, int rows,
  int cols);
extern emxArray_uint8_T *emxCreate_uint8_T(int rows, int cols);
extern void emxDestroyArray_uint8_T(emxArray_uint8_T *emxArray);
extern void emxInitArray_uint8_T(emxArray_uint8_T **pEmxArray, int numDimensions);

#endif

/* End of code generation (normalFromTexture_emxAPI.h) */

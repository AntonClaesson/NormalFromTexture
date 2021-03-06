/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * normalFromTexture_emxutil.h
 *
 * Code generation for function 'normalFromTexture_emxutil'
 *
 */

#ifndef NORMALFROMTEXTURE_EMXUTIL_H
#define NORMALFROMTEXTURE_EMXUTIL_H

/* Include files */
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "normalFromTexture_types.h"

/* Function Declarations */
extern void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int oldNumel);
extern void emxEnsureCapacity_uint8_T(emxArray_uint8_T *emxArray, int oldNumel);
extern void emxFree_real_T(emxArray_real_T **pEmxArray);
extern void emxFree_uint8_T(emxArray_uint8_T **pEmxArray);
extern void emxInit_real_T(emxArray_real_T **pEmxArray, int numDimensions);
extern void emxInit_uint8_T(emxArray_uint8_T **pEmxArray, int numDimensions);

#endif

/* End of code generation (normalFromTexture_emxutil.h) */

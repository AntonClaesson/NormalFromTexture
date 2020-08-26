/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * normalFromTexture.h
 *
 * Code generation for function 'normalFromTexture'
 *
 */

#pragma once

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mex.h"
#include "emlrt.h"
#include "covrt.h"
#include "rtwtypes.h"
#include "normalFromTexture_types.h"

/* Function Declarations */
void normalFromTexture(const emlrtStack *sp, const emxArray_uint8_T *img, real_T
  strength, emxArray_uint8_T *N);

/* End of code generation (normalFromTexture.h) */

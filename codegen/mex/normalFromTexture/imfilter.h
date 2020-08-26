/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * imfilter.h
 *
 * Code generation for function 'imfilter'
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
void padImage(const emlrtStack *sp, const emxArray_real_T *a_tmp, const real_T
              pad[2], emxArray_real_T *a);

/* End of code generation (imfilter.h) */

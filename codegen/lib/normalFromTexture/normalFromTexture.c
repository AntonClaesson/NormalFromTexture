/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * normalFromTexture.c
 *
 * Code generation for function 'normalFromTexture'
 *
 */

/* Include files */
#include "normalFromTexture.h"
#include "imfilter.h"
#include "libmwgrayto8.h"
#include "libmwimfilter.h"
#include "libmwippfilter.h"
#include "libmwrgb2gray_tbb.h"
#include "normalFromTexture_emxutil.h"
#include <math.h>

/* Function Definitions */
void normalFromTexture(const emxArray_uint8_T *img, double strength,
  emxArray_uint8_T *N)
{
  emxArray_real_T *A;
  emxArray_uint8_T *b_I;
  int i;
  int nx;
  double outSizeT[2];
  double sizeOutput[2];
  emxArray_real_T *Gx;
  emxArray_real_T *a;
  boolean_T tooBig;
  double padSizeT[2];
  double connDimsT[2];
  static const double nonZeroKernel[6] = { 1.0, -1.0, 2.0, -2.0, 1.0, -1.0 };

  static const boolean_T conn[9] = { true, false, true, true, false, true, true,
    false, true };

  static const double kernel[9] = { 1.0, 0.0, -1.0, 2.0, 0.0, -2.0, 1.0, 0.0,
    -1.0 };

  emxArray_real_T *b_N;
  static const double b_nonZeroKernel[6] = { 1.0, 2.0, 1.0, -1.0, -2.0, -1.0 };

  static const boolean_T b_conn[9] = { true, true, true, false, false, false,
    true, true, true };

  static const double b_kernel[9] = { 1.0, 2.0, 1.0, 0.0, 0.0, 0.0, -1.0, -2.0,
    -1.0 };

  int k;
  emxArray_real_T *y;
  int i1;
  emxArray_real_T *c_N;
  emxInit_real_T(&A, 2);
  emxInit_uint8_T(&b_I, 2);

  /* img: The texture, which is represented as a mxnx3 matrix of type uint8 */
  /* strength: A double between [0,1] affecting the strength of the blue channel in the normal map  */
  /* N: The resulting normal map, represented as a mxnx3 matrix of type uint8 */
  /* Convert to gray */
  i = b_I->size[0] * b_I->size[1];
  b_I->size[0] = img->size[0];
  b_I->size[1] = img->size[1];
  emxEnsureCapacity_uint8_T(b_I, i);
  rgb2gray_tbb_uint8(&img->data[0], (double)img->size[0] * (double)img->size[1],
                     &b_I->data[0], true);
  i = A->size[0] * A->size[1];
  A->size[0] = b_I->size[0];
  A->size[1] = b_I->size[1];
  emxEnsureCapacity_real_T(A, i);
  nx = b_I->size[0] * b_I->size[1];
  for (i = 0; i < nx; i++) {
    A->data[i] = b_I->data[i];
  }

  emxFree_uint8_T(&b_I);

  /* compute derivatives */
  outSizeT[0] = A->size[0];
  sizeOutput[0] = 1.0;
  outSizeT[1] = A->size[1];
  sizeOutput[1] = 1.0;
  emxInit_real_T(&Gx, 2);
  emxInit_real_T(&a, 2);
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    i = Gx->size[0] * Gx->size[1];
    Gx->size[0] = A->size[0];
    Gx->size[1] = A->size[1];
    emxEnsureCapacity_real_T(Gx, i);
    nx = A->size[0] * A->size[1];
    for (i = 0; i < nx; i++) {
      Gx->data[i] = A->data[i];
    }
  } else {
    padImage(A, sizeOutput, a);
    tooBig = (A->size[0] > 65500);
    if ((!tooBig) || (A->size[1] <= 65500)) {
      tooBig = false;
    }

    i = Gx->size[0] * Gx->size[1];
    Gx->size[0] = A->size[0];
    Gx->size[1] = A->size[1];
    emxEnsureCapacity_real_T(Gx, i);
    if (!tooBig) {
      padSizeT[0] = a->size[0];
      sizeOutput[0] = 3.0;
      padSizeT[1] = a->size[1];
      sizeOutput[1] = 3.0;
      ippfilter_real64(&a->data[0], &Gx->data[0], outSizeT, 2.0, padSizeT,
                       kernel, sizeOutput, false);
    } else {
      padSizeT[0] = a->size[0];
      connDimsT[0] = 3.0;
      padSizeT[1] = a->size[1];
      connDimsT[1] = 3.0;
      imfilter_real64(&a->data[0], &Gx->data[0], 2.0, outSizeT, 2.0, padSizeT,
                      nonZeroKernel, 6.0, conn, 2.0, connDimsT, sizeOutput, 2.0,
                      true, false);
    }
  }

  outSizeT[0] = A->size[0];
  sizeOutput[0] = 1.0;
  outSizeT[1] = A->size[1];
  sizeOutput[1] = 1.0;
  if ((A->size[0] != 0) && (A->size[1] != 0)) {
    padImage(A, sizeOutput, a);
    tooBig = (A->size[0] > 65500);
    if ((!tooBig) || (A->size[1] <= 65500)) {
      tooBig = false;
    }

    i = A->size[0] * A->size[1];
    A->size[0] = (int)outSizeT[0];
    A->size[1] = (int)outSizeT[1];
    emxEnsureCapacity_real_T(A, i);
    if (!tooBig) {
      padSizeT[0] = a->size[0];
      sizeOutput[0] = 3.0;
      padSizeT[1] = a->size[1];
      sizeOutput[1] = 3.0;
      ippfilter_real64(&a->data[0], &A->data[0], outSizeT, 2.0, padSizeT,
                       b_kernel, sizeOutput, false);
    } else {
      padSizeT[0] = a->size[0];
      connDimsT[0] = 3.0;
      padSizeT[1] = a->size[1];
      connDimsT[1] = 3.0;
      imfilter_real64(&a->data[0], &A->data[0], 2.0, outSizeT, 2.0, padSizeT,
                      b_nonZeroKernel, 6.0, b_conn, 2.0, connDimsT, sizeOutput,
                      2.0, true, false);
    }
  }

  emxInit_real_T(&b_N, 3);

  /* Define and compute normal map */
  i = b_N->size[0] * b_N->size[1] * b_N->size[2];
  b_N->size[0] = img->size[0];
  b_N->size[1] = img->size[1];
  b_N->size[2] = 3;
  emxEnsureCapacity_real_T(b_N, i);
  nx = img->size[0] * img->size[1] * 3;
  for (i = 0; i < nx; i++) {
    b_N->data[i] = 0.0;
  }

  i = a->size[0] * a->size[1];
  a->size[0] = Gx->size[0];
  a->size[1] = Gx->size[1];
  emxEnsureCapacity_real_T(a, i);
  nx = Gx->size[0] * Gx->size[1];
  for (k = 0; k < nx; k++) {
    a->data[k] = Gx->data[k % Gx->size[0] + Gx->size[0] * (k / Gx->size[0])] *
      Gx->data[k % Gx->size[0] + Gx->size[0] * (k / Gx->size[0])];
  }

  emxInit_real_T(&y, 2);
  i = y->size[0] * y->size[1];
  y->size[0] = A->size[0];
  y->size[1] = A->size[1];
  emxEnsureCapacity_real_T(y, i);
  nx = A->size[0] * A->size[1];
  for (k = 0; k < nx; k++) {
    y->data[k] = A->data[k % A->size[0] + A->size[0] * (k / A->size[0])] *
      A->data[k % A->size[0] + A->size[0] * (k / A->size[0])];
  }

  nx = a->size[0] * a->size[1];
  for (i = 0; i < nx; i++) {
    a->data[i] = (a->data[i] + y->data[i]) + 1.0;
  }

  nx = a->size[0] * a->size[1];
  for (k = 0; k < nx; k++) {
    a->data[k] = sqrt(a->data[k]);
  }

  nx = Gx->size[0];
  k = Gx->size[1];
  for (i = 0; i < k; i++) {
    for (i1 = 0; i1 < nx; i1++) {
      b_N->data[i1 + b_N->size[0] * i] = -Gx->data[i1 + Gx->size[0] * i] /
        a->data[i1 + a->size[0] * i];
    }
  }

  i = a->size[0] * a->size[1];
  a->size[0] = Gx->size[0];
  a->size[1] = Gx->size[1];
  emxEnsureCapacity_real_T(a, i);
  nx = Gx->size[0] * Gx->size[1];
  for (k = 0; k < nx; k++) {
    a->data[k] = Gx->data[k % Gx->size[0] + Gx->size[0] * (k / Gx->size[0])] *
      Gx->data[k % Gx->size[0] + Gx->size[0] * (k / Gx->size[0])];
  }

  emxFree_real_T(&Gx);
  i = y->size[0] * y->size[1];
  y->size[0] = A->size[0];
  y->size[1] = A->size[1];
  emxEnsureCapacity_real_T(y, i);
  nx = A->size[0] * A->size[1];
  for (k = 0; k < nx; k++) {
    y->data[k] = A->data[k % A->size[0] + A->size[0] * (k / A->size[0])] *
      A->data[k % A->size[0] + A->size[0] * (k / A->size[0])];
  }

  nx = a->size[0] * a->size[1];
  for (i = 0; i < nx; i++) {
    a->data[i] = (a->data[i] + y->data[i]) + 1.0;
  }

  emxFree_real_T(&y);
  nx = a->size[0] * a->size[1];
  for (k = 0; k < nx; k++) {
    a->data[k] = sqrt(a->data[k]);
  }

  nx = A->size[0];
  k = A->size[1];
  for (i = 0; i < k; i++) {
    for (i1 = 0; i1 < nx; i1++) {
      b_N->data[(i1 + b_N->size[0] * i) + b_N->size[0] * b_N->size[1]] =
        -A->data[i1 + A->size[0] * i] / a->data[i1 + a->size[0] * i];
    }
  }

  emxFree_real_T(&a);
  emxFree_real_T(&A);
  nx = b_N->size[0];
  k = b_N->size[1];
  for (i = 0; i < k; i++) {
    for (i1 = 0; i1 < nx; i1++) {
      b_N->data[(i1 + b_N->size[0] * i) + b_N->size[0] * b_N->size[1] * 2] =
        strength;
    }
  }

  emxInit_real_T(&c_N, 3);

  /* Normalize channels to [0,1] */
  nx = b_N->size[0] - 1;
  k = b_N->size[1] - 1;
  i = c_N->size[0] * c_N->size[1] * c_N->size[2];
  c_N->size[0] = b_N->size[0];
  c_N->size[1] = b_N->size[1];
  c_N->size[2] = 2;
  emxEnsureCapacity_real_T(c_N, i);
  for (i = 0; i <= k; i++) {
    for (i1 = 0; i1 <= nx; i1++) {
      c_N->data[i1 + c_N->size[0] * i] = (b_N->data[i1 + b_N->size[0] * i] + 1.0)
        / 2.0;
    }
  }

  for (i = 0; i <= k; i++) {
    for (i1 = 0; i1 <= nx; i1++) {
      c_N->data[(i1 + c_N->size[0] * i) + c_N->size[0] * c_N->size[1]] =
        (b_N->data[(i1 + b_N->size[0] * i) + b_N->size[0] * b_N->size[1]] + 1.0)
        / 2.0;
    }
  }

  nx = c_N->size[1];
  for (i = 0; i < nx; i++) {
    k = c_N->size[0];
    for (i1 = 0; i1 < k; i1++) {
      b_N->data[i1 + b_N->size[0] * i] = c_N->data[i1 + c_N->size[0] * i];
    }
  }

  for (i = 0; i < nx; i++) {
    k = c_N->size[0];
    for (i1 = 0; i1 < k; i1++) {
      b_N->data[(i1 + b_N->size[0] * i) + b_N->size[0] * b_N->size[1]] =
        c_N->data[(i1 + c_N->size[0] * i) + c_N->size[0] * c_N->size[1]];
    }
  }

  emxFree_real_T(&c_N);

  /* N(:,:,1:2) = (N(:,:,1:2) - min(min(N(:,:,1:2))))./(max(max(N(:,:,1:2)))-min(min(N(:,:,1:2)))); */
  /* Convert to uint8 */
  i = N->size[0] * N->size[1] * N->size[2];
  N->size[0] = b_N->size[0];
  N->size[1] = b_N->size[1];
  N->size[2] = b_N->size[2];
  emxEnsureCapacity_uint8_T(N, i);
  grayto8_real64(&b_N->data[0], &N->data[0], (double)(b_N->size[0] * b_N->size[1]
    * 3));
  emxFree_real_T(&b_N);
}

/* End of code generation (normalFromTexture.c) */

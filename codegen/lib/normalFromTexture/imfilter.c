/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * imfilter.c
 *
 * Code generation for function 'imfilter'
 *
 */

/* Include files */
#include "imfilter.h"
#include "normalFromTexture.h"
#include "normalFromTexture_emxutil.h"

/* Function Definitions */
void padImage(const emxArray_real_T *a_tmp, const double pad[2], emxArray_real_T
              *a)
{
  int i;
  double sizeB_idx_0;
  double sizeB_idx_1;
  int loop_ub;
  int b_i;
  int i1;
  int j;
  if ((a_tmp->size[0] == 0) || (a_tmp->size[1] == 0)) {
    sizeB_idx_0 = (double)a_tmp->size[0] + 2.0 * pad[0];
    sizeB_idx_1 = (double)a_tmp->size[1] + 2.0 * pad[1];
    i = (int)sizeB_idx_0;
    loop_ub = a->size[0] * a->size[1];
    a->size[0] = i;
    i1 = (int)sizeB_idx_1;
    a->size[1] = i1;
    emxEnsureCapacity_real_T(a, loop_ub);
    loop_ub = i * i1;
    for (i = 0; i < loop_ub; i++) {
      a->data[i] = 0.0;
    }
  } else {
    i = a->size[0] * a->size[1];
    a->size[0] = (int)((double)a_tmp->size[0] + 2.0 * pad[0]);
    a->size[1] = (int)((double)a_tmp->size[1] + 2.0 * pad[1]);
    emxEnsureCapacity_real_T(a, i);
    i = a->size[0];
    for (b_i = 0; b_i < i; b_i++) {
      a->data[b_i] = 0.0;
    }

    i = a_tmp->size[1] + 2;
    loop_ub = a->size[1];
    for (j = i; j <= loop_ub; j++) {
      i1 = a->size[0];
      for (b_i = 0; b_i < i1; b_i++) {
        a->data[b_i + a->size[0] * (j - 1)] = 0.0;
      }
    }

    i = a_tmp->size[1];
    for (j = 0; j < i; j++) {
      a->data[a->size[0] * (j + 1)] = 0.0;
    }

    i = a_tmp->size[1];
    for (j = 0; j < i; j++) {
      loop_ub = a_tmp->size[0] + 2;
      i1 = a->size[0];
      for (b_i = loop_ub; b_i <= i1; b_i++) {
        a->data[(b_i + a->size[0] * (j + 1)) - 1] = 0.0;
      }
    }

    i = a_tmp->size[1];
    for (j = 0; j < i; j++) {
      loop_ub = a_tmp->size[0];
      for (b_i = 0; b_i < loop_ub; b_i++) {
        a->data[(b_i + a->size[0] * (j + 1)) + 1] = a_tmp->data[b_i +
          a_tmp->size[0] * j];
      }
    }
  }
}

/* End of code generation (imfilter.c) */

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
#include "normalFromTexture_data.h"
#include "normalFromTexture_emxutil.h"
#include "power.h"
#include "rt_nonfinite.h"
#include "sqrt.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 7,     /* lineNo */
  "normalFromTexture",                 /* fcnName */
  "C:\\Users\\Anton\\Desktop\\NormalFromTexture\\normalFromTexture.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 12,  /* lineNo */
  "normalFromTexture",                 /* fcnName */
  "C:\\Users\\Anton\\Desktop\\NormalFromTexture\\normalFromTexture.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 13,  /* lineNo */
  "normalFromTexture",                 /* fcnName */
  "C:\\Users\\Anton\\Desktop\\NormalFromTexture\\normalFromTexture.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 19,  /* lineNo */
  "normalFromTexture",                 /* fcnName */
  "C:\\Users\\Anton\\Desktop\\NormalFromTexture\\normalFromTexture.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 20,  /* lineNo */
  "normalFromTexture",                 /* fcnName */
  "C:\\Users\\Anton\\Desktop\\NormalFromTexture\\normalFromTexture.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 28,  /* lineNo */
  "normalFromTexture",                 /* fcnName */
  "C:\\Users\\Anton\\Desktop\\NormalFromTexture\\normalFromTexture.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 48,  /* lineNo */
  "rgb2gray",                          /* fcnName */
  "D:\\Matlab\\toolbox\\eml\\lib\\matlab\\images\\rgb2gray.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 106, /* lineNo */
  "imfilter",                          /* fcnName */
  "D:\\Matlab\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 110, /* lineNo */
  "imfilter",                          /* fcnName */
  "D:\\Matlab\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 931, /* lineNo */
  "filterPartOrWhole",                 /* fcnName */
  "D:\\Matlab\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 1005,/* lineNo */
  "imfiltercore",                      /* fcnName */
  "D:\\Matlab\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 39, /* lineNo */
  "im2uint8",                          /* fcnName */
  "D:\\Matlab\\toolbox\\images\\images\\eml\\im2uint8.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 138,/* lineNo */
  "uint8SharedLibraryAlgo",            /* fcnName */
  "D:\\Matlab\\toolbox\\images\\images\\eml\\im2uint8.m"/* pathName */
};

static emlrtECInfo emlrtECI = { 2,     /* nDims */
  19,                                  /* lineNo */
  31,                                  /* colNo */
  "normalFromTexture",                 /* fName */
  "C:\\Users\\Anton\\Desktop\\NormalFromTexture\\normalFromTexture.m"/* pName */
};

static emlrtECInfo b_emlrtECI = { 2,   /* nDims */
  20,                                  /* lineNo */
  31,                                  /* colNo */
  "normalFromTexture",                 /* fName */
  "C:\\Users\\Anton\\Desktop\\NormalFromTexture\\normalFromTexture.m"/* pName */
};

static emlrtECInfo c_emlrtECI = { -1,  /* nDims */
  19,                                  /* lineNo */
  5,                                   /* colNo */
  "normalFromTexture",                 /* fName */
  "C:\\Users\\Anton\\Desktop\\NormalFromTexture\\normalFromTexture.m"/* pName */
};

static emlrtECInfo d_emlrtECI = { -1,  /* nDims */
  20,                                  /* lineNo */
  5,                                   /* colNo */
  "normalFromTexture",                 /* fName */
  "C:\\Users\\Anton\\Desktop\\NormalFromTexture\\normalFromTexture.m"/* pName */
};

static emlrtECInfo e_emlrtECI = { -1,  /* nDims */
  24,                                  /* lineNo */
  5,                                   /* colNo */
  "normalFromTexture",                 /* fName */
  "C:\\Users\\Anton\\Desktop\\NormalFromTexture\\normalFromTexture.m"/* pName */
};

static emlrtRTEInfo emlrtRTEI = { 20,  /* lineNo */
  15,                                  /* colNo */
  "rdivide_helper",                    /* fName */
  "D:\\Matlab\\toolbox\\eml\\eml\\+coder\\+internal\\rdivide_helper.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 7, /* lineNo */
  16,                                  /* colNo */
  "normalFromTexture",                 /* fName */
  "C:\\Users\\Anton\\Desktop\\NormalFromTexture\\normalFromTexture.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 7, /* lineNo */
  5,                                   /* colNo */
  "normalFromTexture",                 /* fName */
  "C:\\Users\\Anton\\Desktop\\NormalFromTexture\\normalFromTexture.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 12,/* lineNo */
  5,                                   /* colNo */
  "normalFromTexture",                 /* fName */
  "C:\\Users\\Anton\\Desktop\\NormalFromTexture\\normalFromTexture.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 1005,/* lineNo */
  11,                                  /* colNo */
  "imfilter",                          /* fName */
  "D:\\Matlab\\toolbox\\images\\images\\eml\\imfilter.m"/* pName */
};

static emlrtRTEInfo j_emlrtRTEI = { 17,/* lineNo */
  5,                                   /* colNo */
  "normalFromTexture",                 /* fName */
  "C:\\Users\\Anton\\Desktop\\NormalFromTexture\\normalFromTexture.m"/* pName */
};

static emlrtRTEInfo k_emlrtRTEI = { 19,/* lineNo */
  31,                                  /* colNo */
  "normalFromTexture",                 /* fName */
  "C:\\Users\\Anton\\Desktop\\NormalFromTexture\\normalFromTexture.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 19,/* lineNo */
  44,                                  /* colNo */
  "normalFromTexture",                 /* fName */
  "C:\\Users\\Anton\\Desktop\\NormalFromTexture\\normalFromTexture.m"/* pName */
};

static emlrtRTEInfo m_emlrtRTEI = { 19,/* lineNo */
  16,                                  /* colNo */
  "normalFromTexture",                 /* fName */
  "C:\\Users\\Anton\\Desktop\\NormalFromTexture\\normalFromTexture.m"/* pName */
};

static emlrtRTEInfo n_emlrtRTEI = { 20,/* lineNo */
  31,                                  /* colNo */
  "normalFromTexture",                 /* fName */
  "C:\\Users\\Anton\\Desktop\\NormalFromTexture\\normalFromTexture.m"/* pName */
};

static emlrtRTEInfo o_emlrtRTEI = { 20,/* lineNo */
  44,                                  /* colNo */
  "normalFromTexture",                 /* fName */
  "C:\\Users\\Anton\\Desktop\\NormalFromTexture\\normalFromTexture.m"/* pName */
};

static emlrtRTEInfo p_emlrtRTEI = { 20,/* lineNo */
  16,                                  /* colNo */
  "normalFromTexture",                 /* fName */
  "C:\\Users\\Anton\\Desktop\\NormalFromTexture\\normalFromTexture.m"/* pName */
};

static emlrtRTEInfo q_emlrtRTEI = { 24,/* lineNo */
  18,                                  /* colNo */
  "normalFromTexture",                 /* fName */
  "C:\\Users\\Anton\\Desktop\\NormalFromTexture\\normalFromTexture.m"/* pName */
};

static emlrtRTEInfo r_emlrtRTEI = { 28,/* lineNo */
  5,                                   /* colNo */
  "normalFromTexture",                 /* fName */
  "C:\\Users\\Anton\\Desktop\\NormalFromTexture\\normalFromTexture.m"/* pName */
};

static emlrtRTEInfo s_emlrtRTEI = { 1, /* lineNo */
  10,                                  /* colNo */
  "normalFromTexture",                 /* fName */
  "C:\\Users\\Anton\\Desktop\\NormalFromTexture\\normalFromTexture.m"/* pName */
};

static emlrtRTEInfo t_emlrtRTEI = { 1, /* lineNo */
  12,                                  /* colNo */
  "normalFromTexture",                 /* fName */
  "C:\\Users\\Anton\\Desktop\\NormalFromTexture\\normalFromTexture.m"/* pName */
};

static emlrtRTEInfo u_emlrtRTEI = { 19,/* lineNo */
  26,                                  /* colNo */
  "normalFromTexture",                 /* fName */
  "C:\\Users\\Anton\\Desktop\\NormalFromTexture\\normalFromTexture.m"/* pName */
};

static emlrtRTEInfo v_emlrtRTEI = { 59,/* lineNo */
  9,                                   /* colNo */
  "imfilter",                          /* fName */
  "D:\\Matlab\\toolbox\\images\\images\\eml\\imfilter.m"/* pName */
};

/* Function Definitions */
void normalFromTexture(const emlrtStack *sp, const emxArray_uint8_T *img, real_T
  strength, emxArray_uint8_T *N)
{
  emxArray_real_T *A;
  emxArray_uint8_T *b_I;
  int32_T i;
  int32_T loop_ub;
  real_T outSizeT[2];
  real_T sizeOutput[2];
  emxArray_real_T *Gx;
  emxArray_real_T *a;
  boolean_T tooBig;
  real_T padSizeT[2];
  real_T connDimsT[2];
  emxArray_real_T *b_N;
  static const real_T nonZeroKernel[6] = { 1.0, -1.0, 2.0, -2.0, 1.0, -1.0 };

  static const boolean_T conn[9] = { true, false, true, true, false, true, true,
    false, true };

  static const real_T kernel[9] = { 1.0, 0.0, -1.0, 2.0, 0.0, -2.0, 1.0, 0.0,
    -1.0 };

  emxArray_real_T *b_Gx;
  int32_T b_loop_ub;
  static const real_T b_nonZeroKernel[6] = { 1.0, 2.0, 1.0, -1.0, -2.0, -1.0 };

  static const boolean_T b_conn[9] = { true, true, true, false, false, false,
    true, true, true };

  static const real_T b_kernel[9] = { 1.0, 2.0, 1.0, 0.0, 0.0, 0.0, -1.0, -2.0,
    -1.0 };

  emxArray_real_T *y;
  int32_T i1;
  boolean_T p;
  boolean_T exitg1;
  int32_T b_img[2];
  emxArray_real_T *r;
  int32_T c_N[3];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &A, 2, &g_emlrtRTEI, true);
  emxInit_uint8_T(sp, &b_I, 2, &f_emlrtRTEI, true);
  covrtLogFcn(&emlrtCoverageInstance, 0U, 0U);
  covrtLogBasicBlock(&emlrtCoverageInstance, 0U, 0U);

  /* img: The texture, which is represented as a mxnx3 matrix of type uint8 */
  /* strength: A double between [0,1] affecting the strength of the blue channel in the normal map  */
  /* N: The resulting normal map, represented as a mxnx3 matrix of type uint8 */
  /* Convert to gray */
  st.site = &emlrtRSI;
  i = b_I->size[0] * b_I->size[1];
  b_I->size[0] = img->size[0];
  b_I->size[1] = img->size[1];
  emxEnsureCapacity_uint8_T(&st, b_I, i, &f_emlrtRTEI);
  b_st.site = &g_emlrtRSI;
  rgb2gray_tbb_uint8(&img->data[0], (real_T)img->size[0] * (real_T)img->size[1],
                     &b_I->data[0], true);
  i = A->size[0] * A->size[1];
  A->size[0] = b_I->size[0];
  A->size[1] = b_I->size[1];
  emxEnsureCapacity_real_T(sp, A, i, &g_emlrtRTEI);
  loop_ub = b_I->size[0] * b_I->size[1];
  for (i = 0; i < loop_ub; i++) {
    A->data[i] = b_I->data[i];
  }

  emxFree_uint8_T(&b_I);

  /* compute derivatives */
  st.site = &b_emlrtRSI;
  outSizeT[0] = A->size[0];
  sizeOutput[0] = 1.0;
  outSizeT[1] = A->size[1];
  sizeOutput[1] = 1.0;
  emxInit_real_T(&st, &Gx, 2, &h_emlrtRTEI, true);
  emxInit_real_T(&st, &a, 2, &v_emlrtRTEI, true);
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    i = Gx->size[0] * Gx->size[1];
    Gx->size[0] = A->size[0];
    Gx->size[1] = A->size[1];
    emxEnsureCapacity_real_T(&st, Gx, i, &h_emlrtRTEI);
    loop_ub = A->size[0] * A->size[1];
    for (i = 0; i < loop_ub; i++) {
      Gx->data[i] = A->data[i];
    }
  } else {
    b_st.site = &h_emlrtRSI;
    padImage(&b_st, A, sizeOutput, a);
    b_st.site = &i_emlrtRSI;
    c_st.site = &s_emlrtRSI;
    tooBig = (A->size[0] > 65500);
    if ((!tooBig) || (A->size[1] <= 65500)) {
      tooBig = false;
    }

    tooBig = !tooBig;
    d_st.site = &t_emlrtRSI;
    i = Gx->size[0] * Gx->size[1];
    Gx->size[0] = A->size[0];
    Gx->size[1] = A->size[1];
    emxEnsureCapacity_real_T(&d_st, Gx, i, &i_emlrtRTEI);
    if (tooBig) {
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

  st.site = &c_emlrtRSI;
  outSizeT[0] = A->size[0];
  sizeOutput[0] = 1.0;
  outSizeT[1] = A->size[1];
  sizeOutput[1] = 1.0;
  if ((A->size[0] != 0) && (A->size[1] != 0)) {
    b_st.site = &h_emlrtRSI;
    padImage(&b_st, A, sizeOutput, a);
    b_st.site = &i_emlrtRSI;
    c_st.site = &s_emlrtRSI;
    tooBig = (A->size[0] > 65500);
    if ((!tooBig) || (A->size[1] <= 65500)) {
      tooBig = false;
    }

    tooBig = !tooBig;
    d_st.site = &t_emlrtRSI;
    i = A->size[0] * A->size[1];
    A->size[0] = (int32_T)outSizeT[0];
    A->size[1] = (int32_T)outSizeT[1];
    emxEnsureCapacity_real_T(&d_st, A, i, &i_emlrtRTEI);
    if (tooBig) {
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

  emxInit_real_T(&st, &b_N, 3, &s_emlrtRTEI, true);

  /* Define and compute normal map */
  i = b_N->size[0] * b_N->size[1] * b_N->size[2];
  b_N->size[0] = img->size[0];
  b_N->size[1] = img->size[1];
  b_N->size[2] = 3;
  emxEnsureCapacity_real_T(sp, b_N, i, &j_emlrtRTEI);
  loop_ub = img->size[0] * img->size[1] * 3;
  for (i = 0; i < loop_ub; i++) {
    b_N->data[i] = 0.0;
  }

  emxInit_real_T(sp, &b_Gx, 2, &k_emlrtRTEI, true);
  loop_ub = Gx->size[0];
  b_loop_ub = Gx->size[1];
  i = b_Gx->size[0] * b_Gx->size[1];
  b_Gx->size[0] = Gx->size[0];
  b_Gx->size[1] = Gx->size[1];
  emxEnsureCapacity_real_T(sp, b_Gx, i, &k_emlrtRTEI);
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_Gx->data[i1 + b_Gx->size[0] * i] = Gx->data[i1 + Gx->size[0] * i];
    }
  }

  emxInit_real_T(sp, &y, 2, &u_emlrtRTEI, true);
  st.site = &d_emlrtRSI;
  power(&st, b_Gx, y);
  loop_ub = A->size[0];
  b_loop_ub = A->size[1];
  i = b_Gx->size[0] * b_Gx->size[1];
  b_Gx->size[0] = A->size[0];
  b_Gx->size[1] = A->size[1];
  emxEnsureCapacity_real_T(sp, b_Gx, i, &l_emlrtRTEI);
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_Gx->data[i1 + b_Gx->size[0] * i] = A->data[i1 + A->size[0] * i];
    }
  }

  st.site = &d_emlrtRSI;
  power(&st, b_Gx, a);
  emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])y->size, *(int32_T (*)[2])a->size,
    &emlrtECI, sp);
  st.site = &d_emlrtRSI;
  loop_ub = Gx->size[0];
  b_loop_ub = Gx->size[1];
  i = b_Gx->size[0] * b_Gx->size[1];
  b_Gx->size[0] = Gx->size[0];
  b_Gx->size[1] = Gx->size[1];
  emxEnsureCapacity_real_T(&st, b_Gx, i, &m_emlrtRTEI);
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_Gx->data[i1 + b_Gx->size[0] * i] = -Gx->data[i1 + Gx->size[0] * i];
    }
  }

  loop_ub = y->size[0] * y->size[1];
  for (i = 0; i < loop_ub; i++) {
    y->data[i] = (y->data[i] + a->data[i]) + 1.0;
  }

  b_st.site = &d_emlrtRSI;
  b_sqrt(&b_st, y);
  sizeOutput[0] = b_Gx->size[0];
  connDimsT[0] = y->size[0];
  sizeOutput[1] = b_Gx->size[1];
  connDimsT[1] = y->size[1];
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if ((int32_T)(uint32_T)sizeOutput[loop_ub] != (int32_T)connDimsT[loop_ub]) {
      p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }

  tooBig = (int32_T)p;
  if (!tooBig) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI, "MATLAB:dimagree",
      "MATLAB:dimagree", 0);
  }

  loop_ub = b_Gx->size[0] * b_Gx->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_Gx->data[i] /= y->data[i];
  }

  b_img[0] = img->size[0];
  b_img[1] = img->size[1];
  emlrtSubAssignSizeCheckR2012b(&b_img[0], 2, &b_Gx->size[0], 2, &c_emlrtECI, sp);
  loop_ub = b_Gx->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_Gx->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_N->data[i1 + b_N->size[0] * i] = b_Gx->data[i1 + b_Gx->size[0] * i];
    }
  }

  loop_ub = Gx->size[0] - 1;
  b_loop_ub = Gx->size[1] - 1;
  i = b_Gx->size[0] * b_Gx->size[1];
  b_Gx->size[0] = Gx->size[0];
  b_Gx->size[1] = Gx->size[1];
  emxEnsureCapacity_real_T(sp, b_Gx, i, &n_emlrtRTEI);
  for (i = 0; i <= b_loop_ub; i++) {
    for (i1 = 0; i1 <= loop_ub; i1++) {
      b_Gx->data[i1 + b_Gx->size[0] * i] = Gx->data[i1 + Gx->size[0] * i];
    }
  }

  i = Gx->size[0] * Gx->size[1];
  Gx->size[0] = b_Gx->size[0];
  Gx->size[1] = b_Gx->size[1];
  emxEnsureCapacity_real_T(sp, Gx, i, &n_emlrtRTEI);
  loop_ub = b_Gx->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_Gx->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      Gx->data[i1 + Gx->size[0] * i] = b_Gx->data[i1 + b_Gx->size[0] * i];
    }
  }

  st.site = &e_emlrtRSI;
  power(&st, Gx, y);
  loop_ub = A->size[0];
  b_loop_ub = A->size[1];
  i = b_Gx->size[0] * b_Gx->size[1];
  b_Gx->size[0] = A->size[0];
  b_Gx->size[1] = A->size[1];
  emxEnsureCapacity_real_T(sp, b_Gx, i, &o_emlrtRTEI);
  emxFree_real_T(&Gx);
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_Gx->data[i1 + b_Gx->size[0] * i] = A->data[i1 + A->size[0] * i];
    }
  }

  st.site = &e_emlrtRSI;
  power(&st, b_Gx, a);
  emlrtSizeEqCheckNDR2012b(*(int32_T (*)[2])y->size, *(int32_T (*)[2])a->size,
    &b_emlrtECI, sp);
  st.site = &e_emlrtRSI;
  loop_ub = A->size[0];
  b_loop_ub = A->size[1];
  i = b_Gx->size[0] * b_Gx->size[1];
  b_Gx->size[0] = A->size[0];
  b_Gx->size[1] = A->size[1];
  emxEnsureCapacity_real_T(&st, b_Gx, i, &p_emlrtRTEI);
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_Gx->data[i1 + b_Gx->size[0] * i] = -A->data[i1 + A->size[0] * i];
    }
  }

  emxFree_real_T(&A);
  loop_ub = y->size[0] * y->size[1];
  for (i = 0; i < loop_ub; i++) {
    y->data[i] = (y->data[i] + a->data[i]) + 1.0;
  }

  emxFree_real_T(&a);
  b_st.site = &e_emlrtRSI;
  b_sqrt(&b_st, y);
  sizeOutput[0] = b_Gx->size[0];
  connDimsT[0] = y->size[0];
  sizeOutput[1] = b_Gx->size[1];
  connDimsT[1] = y->size[1];
  p = true;
  loop_ub = 0;
  exitg1 = false;
  while ((!exitg1) && (loop_ub < 2)) {
    if ((int32_T)(uint32_T)sizeOutput[loop_ub] != (int32_T)connDimsT[loop_ub]) {
      p = false;
      exitg1 = true;
    } else {
      loop_ub++;
    }
  }

  tooBig = (int32_T)p;
  if (!tooBig) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI, "MATLAB:dimagree",
      "MATLAB:dimagree", 0);
  }

  loop_ub = b_Gx->size[0] * b_Gx->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_Gx->data[i] /= y->data[i];
  }

  emxFree_real_T(&y);
  b_img[0] = b_N->size[0];
  b_img[1] = b_N->size[1];
  emlrtSubAssignSizeCheckR2012b(&b_img[0], 2, &b_Gx->size[0], 2, &d_emlrtECI, sp);
  loop_ub = b_Gx->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = b_Gx->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_N->data[(i1 + b_N->size[0] * i) + b_N->size[0] * b_N->size[1]] =
        b_Gx->data[i1 + b_Gx->size[0] * i];
    }
  }

  emxFree_real_T(&b_Gx);
  loop_ub = b_N->size[0];
  b_loop_ub = b_N->size[1];
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_N->data[(i1 + b_N->size[0] * i) + b_N->size[0] * b_N->size[1] * 2] =
        strength;
    }
  }

  emxInit_real_T(sp, &r, 3, &t_emlrtRTEI, true);

  /* Normalize channels to [0,1] */
  loop_ub = b_N->size[0];
  b_loop_ub = b_N->size[1];
  i = r->size[0] * r->size[1] * r->size[2];
  r->size[0] = b_N->size[0];
  r->size[1] = b_N->size[1];
  r->size[2] = 2;
  emxEnsureCapacity_real_T(sp, r, i, &q_emlrtRTEI);
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      r->data[i1 + r->size[0] * i] = (b_N->data[i1 + b_N->size[0] * i] + 1.0) /
        2.0;
    }
  }

  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      r->data[(i1 + r->size[0] * i) + r->size[0] * r->size[1]] = (b_N->data[(i1
        + b_N->size[0] * i) + b_N->size[0] * b_N->size[1]] + 1.0) / 2.0;
    }
  }

  c_N[0] = b_N->size[0];
  c_N[1] = b_N->size[1];
  c_N[2] = 2;
  emlrtSubAssignSizeCheckR2012b(&c_N[0], 3, &r->size[0], 3, &e_emlrtECI, sp);
  loop_ub = r->size[1];
  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = r->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_N->data[i1 + b_N->size[0] * i] = r->data[i1 + r->size[0] * i];
    }
  }

  for (i = 0; i < loop_ub; i++) {
    b_loop_ub = r->size[0];
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      b_N->data[(i1 + b_N->size[0] * i) + b_N->size[0] * b_N->size[1]] = r->
        data[(i1 + r->size[0] * i) + r->size[0] * r->size[1]];
    }
  }

  emxFree_real_T(&r);

  /* N(:,:,1:2) = (N(:,:,1:2) - min(min(N(:,:,1:2))))./(max(max(N(:,:,1:2)))-min(min(N(:,:,1:2)))); */
  /* Convert to uint8 */
  st.site = &f_emlrtRSI;
  b_st.site = &db_emlrtRSI;
  c_st.site = &eb_emlrtRSI;
  i = N->size[0] * N->size[1] * N->size[2];
  N->size[0] = b_N->size[0];
  N->size[1] = b_N->size[1];
  N->size[2] = b_N->size[2];
  emxEnsureCapacity_uint8_T(&c_st, N, i, &r_emlrtRTEI);
  grayto8_real64(&b_N->data[0], &N->data[0], (real_T)(b_N->size[0] * b_N->size[1]
    * 3));
  emxFree_real_T(&b_N);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (normalFromTexture.c) */

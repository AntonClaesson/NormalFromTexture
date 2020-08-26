/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_normalFromTexture_api.c
 *
 * Code generation for function '_coder_normalFromTexture_api'
 *
 */

/* Include files */
#include "_coder_normalFromTexture_api.h"
#include "normalFromTexture.h"
#include "normalFromTexture_data.h"
#include "normalFromTexture_emxutil.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo ab_emlrtRTEI = { 1,/* lineNo */
  1,                                   /* colNo */
  "_coder_normalFromTexture_api",      /* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_uint8_T *y);
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *strength,
  const char_T *identifier);
static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_uint8_T *ret);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *img, const
  char_T *identifier, emxArray_uint8_T *y);
static const mxArray *emlrt_marshallOut(const emxArray_uint8_T *u);
static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_uint8_T *y)
{
  e_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *strength,
  const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(strength), &thisId);
  emlrtDestroyArray(&strength);
  return y;
}

static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = f_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_uint8_T *ret)
{
  static const int32_T dims[3] = { -1, -1, 3 };

  const boolean_T bv[3] = { true, true, false };

  int32_T iv[3];
  int32_T i;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "uint8", false, 3U, dims, &bv[0], iv);
  ret->allocatedSize = iv[0] * iv[1] * iv[2];
  i = ret->size[0] * ret->size[1] * ret->size[2];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  ret->size[2] = iv[2];
  emxEnsureCapacity_uint8_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  ret->data = (uint8_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *img, const
  char_T *identifier, emxArray_uint8_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(img), &thisId, y);
  emlrtDestroyArray(&img);
}

static const mxArray *emlrt_marshallOut(const emxArray_uint8_T *u)
{
  const mxArray *y;
  const mxArray *m;
  static const int32_T iv[3] = { 0, 0, 0 };

  y = NULL;
  m = emlrtCreateNumericArray(3, &iv[0], mxUINT8_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, &u->data[0]);
  emlrtSetDimensions((mxArray *)m, u->size, 3);
  emlrtAssign(&y, m);
  return y;
}

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void normalFromTexture_api(const mxArray * const prhs[2], int32_T nlhs, const
  mxArray *plhs[1])
{
  emxArray_uint8_T *img;
  emxArray_uint8_T *N;
  real_T strength;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_uint8_T(&st, &img, 3, &ab_emlrtRTEI, true);
  emxInit_uint8_T(&st, &N, 3, &ab_emlrtRTEI, true);

  /* Marshall function inputs */
  img->canFreeData = false;
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "img", img);
  strength = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "strength");

  /* Invoke the target function */
  normalFromTexture(&st, img, strength, N);

  /* Marshall function outputs */
  N->canFreeData = false;
  plhs[0] = emlrt_marshallOut(N);
  emxFree_uint8_T(&N);
  emxFree_uint8_T(&img);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_normalFromTexture_api.c) */

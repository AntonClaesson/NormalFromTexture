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
#include "eml_int_forloop_overflow_check.h"
#include "mwmathutil.h"
#include "normalFromTexture.h"
#include "normalFromTexture_data.h"
#include "normalFromTexture_emxutil.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRSInfo j_emlrtRSI = { 861, /* lineNo */
  "padImage",                          /* fcnName */
  "D:\\Matlab\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 20,  /* lineNo */
  "padarray",                          /* fcnName */
  "D:\\Matlab\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 66,  /* lineNo */
  "padarray",                          /* fcnName */
  "D:\\Matlab\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 72,  /* lineNo */
  "padarray",                          /* fcnName */
  "D:\\Matlab\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 76,  /* lineNo */
  "validateattributes",                /* fcnName */
  "D:\\Matlab\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 28,  /* lineNo */
  "repmat",                            /* fcnName */
  "D:\\Matlab\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 405, /* lineNo */
  "ConstantPad",                       /* fcnName */
  "D:\\Matlab\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 420, /* lineNo */
  "ConstantPad",                       /* fcnName */
  "D:\\Matlab\\toolbox\\images\\images\\eml\\padarray.m"/* pathName */
};

static emlrtRTEInfo b_emlrtRTEI = { 49,/* lineNo */
  19,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "D:\\Matlab\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 64,/* lineNo */
  15,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "D:\\Matlab\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  407,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "ConstantPad",                       /* fName */
  "D:\\Matlab\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  444,                                 /* lineNo */
  100,                                 /* colNo */
  "",                                  /* aName */
  "ConstantPad",                       /* fName */
  "D:\\Matlab\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  444,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "ConstantPad",                       /* fName */
  "D:\\Matlab\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  421,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "ConstantPad",                       /* fName */
  "D:\\Matlab\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo emlrtDCI = { 253,   /* lineNo */
  35,                                  /* colNo */
  "ConstantPad",                       /* fName */
  "D:\\Matlab\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  400,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "ConstantPad",                       /* fName */
  "D:\\Matlab\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  414,                                 /* lineNo */
  17,                                  /* colNo */
  "",                                  /* aName */
  "ConstantPad",                       /* fName */
  "D:\\Matlab\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo w_emlrtRTEI = { 72,/* lineNo */
  13,                                  /* colNo */
  "padarray",                          /* fName */
  "D:\\Matlab\\toolbox\\images\\images\\eml\\padarray.m"/* pName */
};

static emlrtRTEInfo x_emlrtRTEI = { 861,/* lineNo */
  5,                                   /* colNo */
  "imfilter",                          /* fName */
  "D:\\Matlab\\toolbox\\images\\images\\eml\\imfilter.m"/* pName */
};

/* Function Definitions */
void padImage(const emlrtStack *sp, const emxArray_real_T *a_tmp, const real_T
              pad[2], emxArray_real_T *a)
{
  real_T sizeB_idx_0;
  real_T sizeB_idx_1;
  real_T varargin_1[2];
  int32_T b_a;
  int32_T i;
  boolean_T guard1 = false;
  int32_T exitg2;
  int32_T b_i;
  int32_T i1;
  int32_T b;
  boolean_T exitg1;
  boolean_T overflow;
  int32_T j;
  int32_T i2;
  int32_T i3;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &j_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &k_emlrtRSI;
  c_st.site = &n_emlrtRSI;
  c_st.site = &n_emlrtRSI;
  c_st.site = &n_emlrtRSI;
  if ((a_tmp->size[0] == 0) || (a_tmp->size[1] == 0)) {
    sizeB_idx_0 = (real_T)a_tmp->size[0] + 2.0 * pad[0];
    sizeB_idx_1 = (real_T)a_tmp->size[1] + 2.0 * pad[1];
    b_st.site = &l_emlrtRSI;
    varargin_1[0] = sizeB_idx_0;
    varargin_1[1] = sizeB_idx_1;
    c_st.site = &o_emlrtRSI;
    b_a = 0;
    guard1 = false;
    do {
      exitg2 = 0;
      if (b_a < 2) {
        if (varargin_1[b_a] != varargin_1[b_a]) {
          guard1 = true;
          exitg2 = 1;
        } else {
          b_a++;
          guard1 = false;
        }
      } else {
        b_a = 0;
        exitg2 = 2;
      }
    } while (exitg2 == 0);

    if (exitg2 != 1) {
      exitg1 = false;
      while ((!exitg1) && (b_a < 2)) {
        if (varargin_1[b_a] > 2.147483647E+9) {
          guard1 = true;
          exitg1 = true;
        } else {
          b_a++;
        }
      }
    }

    if (guard1) {
      emlrtErrorWithMessageIdR2018a(&c_st, &b_emlrtRTEI,
        "Coder:toolbox:eml_assert_valid_size_arg_invalidSizeVector",
        "Coder:toolbox:eml_assert_valid_size_arg_invalidSizeVector", 4, 12,
        MIN_int32_T, 12, MAX_int32_T);
    }

    if (!(sizeB_idx_0 * sizeB_idx_1 <= 2.147483647E+9)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &c_emlrtRTEI, "Coder:MATLAB:pmaxsize",
        "Coder:MATLAB:pmaxsize", 0);
    }

    i = (int32_T)sizeB_idx_0;
    i1 = a->size[0] * a->size[1];
    a->size[0] = i;
    b_a = (int32_T)sizeB_idx_1;
    a->size[1] = b_a;
    emxEnsureCapacity_real_T(&b_st, a, i1, &x_emlrtRTEI);
    b_a *= i;
    for (i = 0; i < b_a; i++) {
      a->data[i] = 0.0;
    }
  } else {
    b_st.site = &m_emlrtRSI;
    sizeB_idx_0 = (real_T)a_tmp->size[0] + 2.0 * pad[0];
    if (sizeB_idx_0 != (int32_T)muDoubleScalarFloor(sizeB_idx_0)) {
      emlrtIntegerCheckR2012b(sizeB_idx_0, &emlrtDCI, &b_st);
    }

    sizeB_idx_1 = (real_T)a_tmp->size[1] + 2.0 * pad[1];
    if (sizeB_idx_1 != (int32_T)muDoubleScalarFloor(sizeB_idx_1)) {
      emlrtIntegerCheckR2012b(sizeB_idx_1, &emlrtDCI, &b_st);
    }

    i = a->size[0] * a->size[1];
    a->size[0] = (int32_T)sizeB_idx_0;
    a->size[1] = (int32_T)sizeB_idx_1;
    emxEnsureCapacity_real_T(&b_st, a, i, &w_emlrtRTEI);
    i = a->size[0];
    for (b_i = 0; b_i < i; b_i++) {
      i1 = b_i + 1;
      if ((i1 < 1) || (i1 > a->size[0])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, a->size[0], &e_emlrtBCI, &b_st);
      }

      a->data[i1 - 1] = 0.0;
    }

    b_a = a_tmp->size[1] + 2;
    b = a->size[1];
    c_st.site = &p_emlrtRSI;
    overflow = ((a_tmp->size[1] + 2 <= a->size[1]) && (a->size[1] > 2147483646));
    if (overflow) {
      d_st.site = &r_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (j = b_a; j <= b; j++) {
      i = a->size[0];
      for (b_i = 0; b_i < i; b_i++) {
        i1 = b_i + 1;
        if ((i1 < 1) || (i1 > a->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, a->size[0], &emlrtBCI, &b_st);
        }

        if ((j < 1) || (j > a->size[1])) {
          emlrtDynamicBoundsCheckR2012b(j, 1, a->size[1], &emlrtBCI, &b_st);
        }

        a->data[(i1 + a->size[0] * (j - 1)) - 1] = 0.0;
      }
    }

    i = a_tmp->size[1];
    for (j = 0; j < i; j++) {
      i1 = j + 2;
      if ((i1 < 1) || (i1 > a->size[1])) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, a->size[1], &f_emlrtBCI, &b_st);
      }

      a->data[a->size[0] * (i1 - 1)] = 0.0;
    }

    i = a_tmp->size[1];
    for (j = 0; j < i; j++) {
      b_a = a_tmp->size[0] + 2;
      b = a->size[0];
      c_st.site = &q_emlrtRSI;
      overflow = ((a_tmp->size[0] + 2 <= a->size[0]) && (a->size[0] > 2147483646));
      if (overflow) {
        d_st.site = &r_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }

      for (b_i = b_a; b_i <= b; b_i++) {
        if ((b_i < 1) || (b_i > a->size[0])) {
          emlrtDynamicBoundsCheckR2012b(b_i, 1, a->size[0], &d_emlrtBCI, &b_st);
        }

        i1 = j + 2;
        if ((i1 < 1) || (i1 > a->size[1])) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, a->size[1], &d_emlrtBCI, &b_st);
        }

        a->data[(b_i + a->size[0] * (i1 - 1)) - 1] = 0.0;
      }
    }

    i = a_tmp->size[1];
    for (j = 0; j < i; j++) {
      i1 = a_tmp->size[0];
      for (b_i = 0; b_i < i1; b_i++) {
        b_a = b_i + 1;
        if ((b_a < 1) || (b_a > a_tmp->size[0])) {
          emlrtDynamicBoundsCheckR2012b(b_a, 1, a_tmp->size[0], &b_emlrtBCI,
            &b_st);
        }

        b = j + 1;
        if ((b < 1) || (b > a_tmp->size[1])) {
          emlrtDynamicBoundsCheckR2012b(b, 1, a_tmp->size[1], &b_emlrtBCI, &b_st);
        }

        i2 = b_i + 2;
        if ((i2 < 1) || (i2 > a->size[0])) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, a->size[0], &c_emlrtBCI, &b_st);
        }

        i3 = j + 2;
        if ((i3 < 1) || (i3 > a->size[1])) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, a->size[1], &c_emlrtBCI, &b_st);
        }

        a->data[(i2 + a->size[0] * (i3 - 1)) - 1] = a_tmp->data[(b_a +
          a_tmp->size[0] * (b - 1)) - 1];
      }
    }
  }
}

/* End of code generation (imfilter.c) */

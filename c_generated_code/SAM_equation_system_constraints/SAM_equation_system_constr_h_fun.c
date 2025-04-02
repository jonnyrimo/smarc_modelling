/* This file was automatically generated by CasADi 3.6.7.
 *  It consists of: 
 *   1) content generated by CasADi runtime: not copyrighted
 *   2) template code copied from CasADi source: permissively licensed (MIT-0)
 *   3) user code: owned by the user
 *
 */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CASADI_CODEGEN_PREFIX
  #define CASADI_NAMESPACE_CONCAT(NS, ID) _CASADI_NAMESPACE_CONCAT(NS, ID)
  #define _CASADI_NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) CASADI_NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) SAM_equation_system_constr_h_fun_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int int
#endif

/* Add prefix to internal symbols */
#define casadi_c0 CASADI_PREFIX(c0)
#define casadi_clear CASADI_PREFIX(clear)
#define casadi_copy CASADI_PREFIX(copy)
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)
#define casadi_sq CASADI_PREFIX(sq)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

void casadi_copy(const casadi_real* x, casadi_int n, casadi_real* y) {
  casadi_int i;
  if (y) {
    if (x) {
      for (i=0; i<n; ++i) *y++ = *x++;
    } else {
      for (i=0; i<n; ++i) *y++ = 0.;
    }
  }
}

void casadi_clear(casadi_real* x, casadi_int n) {
  casadi_int i;
  if (x) {
    for (i=0; i<n; ++i) *x++ = 0;
  }
}

casadi_real casadi_sq(casadi_real x) { return x*x;}

static const casadi_int casadi_s0[23] = {19, 1, 0, 19, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};
static const casadi_int casadi_s1[10] = {6, 1, 0, 6, 0, 1, 2, 3, 4, 5};
static const casadi_int casadi_s2[3] = {0, 0, 0};

static const casadi_real casadi_c0[3] = {1., 0., 0.};

/* SAM_equation_system_constr_h_fun:(i0[19],i1[6],i2[],i3[])->(o0[6]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem) {
  casadi_int i, j, k;
  casadi_real *rr, *ss, *tt;
  const casadi_real *cr, *cs;
  casadi_real *w0=w+3, w1, w2, w3, *w4=w+25, *w5=w+28, w6, w7, w8, w9, w10, w11, w12, w13, w14, w15, w16, w17, *w18=w+43, *w19=w+46, *w20=w+49, *w21=w+52, *w22=w+61;
  /* #0: @0 = input[0][0] */
  casadi_copy(arg[0], 19, w0);
  /* #1: @1 = @0[0] */
  for (rr=(&w1), ss=w0+0; ss!=w0+1; ss+=1) *rr++ = *ss;
  /* #2: @2 = @0[1] */
  for (rr=(&w2), ss=w0+1; ss!=w0+2; ss+=1) *rr++ = *ss;
  /* #3: @3 = @0[2] */
  for (rr=(&w3), ss=w0+2; ss!=w0+3; ss+=1) *rr++ = *ss;
  /* #4: @4 = vertcat(@1, @2, @3) */
  rr=w4;
  *rr++ = w1;
  *rr++ = w2;
  *rr++ = w3;
  /* #5: @1 = 0.655 */
  w1 = 6.5500000000000003e-01;
  /* #6: @5 = zeros(3x1) */
  casadi_clear(w5, 3);
  /* #7: @2 = 1 */
  w2 = 1.;
  /* #8: @3 = @0[5] */
  for (rr=(&w3), ss=w0+5; ss!=w0+6; ss+=1) *rr++ = *ss;
  /* #9: @6 = @0[3] */
  for (rr=(&w6), ss=w0+3; ss!=w0+4; ss+=1) *rr++ = *ss;
  /* #10: @7 = sq(@6) */
  w7 = casadi_sq( w6 );
  /* #11: @8 = @0[4] */
  for (rr=(&w8), ss=w0+4; ss!=w0+5; ss+=1) *rr++ = *ss;
  /* #12: @9 = sq(@8) */
  w9 = casadi_sq( w8 );
  /* #13: @7 = (@7+@9) */
  w7 += w9;
  /* #14: @9 = sq(@3) */
  w9 = casadi_sq( w3 );
  /* #15: @7 = (@7+@9) */
  w7 += w9;
  /* #16: @9 = @0[6] */
  for (rr=(&w9), ss=w0+6; ss!=w0+7; ss+=1) *rr++ = *ss;
  /* #17: @10 = sq(@9) */
  w10 = casadi_sq( w9 );
  /* #18: @7 = (@7+@10) */
  w7 += w10;
  /* #19: @7 = sqrt(@7) */
  w7 = sqrt( w7 );
  /* #20: @3 = (@3/@7) */
  w3 /= w7;
  /* #21: @10 = sq(@3) */
  w10 = casadi_sq( w3 );
  /* #22: @9 = (@9/@7) */
  w9 /= w7;
  /* #23: @11 = sq(@9) */
  w11 = casadi_sq( w9 );
  /* #24: @12 = (@10+@11) */
  w12  = (w10+w11);
  /* #25: @12 = (2.*@12) */
  w12 = (2.* w12 );
  /* #26: @12 = (@2-@12) */
  w12  = (w2-w12);
  /* #27: @8 = (@8/@7) */
  w8 /= w7;
  /* #28: @13 = (@8*@3) */
  w13  = (w8*w3);
  /* #29: @6 = (@6/@7) */
  w6 /= w7;
  /* #30: @7 = (@6*@9) */
  w7  = (w6*w9);
  /* #31: @14 = (@13-@7) */
  w14  = (w13-w7);
  /* #32: @14 = (2.*@14) */
  w14 = (2.* w14 );
  /* #33: @15 = (@8*@9) */
  w15  = (w8*w9);
  /* #34: @16 = (@6*@3) */
  w16  = (w6*w3);
  /* #35: @17 = (@15+@16) */
  w17  = (w15+w16);
  /* #36: @17 = (2.*@17) */
  w17 = (2.* w17 );
  /* #37: @18 = horzcat(@12, @14, @17) */
  rr=w18;
  *rr++ = w12;
  *rr++ = w14;
  *rr++ = w17;
  /* #38: @18 = @18' */
  /* #39: @13 = (@13+@7) */
  w13 += w7;
  /* #40: @13 = (2.*@13) */
  w13 = (2.* w13 );
  /* #41: @7 = sq(@8) */
  w7 = casadi_sq( w8 );
  /* #42: @11 = (@7+@11) */
  w11  = (w7+w11);
  /* #43: @11 = (2.*@11) */
  w11 = (2.* w11 );
  /* #44: @11 = (@2-@11) */
  w11  = (w2-w11);
  /* #45: @3 = (@3*@9) */
  w3 *= w9;
  /* #46: @6 = (@6*@8) */
  w6 *= w8;
  /* #47: @8 = (@3-@6) */
  w8  = (w3-w6);
  /* #48: @8 = (2.*@8) */
  w8 = (2.* w8 );
  /* #49: @19 = horzcat(@13, @11, @8) */
  rr=w19;
  *rr++ = w13;
  *rr++ = w11;
  *rr++ = w8;
  /* #50: @19 = @19' */
  /* #51: @15 = (@15-@16) */
  w15 -= w16;
  /* #52: @15 = (2.*@15) */
  w15 = (2.* w15 );
  /* #53: @3 = (@3+@6) */
  w3 += w6;
  /* #54: @3 = (2.*@3) */
  w3 = (2.* w3 );
  /* #55: @7 = (@7+@10) */
  w7 += w10;
  /* #56: @7 = (2.*@7) */
  w7 = (2.* w7 );
  /* #57: @2 = (@2-@7) */
  w2 -= w7;
  /* #58: @20 = horzcat(@15, @3, @2) */
  rr=w20;
  *rr++ = w15;
  *rr++ = w3;
  *rr++ = w2;
  /* #59: @20 = @20' */
  /* #60: @21 = horzcat(@18, @19, @20) */
  rr=w21;
  for (i=0, cs=w18; i<3; ++i) *rr++ = *cs++;
  for (i=0, cs=w19; i<3; ++i) *rr++ = *cs++;
  for (i=0, cs=w20; i<3; ++i) *rr++ = *cs++;
  /* #61: @22 = @21' */
  for (i=0, rr=w22, cs=w21; i<3; ++i) for (j=0; j<3; ++j) rr[i+j*3] = *cs++;
  /* #62: @18 = [1, 0, 0] */
  casadi_copy(casadi_c0, 3, w18);
  /* #63: @5 = mac(@22,@18,@5) */
  for (i=0, rr=w5; i<1; ++i) for (j=0; j<3; ++j, ++rr) for (k=0, ss=w22+j, tt=w18+i*3; k<3; ++k) *rr += ss[k*3]**tt++;
  /* #64: @15 = @5[0] */
  for (rr=(&w15), ss=w5+0; ss!=w5+1; ss+=1) *rr++ = *ss;
  /* #65: @15 = sq(@15) */
  w15 = casadi_sq( w15 );
  /* #66: @3 = @5[1] */
  for (rr=(&w3), ss=w5+1; ss!=w5+2; ss+=1) *rr++ = *ss;
  /* #67: @3 = sq(@3) */
  w3 = casadi_sq( w3 );
  /* #68: @15 = (@15+@3) */
  w15 += w3;
  /* #69: @3 = @5[2] */
  for (rr=(&w3), ss=w5+2; ss!=w5+3; ss+=1) *rr++ = *ss;
  /* #70: @3 = sq(@3) */
  w3 = casadi_sq( w3 );
  /* #71: @15 = (@15+@3) */
  w15 += w3;
  /* #72: @15 = sqrt(@15) */
  w15 = sqrt( w15 );
  /* #73: @5 = (@5/@15) */
  for (i=0, rr=w5; i<3; ++i) (*rr++) /= w15;
  /* #74: @5 = (@1*@5) */
  for (i=0, rr=w5, cs=w5; i<3; ++i) (*rr++)  = (w1*(*cs++));
  /* #75: @18 = (@4+@5) */
  for (i=0, rr=w18, cr=w4, cs=w5; i<3; ++i) (*rr++)  = ((*cr++)+(*cs++));
  /* #76: @1 = @18[0] */
  for (rr=(&w1), ss=w18+0; ss!=w18+1; ss+=1) *rr++ = *ss;
  /* #77: output[0][0] = @1 */
  if (res[0]) res[0][0] = w1;
  /* #78: @1 = @18[1] */
  for (rr=(&w1), ss=w18+1; ss!=w18+2; ss+=1) *rr++ = *ss;
  /* #79: output[0][1] = @1 */
  if (res[0]) res[0][1] = w1;
  /* #80: @1 = @18[2] */
  for (rr=(&w1), ss=w18+2; ss!=w18+3; ss+=1) *rr++ = *ss;
  /* #81: output[0][2] = @1 */
  if (res[0]) res[0][2] = w1;
  /* #82: @4 = (@4-@5) */
  for (i=0, rr=w4, cs=w5; i<3; ++i) (*rr++) -= (*cs++);
  /* #83: @1 = @4[0] */
  for (rr=(&w1), ss=w4+0; ss!=w4+1; ss+=1) *rr++ = *ss;
  /* #84: output[0][3] = @1 */
  if (res[0]) res[0][3] = w1;
  /* #85: @1 = @4[1] */
  for (rr=(&w1), ss=w4+1; ss!=w4+2; ss+=1) *rr++ = *ss;
  /* #86: output[0][4] = @1 */
  if (res[0]) res[0][4] = w1;
  /* #87: @1 = @4[2] */
  for (rr=(&w1), ss=w4+2; ss!=w4+3; ss+=1) *rr++ = *ss;
  /* #88: output[0][5] = @1 */
  if (res[0]) res[0][5] = w1;
  return 0;
}

CASADI_SYMBOL_EXPORT int SAM_equation_system_constr_h_fun(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, int mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT int SAM_equation_system_constr_h_fun_alloc_mem(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT int SAM_equation_system_constr_h_fun_init_mem(int mem) {
  return 0;
}

CASADI_SYMBOL_EXPORT void SAM_equation_system_constr_h_fun_free_mem(int mem) {
}

CASADI_SYMBOL_EXPORT int SAM_equation_system_constr_h_fun_checkout(void) {
  return 0;
}

CASADI_SYMBOL_EXPORT void SAM_equation_system_constr_h_fun_release(int mem) {
}

CASADI_SYMBOL_EXPORT void SAM_equation_system_constr_h_fun_incref(void) {
}

CASADI_SYMBOL_EXPORT void SAM_equation_system_constr_h_fun_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int SAM_equation_system_constr_h_fun_n_in(void) { return 4;}

CASADI_SYMBOL_EXPORT casadi_int SAM_equation_system_constr_h_fun_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_real SAM_equation_system_constr_h_fun_default_in(casadi_int i) {
  switch (i) {
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* SAM_equation_system_constr_h_fun_name_in(casadi_int i) {
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    case 3: return "i3";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* SAM_equation_system_constr_h_fun_name_out(casadi_int i) {
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* SAM_equation_system_constr_h_fun_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    case 2: return casadi_s2;
    case 3: return casadi_s2;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* SAM_equation_system_constr_h_fun_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s1;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int SAM_equation_system_constr_h_fun_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 7;
  if (sz_res) *sz_res = 2;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 70;
  return 0;
}

CASADI_SYMBOL_EXPORT int SAM_equation_system_constr_h_fun_work_bytes(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 7*sizeof(const casadi_real*);
  if (sz_res) *sz_res = 2*sizeof(casadi_real*);
  if (sz_iw) *sz_iw = 0*sizeof(casadi_int);
  if (sz_w) *sz_w = 70*sizeof(casadi_real);
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif

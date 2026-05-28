#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME: 
   Check these declarations against the C/Fortran source code.
*/

/* .Call calls */
extern SEXP shortestPathsInformation(SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"shortestPathsInformation", (DL_FUNC) &shortestPathsInformation, 1},
    {NULL, NULL, 0}
};

void R_init_fechner(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

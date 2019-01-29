## Build the cpp library .
#if USE_SINGLE_PRECISION
#  PREC_FLAG = -DSINGLE_PRECISION
#  PREC_TYPE = c_float
#else
#  PREC_TYPE = c_double
#endif
#if CREATE_FORTRAN_BINDINGS
#  FOBJ = radiation_solvers_f.F90
#  FHEADERS = radiation_solvers_f.mod
#endif
lib_LTLIBRARIES = libradiation_solvers.la
libradiation_solvers_la_SOURCES = longwave.c shortwave.c utils.c verbosity.c ${FOBJ}
libradiation_solvers_ladir = ${includedir}
libradiation_solvers_la_HEADERS = radiation_solvers.h longwave.h shortwave.h utils.h verbosity.h floating_point_type.h $(FHEADERS)
libradiation_solvers_la_CPPFLAGS = ${PREC_FLAG}

## Build the python bindings.
#if HAVE_PYTHON
#pkgpython_PYTHON = radiation_solvers.py __init__.py
#endif
#CLEANFILES = $(FHEADERS) radiation_solvers.py
#EXTRA_DIST = radiation_solvers.py.in
#radiation_solvers.py: radiation_solvers.py.in
#	sed -e 's/TYPE/${PREC_TYPE}/g' -e 's,LIBDIR,"${libdir}",g' $< > $@


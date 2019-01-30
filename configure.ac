#   -*- Autoconf -*-
## Process this file with autoconf to produce a configure script.
# This is part of the Ensemble Consistency Test (ECT) package. 
#
# Running autoconf on this file will trigger a warning if
# autoconf is not at least the specified version.
AC_PREREQ([2.69])

# Initialize with name, version, and support email address.
AC_INIT([EDGI_ECT], [1.0], [gfdl.climate.model.info@noaa.gov])

# This call is required by automake.
AM_INIT_AUTOMAKE([-Wall -Werror foreign])

# Check for C and C++ compilers
AC_PROG_CC
AC_PROG_CXX

# check for netcdf
AC_CHECK_HEADER([netcdf.h], [], [AC_MSG_ERROR([netcdf.h not found. Please set CPPFLAGS.])])
AC_CHECK_HEADER([netcdfcpp.h], [], [AC_MSG_ERROR([netcdfcpp.h not found. Please set CPPFLAGS.])])
AC_SEARCH_LIBS([nc_open], [netcdf])

# check for EDGI package


AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([
 Makefile
 src/Makefile
])
AC_OUTPUT




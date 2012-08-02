AC_INIT([nyx-common-linux-modules], [0.1.0], [morphis@gravedo.de], [nyx-common-linux-modules])
AC_CONFIG_SRCDIR([Makefile.am])
AC_CONFIG_HEADERS(config.h)
AM_INIT_AUTOMAKE([dist-bzip2 subdir-objects])
m4_ifdef([AM_SILENT_RULES], [AM_SILENT_RULES([yes])])

AC_PROG_CC
AM_PROG_CC_C_O
AC_GNU_SOURCE
AC_DISABLE_STATIC
AC_PROG_LIBTOOL

AC_SUBST(CFLAGS)
AC_SUBST(CPPFLAGS)
AC_SUBST(LDFLAGS)

PKG_PROG_PKG_CONFIG

NYX_REQURIED=2.0.0
PKG_CHECK_MODULES(NYX, nyx >= $NYX_REQURIED)
AC_SUBST(NYX_CFLAGS)
AC_SUBST(NYX_LIBS)

# determine nyx module directory
NYX_MODULE_DIR="`$PKG_CONFIG --variable=moduledir nyx`"
AC_SUBST(NYX_MODULE_DIR)

# check for debugging
AC_ARG_ENABLE(debug,
  [  --enable-debug            Enable debug build (default=disabled)],
  [debug=$enableval],
  [debug="no"])
AM_CONDITIONAL( [WANT_DEBUG], [test x"$debug" = x"yes"])

AC_CONFIG_FILES([
	Makefile
	modules/Makefile
	modules/battery/Makefile
	modules/charger/Makefile
	modules/led_controller/Makefile
	modules/system/Makefile
])
AC_OUTPUT

echo
echo "------------------------------------------------------------------------"
echo "$PACKAGE_NAME $PACKAGE_VERSION"
echo "------------------------------------------------------------------------"
echo
echo "Configuration Options:"
echo
echo "  debug build.............: $debug"
echo
echo "  prefix..................: $prefix"
echo
echo "  nyx module directory....: $NYX_MODULE_DIR"
echo
echo "------------------------------------------------------------------------"
echo
echo "Now type 'make' to compile and 'make install' to install this package."


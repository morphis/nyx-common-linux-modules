NULL =

DEBUG_FLAGS=
if WANT_DEBUG
DEBUG_FLAGS += -ggdb -O0 -DDEBUG
endif

modlibexecdir = $(NYX_MODULE_DIR)
modlibexec_LTLIBRARIES = nyxLedControllerCommonLinux.la

nyxLedControllerCommonLinux_la_SOURCES = module.c
nyxLedControllerCommonLinux_la_LIBADD = \
	$(NYX_LIBS)
nyxLedControllerCommonLinux_la_CFLAGS = \
	$(NYX_CFLAGS) \
	$(DEBUG_FLAGS)
nyxLedControllerCommonLinux_la_LDFLAGS = -module -avoid-version -no-undefined

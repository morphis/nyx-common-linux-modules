NULL =

DEBUG_FLAGS=
if WANT_DEBUG
DEBUG_FLAGS += -ggdb -O0 -DDEBUG
endif

modlibexecdir = $(NYX_MODULE_DIR)
modlibexec_LTLIBRARIES = nyxSystemCommonLinux.la

nyxSystemCommonLinux_la_SOURCES = module.c
nyxSystemCommonLinux_la_LIBADD = \
	$(NYX_LIBS)
nyxSystemCommonLinux_la_CFLAGS = \
	$(NYX_CFLAGS) \
	$(DEBUG_FLAGS)
nyxSystemCommonLinux_la_LDFLAGS = -module -avoid-version -no-undefined

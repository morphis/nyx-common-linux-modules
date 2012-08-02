NULL =

DEBUG_FLAGS=
if WANT_DEBUG
DEBUG_FLAGS += -ggdb -O0 -DDEBUG
endif

modlibexecdir = $(NYX_MODULE_DIR)
modlibexec_LTLIBRARIES = nyxChargerCommonLinux.la

nyxChargerCommonLinux_la_SOURCES = module.c
nyxChargerCommonLinux_la_LIBADD = \
	$(NYX_LIBS)
nyxChargerCommonLinux_la_CFLAGS = \
	$(NYX_CFLAGS) \
	$(DEBUG_FLAGS)
nyxChargerCommonLinux_la_LDFLAGS = -module -avoid-version -no-undefined

NULL =

DEBUG_FLAGS=
if WANT_DEBUG
DEBUG_FLAGS += -ggdb -O0 -DDEBUG
endif

modlibexecdir = $(NYX_MODULE_DIR)
modlibexec_LTLIBRARIES = nyxCommonLinuxCharger.la

nyxCommonLinuxCharger_la_SOURCES = module.c
nyxCommonLinuxCharger_la_LIBADD = \
	$(NYX_LIBS)
nyxCommonLinuxCharger_la_CFLAGS = \
	$(NYX_CFLAGS) \
	$(DEBUG_FLAGS)
nyxCommonLinuxCharger_la_LDFLAGS = -module -avoid-version -no-undefined

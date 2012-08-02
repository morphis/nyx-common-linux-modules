NULL =

DEBUG_FLAGS=
if WANT_DEBUG
DEBUG_FLAGS += -ggdb -O0 -DDEBUG
endif

modlibexecdir = $(NYX_MODULE_DIR)
modlibexec_LTLIBRARIES = nyxBatteryCommonLinux.la

nyxBatteryCommonLinux_la_SOURCES = module.c
nyxBatteryCommonLinux_la_LIBADD = \
	$(NYX_LIBS)
nyxBatteryCommonLinux_la_CFLAGS = \
	$(NYX_CFLAGS) \
	$(DEBUG_FLAGS)
nyxBatteryCommonLinux_la_LDFLAGS = -module -avoid-version -no-undefined

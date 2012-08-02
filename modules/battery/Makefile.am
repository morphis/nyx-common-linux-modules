NULL =

DEBUG_FLAGS=
if WANT_DEBUG
DEBUG_FLAGS += -ggdb -O0 -DDEBUG
endif

modlibexecdir = $(NYX_MODULE_DIR)
modlibexec_LTLIBRARIES = nyxCommonLinuxBattery.la

nyxCommonLinuxBattery_la_SOURCES = module.c
nyxCommonLinuxBattery_la_LIBADD = \
	$(NYX_LIBS)
nyxCommonLinuxBattery_la_CFLAGS = \
	$(NYX_CFLAGS) \
	$(DEBUG_FLAGS)
nyxCommonLinuxBattery_la_LDFLAGS = -module -avoid-version -no-undefined

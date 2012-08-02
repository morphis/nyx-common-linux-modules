NULL =

DEBUG_FLAGS=
if WANT_DEBUG
DEBUG_FLAGS += -ggdb -O0 -DDEBUG
endif

modlibexecdir = $(NYX_MODULE_DIR)
modlibexec_LTLIBRARIES = nyxCommonLinuxLedController.la

nyxCommonLinuxLedController_la_SOURCES = module.c
nyxCommonLinuxLedController_la_LIBADD = \
	$(NYX_LIBS)
nyxCommonLinuxLedController_la_CFLAGS = \
	$(NYX_CFLAGS) \
	$(DEBUG_FLAGS)
nyxCommonLinuxLedController_la_LDFLAGS = -module -avoid-version -no-undefined

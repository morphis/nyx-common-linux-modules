NULL =

DEBUG_FLAGS=
if WANT_DEBUG
DEBUG_FLAGS += -ggdb -O0 -DDEBUG
endif

modlibexecdir = $(NYX_MODULE_DIR)
modlibexec_LTLIBRARIES = nyxCommonLinuxSystem.la

nyxCommonLinuxSystem_la_SOURCES = module.c
nyxCommonLinuxSystem_la_LIBADD = \
	$(NYX_LIBS)
nyxCommonLinuxSystem_la_CFLAGS = \
	$(NYX_CFLAGS) \
	$(DEBUG_FLAGS)
nyxCommonLinuxSystem_la_LDFLAGS = -module -avoid-version -no-undefined

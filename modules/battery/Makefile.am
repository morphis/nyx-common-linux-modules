NULL =

DEBUG_FLAGS=
if WANT_DEBUG
DEBUG_FLAGS += -ggdb -O0 -DDEBUG
endif

modlibexecdir = $(NYX_MODULE_DIR)
modlibexec_LTLIBRARIES = nyxCrespoBattery.la

nyxCrespoBattery_la_SOURCES = module.c
nyxCrespoBattery_la_LIBADD = \
	$(NYX_LIBS)
nyxCrespoBattery_la_CFLAGS = \
	$(NYX_CFLAGS) \
	$(DEBUG_FLAGS)
nyxCrespoBattery_la_LDFLAGS = -module -avoid-version -no-undefined

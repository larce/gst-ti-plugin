
lib_LTLIBRARIES = libgstbasecmem-@GST_MAJORMINOR@.la

libgstbasecmem_@GST_MAJORMINOR@_la_SOURCES = \
	gstcmemmeta.c                        \
	gstcmemallocator.c

libgstbasecmem_@GST_MAJORMINOR@includedir = $(includedir)/gstreamer-@GST_MAJORMINOR@/gst/cmem
libgstbasecmem_@GST_MAJORMINOR@include_HEADERS = \
	gstcmemmeta.h

libgstbasecmem_@GST_MAJORMINOR@_la_CFLAGS = $(GST_CFLAGS) $(CODECS_CFLAGS) -I@top_srcdir@/gst/ti/
libgstbasecmem_@GST_MAJORMINOR@_la_LIBADD = $(GST_LIBS) $(CODECS_LIBS)

noinst_HEADERS = gstcmemallocator.h


include_directories(${KDE4_INCLUDES} ${KDE4_INCLUDE_DIR} ${QT_INCLUDES} )


########### next target ###############

set(gpugraph_STAT_SRCS libgpugraph.cpp libgpugraph.h)

kde4_add_library(gpugraph STATIC ${gpugraph_STAT_SRCS})


########### install files ###############




#original Makefile.am contents follow:

#EXTRA_DIST = libgpugraph.glsl glsl_to_cpp.sh
#
#noinst_LTLIBRARIES = libgpugraph.la
#
#INCLUDES = @GL_INCLUDES@
#AM_LDFLAGS = @GL_LDFLAGS@ @LIB_GL@ 
#			   
#
#libgpugraph_la_SOURCES = libgpugraph.cpp libgpugraph.h
#
#fragmentShaderHeaderSource.h: libgpugraph.glsl
#	sh glsl_to_cpp.sh $< > $@
#
#libgpugraph.cpp: fragmentShaderHeaderSource.h
#
#clean-generic:
#	rm -f fragmentShaderHeaderSource.h

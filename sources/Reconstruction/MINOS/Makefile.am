SUBSRC1 = $(wildcard src/*.cc)
SUBOBJ = $(SUBSRC1:.cc=.o)
SUBHDR = $(wildcard include/*.hh) 

AUTOMAKE_OPTIONS = foreign

INCLUDES = -Iinclude -I$(ROOTSYS)/include -I../../Core/include -I../../Reconstruction/BigRIPS/include  
CXXFLAGS = -fPIC -Iinclude $(shell root-config --cflags) -I../../Core/include -I../../Reconstruction/BigRIPS/include
LDFLAGS = $(shell root-config --glibs) $(shell pkg-config --libs minos-fem)

if USE_MINOS
CXXFLAGS += $(MINOS_FEM_CFLAGS) -DUSE_MINOS
LDFLAGS += $(MINOS_FEM_LIBS)
endif

include_HEADERS = $(SUBHDR) $(SUBHDRF)

lib_LTLIBRARIES = libanaminos.la
libanaminos_la_SOURCES = $(SUBSRC1) anaminos_dict.cc
libanaminos_la_DEPENDENCIES = $(SUBOBJ)
libanaminos_la_LIBADD = minos_fem_libs $(SUBOBJ)
libanaminos_la_LDFLAGS = $(LDFLAGS)

anaminos_dict.cc: $(SUBHDR) anaminos_linkdef.hh
	rootcint -f $@ -c $(DEFAULT_INCLUDES) $(INCLUDES) $^
	@if [ ! -d $(prefix)/lib ]; then \
	mkdir -p $(prefix)/lib; \
	fi
	@if [ -f anaminos_dict_rdict.pcm ]; then \
	cp anaminos_dict_rdict.pcm $(prefix)/lib; \
	fi

.cc.o:

.f.o:

.c.o:

clean-local:
	rm -f *dict*

clean:
	rm -f $(SUBOBJ)

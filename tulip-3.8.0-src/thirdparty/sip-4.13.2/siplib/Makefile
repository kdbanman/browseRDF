TARGET = sip.so
OFILES = siplib.o apiversions.o descriptors.o qtlib.o threads.o objmap.o voidptr.o bool.o
HFILES = sip.h sipint.h 

CC = gcc
CXX = g++
LINK = g++
CPPFLAGS = -DNDEBUG -I. -I/usr/include/python2.7
CFLAGS = -pipe -fPIC -O2 -w
CXXFLAGS = -pipe -fPIC -O2 -w
LFLAGS = -shared -Wl,--version-script=sip.exp
LIBS = 
.SUFFIXES: .c .o .cpp .cc .cxx .C


.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.C.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.c.o:
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

all: $(TARGET)

$(OFILES): $(HFILES)

$(TARGET): $(OFILES)
	@echo '{ global: initsip; local: *; };' > sip.exp
	$(LINK) $(LFLAGS) -o $(TARGET) $(OFILES) $(LIBS)

install: $(TARGET)
	@test -d $(DESTDIR)/home/pm/tulip3/build_3_8_maint/thirdparty/sip-4.13.2/siplib || mkdir -p $(DESTDIR)/home/pm/tulip3/build_3_8_maint/thirdparty/sip-4.13.2/siplib
	cp -f $(TARGET) $(DESTDIR)/home/pm/tulip3/build_3_8_maint/thirdparty/sip-4.13.2/siplib/$(TARGET)
	strip $(DESTDIR)/home/pm/tulip3/build_3_8_maint/thirdparty/sip-4.13.2/siplib/$(TARGET)
	@test -d $(DESTDIR)/home/pm/tulip3/tulip_3_8_maint/thirdparty/sip-4.13.2/siplib || mkdir -p $(DESTDIR)/home/pm/tulip3/tulip_3_8_maint/thirdparty/sip-4.13.2/siplib
	cp -f /home/pm/tulip3/tulip_3_8_maint/thirdparty/sip-4.13.2/siplib/sip.h $(DESTDIR)/home/pm/tulip3/tulip_3_8_maint/thirdparty/sip-4.13.2/siplib/sip.h

clean:
	-rm -f $(TARGET)
	-rm -f siplib.o
	-rm -f apiversions.o
	-rm -f descriptors.o
	-rm -f qtlib.o
	-rm -f threads.o
	-rm -f objmap.o
	-rm -f voidptr.o
	-rm -f bool.o
	-rm -f sip.exp

TARGET = sip
OFILES = main.o transform.o gencode.o extracts.o export.o heap.o parser.o lexer.o
HFILES = sip.h parser.h

CC = gcc
CXX = g++
LINK = g++
CPPFLAGS = -DNDEBUG -I.
CFLAGS = -pipe -O2 -w
CXXFLAGS = -pipe -O2 -w
LFLAGS = 
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
	$(LINK) $(LFLAGS) -o $(TARGET) $(OFILES) $(LIBS)

install: $(TARGET)
	@test -d $(DESTDIR)/home/pm/tulip3/build_3_8_maint/thirdparty/sip-4.13.2/sipgen || mkdir -p $(DESTDIR)/home/pm/tulip3/build_3_8_maint/thirdparty/sip-4.13.2/sipgen
	cp -f $(TARGET) $(DESTDIR)/home/pm/tulip3/build_3_8_maint/thirdparty/sip-4.13.2/sipgen/$(TARGET)

clean:
	-rm -f $(TARGET)
	-rm -f main.o
	-rm -f transform.o
	-rm -f gencode.o
	-rm -f extracts.o
	-rm -f export.o
	-rm -f heap.o
	-rm -f parser.o
	-rm -f lexer.o

TULIP_CONFIG=tulip-config
TARGET= glutviewer
SRCS=   glutviewer.cpp

CXXFLAGS = -g -O3 -funroll-loops -Wall -DNDEBUG `${TULIP_CONFIG} --cxxflags`

CXX=g++
LDFLAGS=  `${TULIP_CONFIG} --lib_tulip --lib_ogl` -L/usr/lib/GL -lGL -lGLU -lglut

OBJS=$(SRCS:.cpp=.o)

DEPS=$(SRCS:.cpp=.d)


all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@ $(LDFLAGS) $(LIBS)

clean :
	-rm -f $(TARGET) *.o *.d

%.d: %.cpp
	@$(SHELL) -ec '$(CXX) -M $(CXXFLAGS) $< \
		| sed '\''s/\($*\)\.o[ :]*/\1.o $@ : /g'\'' > $@; \
		[ -s $@ ] || rm -f $@'


-include $(DEPS)

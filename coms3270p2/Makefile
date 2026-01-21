CC=gcc
CXX=g++
CFLAGS = -Wextra -std=c99 -g
CXXFLAGS= -std=c++11 -Wall
LDFLAGS = -lm

all: testconfig

testconfig: ConfigTest.cpp Config.o
	$(CXX) $(CXXFLAGS) -o testconfig ConfigTest.cpp Config.o

Config.o: Config.cpp Config.h
	$(CXX) $(CXXFLAGS) -c Config.cpp

clean:
	rm -f *.o testconfig
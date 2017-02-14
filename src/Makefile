# Makefile for CPPUTEST

CPPUTEST_HOME = $(HOME)/Programs/cpputest-3.8

CC      := gcc
CFLAGS    := -g -Wall
CFLAGS  += -std=c99
CFLAGS  += -D CPPUTEST            # Compile the test file, ignore the main function of sample.c, the sample.c code with the CPPUTEST macro

# CPPUTest is C++Write, so using g++ To compile the test file
CPP     := g++
CPPFLAGS  := -g -Wall
CPPFLAGS  += -I$(CPPUTEST_HOME)/include
LDFLAGS := -L$(CPPUTEST_HOME)/lib -lCppUTest

# A memory leak detection
MEMFLAGS = -include $(CPPUTEST_HOME)/include/CppUTest/MemoryLeakDetectorMallocMacros.h

FILE = KNoTThing

# Additional compiled test program
test: $(FILE)_test.o
	$(CPP) -o $@ $(FILE)_test.o $(LDFLAGS)

test.o: $(FILE)_test.cpp
	$(CPP) -c -o $(FILE)_test.o $(FILE)_test.cpp $(CPPFLAGS) $(MEMFLAGS)

.PHONY: clean
clean:
	@echo "clean..."
	rm -f test
	rm -f test.o $(FILE)_test.o

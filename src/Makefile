# Makefile for creating and running unit tests using CPPUTest
#
# Modules to be tested are located in $(MAIN_SRC)

#MAIN_SRC = .

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

FILE = knot_thing_main

# Compile test program
#$(FILE): $(FILE).o
knot_thing_main: knot_thing_main.o

knot_thing_main.o: knot_thing_main.h knot_thing_main.c
	$(CC) -c -o knot_thing_main.o knot_thing_main.c $(CFLAGS) $(MEMFLAGS)

#$(FILE).o: $(FILE).h $(FILE).c
#	$(CC) -c -o $(FILE).o $(FILE).c $(CFLAGS) $(MEMFLAGS)

# Additional compiled test program
#test: $(FILE)_test.o
#	$(CPP) -o $@ $(FILE)_test.o $(LDFLAGS)
test: knot_thing_main_test.o knot_thing_main.o
	$(CPP) -o $@ knot_thing_main_test.o knot_thing_main.o $(LDFLAGS)

#test.o: $(FILE)_test.cpp
#	$(CPP) -c -o $(FILE)_test.o $(FILE)_test.cpp $(CPPFLAGS) $(MEMFLAGS)
test.o: knot_thing_main_test.cpp
	$(CPP) -c -o knot_thing_main_test.o knot_thing_main_test.cpp $(CPPFLAGS) $(MEMFLAGS)

.PHONY: clean
clean:
	@echo "clean..."
	rm -f test
	rm -f test.o knot_thing_main_test.o

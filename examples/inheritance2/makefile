# File:     makefile
# Author:   Dan Brekke
# Date: 

# Description
# This makefile will make the example program of a rectangleType class

CC=g++
OBJECTS=main.o rectangleType.o squareType.o
EXE=prog
CFLAGS=-fno-diagnostics-color -Wall

$(EXE):		$(OBJECTS)
		$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS)
main.o: 	main.cpp rectangleType.h squareType.h
		$(CC) $(CFLAGS) -c main.cpp
rectangleType.o:	rectangleType.cpp rectangleType.h
		$(CC) $(CFLAGS) -c rectangleType.cpp
squareType.o:	squareType.cpp squareType.h
		$(CC) $(CFLAGS) -c squareType.cpp
clean:
		rm -rf *.o *~ $(EXE)


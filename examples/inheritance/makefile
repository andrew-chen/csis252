# File:     makefile
# Author:   Dan Brekke
# Date: 

# Description
# This makefile will make the example program of a rectangleType class

CC=g++
OBJECTS=main.o rectangleType.o boxType.o
EXE=prog

$(EXE):		$(OBJECTS)
		$(CC) -o $(EXE) $(OBJECTS)
main.o: 	main.cpp rectangleType.h boxType.h
		$(CC) -c main.cpp
rectangleType.o:	rectangleType.cpp rectangleType.h
		$(CC) -c rectangleType.cpp
boxType.o:	boxType.cpp boxType.h
		$(CC) -c boxType.cpp
clean:
		rm -rf *.o *~ $(EXE)


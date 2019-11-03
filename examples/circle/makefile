# File:     makefile
# Author:   Dan Brekke
# Date: 

# Description
# This makefile will make the example program of a circle class

CC=g++ 
CFLAGS=-fno-diagnostics-color
LFLAGS=
OBJECTS=main.o circle.o
EXE=prog

$(EXE):		$(OBJECTS)
		$(CC) -o $(EXE) $(OBJECTS) $(LFLAGS)
main.o: 	main.cpp circle.h
		$(CC) $(CFLAGS) -c main.cpp
circle.o:	circle.cpp circle.h
		$(CC) $(CFLAGS) -c circle.cpp
clean:
		rm -rf *.o *~ $(EXE)


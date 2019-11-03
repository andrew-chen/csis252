# File:     makefile
# Author:   Dan Brekke

# Description
# This makefile will compile the program

EXE=prog
CC=g++
OBJECTS=main.o
$(EXE):		$(OBJECTS)
		$(CC) -o $(EXE) $(OBJECTS)
main.o: 	main.cpp binarySearchTree.h binaryTree.h 
		$(CC) -c main.cpp

clean:
		rm -rf $(OBJECTS) *~ $(EXE)


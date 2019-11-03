OBJECTS=main.o output.o read.o personType.o 
CC=g++
EXE=prog
CFLAGS=-fno-diagnostics-color -Wall
LFLAGS=
$(EXE):		$(OBJECTS)
		$(CC) -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o:		main.cpp personType.h listType.h
		$(CC) $(CFLAGS) -c main.cpp

read.o:		read.cpp personType.h listType.h
		$(CC) $(CFLAGS) -c read.cpp

output.o:	output.cpp personType.h listType.h
		$(CC) $(CFLAGS) -c output.cpp

personType.o:	personType.cpp personType.h
		$(CC) $(CFLAGS) -c personType.cpp

# This cleans out the directory before handing it in
clean:
		rm -rf $(OBJECTS) $(EXE) *~

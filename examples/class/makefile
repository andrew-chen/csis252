OBJECTS=main.o output.o read.o personType.o sort.o
CC=g++
EXE=prog
CFLAGS=-fno-diagnostics-color
LFLAGS=
$(EXE):		$(OBJECTS)
		$(CC) -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o:		main.cpp constants.h personType.h
		$(CC) $(CFLAGS) -c main.cpp

read.o:		read.cpp constants.h personType.h
		$(CC) $(CFLAGS) -c read.cpp

output.o:	output.cpp personType.h
		$(CC) $(CFLAGS) -c output.cpp

sort.o:	sort.cpp personType.h
		$(CC) $(CFLAGS) -c sort.cpp

personType.o:	personType.cpp personType.h
		$(CC) $(CFLAGS) -c personType.cpp

# This cleans out the directory before handing it in
clean:
		rm -rf $(OBJECTS) $(EXE) *~

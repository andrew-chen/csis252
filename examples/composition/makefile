OBJECTS=main.o personType.o dateType.o
CC=g++
EXE=prog
CFLAGS=-fno-diagnostics-color -Wall
LFLAGS=
$(EXE):		$(OBJECTS)
		$(CC) -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o:		main.cpp personType.h
		$(CC) $(CFLAGS) -c main.cpp

dateType.o:	dateType.cpp dateType.h
		$(CC) $(CFLAGS) -c dateType.cpp

personType.o:	personType.cpp personType.h
		$(CC) $(CFLAGS) -c personType.cpp

# This cleans out the directory before handing it in
clean:
		rm -rf $(OBJECTS) $(EXE) *~

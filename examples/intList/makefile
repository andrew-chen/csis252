CC=g++
CFLAGS=-fno-diagnostics-color
LFLAGS=
OBJECTS=	main.o intList.o
EXE=prog

$(EXE):		$(OBJECTS)
		$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)
main.o:		main.cpp intList.h 
		$(CC) $(CFLAGS) -c main.cpp
intList.o:	intList.h intList.cpp
		$(CC) $(CFLAGS) -c intList.cpp
clean:
		rm -rf $(OBJECTS) $(EXE) *~


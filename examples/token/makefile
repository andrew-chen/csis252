OBJECTS=	main.o token.o 
CLEANOBJS=	main.o
CC = g++

LFLAGS= 
CFLAGS= 
EXE=prog

$(EXE):		$(OBJECTS)
		$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)
main.o:		main.cpp
		$(CC) $(CFLAGS) -c main.cpp
clean:
		rm -rf  $(CLEANOBJS) $(EXE) *~


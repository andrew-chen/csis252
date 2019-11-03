CC = g++
OBJECTS = main.o 
LFLAGS = 
CFLAGS =  
EXE = prog


$(EXE):		$(OBJECTS) 
		$(CC) -o $(EXE) $(OBJECTS) $(LFLAGS) 

main.o:		main.cpp sort.h
		$(CC) $(CFLAGS) -c main.cpp 

clean:
		rm -rf $(EXE) $(OBJECTS) *~


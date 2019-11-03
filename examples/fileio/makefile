CC=c++
EXE=prog
OBJECTS=main.o read.o output.o biggest.o
CFLAGS=-Wall

$(EXE):	$(OBJECTS)
			$(CC) -o $(EXE) $(OBJECTS)

main.o:	main.cpp constants.h
			$(CC) -c $(CFLAGS) main.cpp

read.o:	read.cpp constants.h
			$(CC) -c $(CFLAGS) read.cpp

output.o:	output.cpp
			$(CC) -c $(CFLAGS) output.cpp

biggest.o:	biggest.cpp
			$(CC) -c $(CFLAGS) biggest.cpp

clean:
			rm -rf $(OBJECTS) $(EXE)

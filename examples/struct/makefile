CC=c++
EXE=prog
OBJECTS=main.o input.o output.o sort.o
CFLAGS=-Wall -fno-diagnostics-color

$(EXE):	$(OBJECTS)
			$(CC) -o $(EXE) $(OBJECTS)

main.o:	main.cpp constants.h personType.h prototypes.h
			$(CC) -c $(CFLAGS) main.cpp

input.o:	input.cpp constants.h personType.h
			$(CC) -c $(CFLAGS) input.cpp

output.o:	output.cpp personType.h
			$(CC) -c $(CFLAGS) output.cpp

sort.o:	sort.cpp personType.h
			$(CC) -c $(CFLAGS) sort.cpp

clean:
			rm -rf $(OBJECTS) $(EXE) result *~

prog:		main.o read.o output.o biggest.o
			g++ -o prog main.o read.o output.o biggest.o

main.o:	main.cpp constants.h
			g++ -c main.cpp

read.o:	read.cpp constants.h
			g++ -c read.cpp

output.o:	output.cpp
			g++ -c output.cpp

biggest.o:	biggest.cpp
			g++ -c biggest.cpp

clean:
			rm -rf *.o prog

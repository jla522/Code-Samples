all: stack

stack: Stack.o main.o
	g++ -Wall -o stack Stack.o main.o 

main.o: main.cpp Stack.h
	g++ -Wall -c -g main.cpp

Stack.o: Stack.h Stack.cpp
	g++ -Wall -c -g Stack.cpp

clean:
	rm -f stack *.o
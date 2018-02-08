Valgrind: ArrayHelperFunctions
	valgrind --leak-check=full ./ArrayHelperFunctions
ArrayHelperFunctions: main.o
	g++ main.o -o ArrayHelperFunctions
main.o: main.cpp
	g++ -std=c++11 -g -c main.cpp
clean:
	rm ArrayHelperFunctions main.o
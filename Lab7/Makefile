Valgrind: Array
	valgrind --leak-check=full ./Array
Array: main.o
	g++ main.o -o Array
main.o: main.cpp
	g++ -std=c++11 -g -c main.cpp
clean:
	rm Array main.o

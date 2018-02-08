Circle: main.o Circle.o
	g++ -std=c++11 -g -Wall main.o Circle.o -o Circle

main.o: main.cpp Circle.h
	g++ -std=c++11 -g -Wall -c main.cpp

MyClass.o: Circle.h Circle.cpp
	g++ -std=c++11 -g -Wall -c Circle.cpp

clean:
	rm *.o Circle

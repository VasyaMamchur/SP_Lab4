all: compile

compile: library main.cpp
	g++ -o calculator main.cpp calculator.a

library: calculator.o
	ar rvs calculator.a calculator.o

calculator.o: calculator.cpp
	g++ -c calculator.cpp

clean:
	rm -f *.o calculator.a compile

ouput: matrix.o main.o
	g++ matrix.o main.o -Iinclude -o output
matrix.o: ./src/matrix.cpp
	g++ -c  src/matrix.cpp -o matrix.o
main.o: ./example/main.cpp
	g++ -c  example/main.cpp -o main.o
clean:
	rm *.o output

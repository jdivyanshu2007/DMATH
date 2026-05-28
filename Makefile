ouput: matrix.o test_matrix.o
	g++ matrix.o test_matrix.o -Iinclude -o output
matrix.o: ./src/matrix.cpp
	g++ -c  src/matrix.cpp -o matrix.o
test_matrix.o: ./tests/test_matrix.cpp
	g++ -c  tests/test_matrix.cpp -o test_matrix.o
clean:
	rm *.o output

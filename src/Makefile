ifeq ($(OS) , Windows_NT)
	RM = del /Q
	EXE = .exe
else
	RM = rm -f
	EXE = 

endif
TESTS = determinant_test$(EXE) test_matrix$(EXE)
determinant_test: matrix.o determinant_test.o
	g++ matrix.o determinant_test.o -Iinclude -o determinant_test
test_matrix: matrix.o test_matrix.o 
	g++ matrix.o test_matrix.o -Iinclude -o test_matrix
matrix.o: ./src/matrix.cpp
	g++ -c  src/matrix.cpp -Iinclude -o matrix.o 
test_matrix.o: ./tests/test_matrix.cpp
	g++ -c  tests/test_matrix.cpp -Iinclude -o test_matrix.o
determinant_test.o:./tests/determinant_test.cpp
	g++ -c tests/determinant_test.cpp -Iinclude -o determinant_test.o
clean:
	$(RM) *.o $(TESTS)

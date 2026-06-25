ifeq ($(OS),Windows_NT)
	RM = del /Q
	EXE = .exe
else
	RM = rm -f
	EXE =
endif

CXX = g++
CXXFLAGS = -Iinclude

TESTS = determinant_test$(EXE) test_matrix$(EXE)

determinant_test:determinant_test.o
	$(CXX) $(CXXFLAGS) determinant_test.o -o determinant_test
test_matrix:test_matrix.o
	$(CXX) $(CXXFLAGS) test_matrix.o -o test_matrix
determinant_test.o: tests/determinant_test.cpp 
	$(CXX) $(CXXFLAGS) -c tests/determinant_test.cpp -o determinant_test.o

test_matrix.o: tests/test_matrix.cpp
	$(CXX) $(CXXFLAGS) -c tests/test_matrix.cpp -o test_matrix.o

clean:
	$(RM) *.o $(TESTS)



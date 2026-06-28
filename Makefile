ifeq ($(OS),Windows_NT)
	RM = del /Q
	EXE = .exe
else
	RM = rm -f
	EXE =
endif

CXX = g++
CXXFLAGS = 	-std=c++17 -Iinclude -Ithird_party/googletest/googletest/include -Ithird_party/googletest/googletest



GTEST_MAIN = third_party/googletest/googletest/src/gtest_main.cc
GTEST_ALL =  third_party/googletest/googletest/src/gtest-all.cc
TESTS = determinant_test$(EXE) test_matrix$(EXE) transpose_test$(EXE)

determinant_test:determinant_test.o
	$(CXX) $(CXXFLAGS) determinant_test.o $(GTEST_MAIN) $(GTEST_ALL) -o determinant_test
test_matrix:test_matrix.o
	$(CXX) $(CXXFLAGS) test_matrix.o -o test_matrix
transpose_test:transpose_test.o
	$(CXX) $(CXXFLAGS) transpose_test.o -o transpose_test
determinant_test.o: tests/determinant_test.cpp 
	$(CXX) $(CXXFLAGS) -c tests/determinant_test.cpp -o determinant_test.o
test_matrix.o: tests/test_matrix.cpp
	$(CXX) $(CXXFLAGS) -c tests/test_matrix.cpp -o test_matrix.o
transpose_test.o:tests/transpose_test.cpp
	$(CXX) $(CXXFLAGS) -c tests/transpose_test.cpp -o transpose_test.o
clean:
	$(RM) *.o $(TESTS)



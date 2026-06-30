ifeq ($(OS),Windows_NT)
	RM = del /Q
	EXE = .exe
else
	RM = rm -f
	EXE =
endif

CXX = g++
CXXFLAGS = 	-std=c++17 -Iinclude -Ithird_party/googletest/googletest/include -Ithird_party/googletest/googletest -Itests/MATRIX_FIXTURE



#GTEST_MAIN = third_party/googletest/googletest/src/gtest_main.cc
GTEST_ALL =  third_party/googletest/googletest/src/gtest-all.cc
OBJS  = main.o \
		determinant_test.o \
		transpose_test.o \
		arithmetic_test.o
TESTS: $(OBJS) 
	$(CXX) $(CXXFLAGS) $(OBJS) $(GTEST_ALL) -o tests
main.o: tests/main.cpp
	$(CXX) $(CXXFLAGS) -c tests/main.cpp -o main.o
determinant_test.o: tests/determinant_test.cpp 
	$(CXX) $(CXXFLAGS) -c tests/determinant_test.cpp -o determinant_test.o
arithmetic_test.o: tests/arithmetic_test.cpp
	$(CXX) $(CXXFLAGS) -c tests/arithmetic_test.cpp -o arithmetic_test.o
transpose_test.o:tests/transpose_test.cpp
	$(CXX) $(CXXFLAGS) -c tests/transpose_test.cpp -o transpose_test.o
clean:
	$(RM) *.o TESTS$(EXE)

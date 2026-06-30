#include"matrix_test.hpp"
TEST_F(MatrixTest,AdditionWorks){
	EXPECT_EQ(A+B,C);
}
TEST_F(MatrixTest,SubtractionWorks){
	EXPECT_EQ(C-A,B);
}


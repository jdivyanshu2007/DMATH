#include"matrix_test.hpp"
TEST_F(MatrixTest,TransposeWorks){
	EXPECT_EQ(a.transpose(),c);
}
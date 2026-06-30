/*
#include "../include/matrix.hpp"
int main(){
	const DMATH::Matrix<double> a({{1.09,2.90,3.99},{4.99,5.99,6.99},{7.56,8.34,9.24}});
	std::cout<<a.determinant();
	return 0;
}
*/
#include "matrix_test.hpp"
TEST_F(MatrixTest,DeterminantWorks){
	EXPECT_EQ(a.determinant(),1.687787999999987);
}





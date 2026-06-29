/*
#include "../include/matrix.hpp"
int main(){
	const DMATH::Matrix<double> a({{1.09,2.90,3.99},{4.99,5.99,6.99},{7.56,8.34,9.24}});
	std::cout<<a.determinant();
	return 0;
}
*/
#include "../include/matrix.hpp"
#include<iostream>
#include<gtest/gtest.h>
class AlgebraTest:public testing::Test{
	protected:
	const DMATH::Matrix<double> a{{{1.09,2.90,3.99},{4.99,5.99,6.99},{7.56,8.34,9.24}}};
	const DMATH::Matrix<double> b{{{1.09,2.90,3.99},{4.99,5.99,6.99},{7.56,8.34,9.24}}};
	const DMATH::Matrix<double> c{{{1.09,4.99,7.56},{2.90,5.99,8.34},{3.99,6.99,9.24}}};
};
TEST_F(AlgebraTest,DeterminantWorks){
	EXPECT_EQ(a.determinant(),1.687787999999987);
}
TEST_F(AlgebraTest,TransposeWorks){
	EXPECT_EQ(a.transpose(),c);
}




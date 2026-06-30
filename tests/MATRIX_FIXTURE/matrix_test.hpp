#ifndef MATRIX_TEST_HPP
#define MATRIX_TEST_HPP


#include<gtest/gtest.h>
#include"../../include/matrix.hpp"
#include<iostream>

class MatrixTest:public testing::Test{
    protected:
    const DMATH::Matrix<double> a{{{1.09,2.90,3.99},{4.99,5.99,6.99},{7.56,8.34,9.24}}};
	const DMATH::Matrix<double> b{{{1.09,2.90,3.99},{4.99,5.99,6.99},{7.56,8.34,9.24}}};
	const DMATH::Matrix<double> c{{{1.09,4.99,7.56},{2.90,5.99,8.34},{3.99,6.99,9.24}}};
    const DMATH::Matrix<int> A{{{1,2,3},{4,5,6},{7,8,9}}};
    const DMATH::Matrix<int> B{{{1,2,3},{4,5,6},{7,8,9}}};
    const DMATH::Matrix<int> C{{{2,4,6},{8,10,12},{14,16,18}}};
    
};

#endif

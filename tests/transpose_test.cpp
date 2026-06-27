#include "../include/matrix.hpp"
#include<iostream>
int main(){
    const DMATH::Matrix<int> a({{1,2,3},{4,5,6}});
    DMATH::Matrix<int> D = a.transpose();
    std::cout<<D;
    return 0;
}
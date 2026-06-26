#include "../include/matrix.hpp"
#include<iostream>
int main(){
	const DMATH::Matrix<int> a({{2,3},{10,9}});
	const DMATH::Matrix<int> b({{2,3,1},{10,9,0}});
	DMATH::Matrix<int> c = a * b;
	DMATH::Matrix<int> d = a * b;
	std::cout<<c;
	std::cout<<d;
	return 0;
}

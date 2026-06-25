#include "../include/matrix.hpp"
#include<iostream>
int main(){
	const DMATH::Matrix a<int>({{2,3},{10,9}});
	const DMATH::Matrix b<int>({{2,3},{10,9}});
	DMATH::Matrix c = a * b;
	DMATH::Matrix d = a * b;
	std::cout<<c;
	std::cout<<d;
	return 0;
}

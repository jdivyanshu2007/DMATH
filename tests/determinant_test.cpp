#include "../include/matrix.hpp"
int main(){
	const DMATH::Matrix a({{1,2,3},{4,5,6},{7,8,9}});
	std::cout<<a.determinant();
	return 0;
}

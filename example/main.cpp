#include "../include/matrix.hpp"
using namespace DMATH;

int main(){
	Matrix a({{2,3},{10,9}});
	Matrix b({{2,3},{10,9}});
	Matrix c = a + b;
	Matrix d = a - b;
	c.display();
	d.display();
	return 0;
}

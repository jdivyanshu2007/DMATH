#include "../include/matrix.hpp"
int main(){
	const DMATH::Matrix a({{2,3},{10,9}});
	const DMATH::Matrix b({{2,3},{10,9}});
	DMATH::Matrix c = a * b;
	DMATH::Matrix d = a * b;
	c.display();
	d.display();
	return 0;
}

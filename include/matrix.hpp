#ifndef MATRIX_HPP
#define MATRIX_HPP

#include<iostream>
#include<vector>
namespace DMATH{

class Matrix{
private:
	std::vector<std::vector<int>> matrix;
public:
	Matrix(const std::vector<std::vector<int>>& data);
	void display() const;
	Matrix operator+(const Matrix& obj) const;
	Matrix operator-(const Matrix& obj) const;
	Matrix operator*(const Matrix& obj) const;
};

}
#endif

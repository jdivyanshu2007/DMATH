#ifndef MATRIX_HPP
#define MATRIX_HPP

#include<iostream>
#include<vector>
namespace DMATH{

template <class T>
class Matrix{
private:
	std::vector<std::vector<T>> matrix;
public:
	Matrix(const std::vector<std::vector<T>>& data);
	void display() const;
	Matrix operator+(const Matrix<T>& obj) const;
	Matrix operator-(const Matrix<T>& obj) const;
	Matrix operator*(const Matrix<T>& obj) const;
	T determinant() const;
	template<class U>
	friend std::ostream& operator << (std::ostream &out ,const Matrix<T> &m);
};

}
#include "Matrix/algebra.tpp"
#include "Matrix/io.tpp"
#include "Matrix/arithmetic.tpp"
#include "Matrix/constructor.tpp"
#endif

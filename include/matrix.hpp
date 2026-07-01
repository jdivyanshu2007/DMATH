#ifndef MATRIX_HPP
#define MATRIX_HPP

#include<iostream>
#include<vector>
namespace DMATH{

template <class T>
class Matrix{
protected:
	std::vector<std::vector<T>> matrix;
public:
	Matrix(const std::vector<std::vector<T>>& data);
	Matrix(int row , int col);
	void display() const;
	Matrix operator+(const Matrix<T>& obj) const;
	Matrix operator-(const Matrix<T>& obj) const;
	Matrix operator*(const Matrix<T>& obj) const;
	bool operator == (const Matrix<T>& obj) const;
	bool isSymmetric() const;
	bool isPositiveDefinite() const;
	T determinant() const;
	Matrix transpose() const;
	template<class U>
	friend std::ostream& operator << (std::ostream &out ,const Matrix<T> &m);
};

}
#include "Matrix/algebra.tpp"
#include "Matrix/io.tpp"
#include "Matrix/arithmetic.tpp"
#include "Matrix/constructor.tpp"
#endif

#include "../include/matrix.hpp"
#include<iostream>
#include<stdexcept>
namespace DMATH{
Matrix::Matrix(const std::vector<std::vector<int>>& data){
		if(data.empty()){
					throw std::invalid_argument("Matrix is Empty.");
		}
		for(const std::vector<int>& i : data){
			if(i.size() != data[0].size()){
					throw std::invalid_argument("Matrix dimensions are not consistent.");
			}
		}
		matrix = data;
}
void Matrix::display() const{
	for(int i = 0 ; i < matrix.size() ; i++){
		for(int j = 0 ; j < matrix[i].size() ; j++){
			std::cout<<matrix[i][j]<<"\t";
		}
		std::cout<<std::endl;
	}
}
Matrix Matrix::operator+(const Matrix& obj) const{
	Matrix result(matrix);
	for(int i = 0 ; i < obj.matrix.size() ; i++){
		for(int j = 0 ; j  < obj.matrix[i].size() ; j++){
			result.matrix[i][j] = obj.matrix[i][j]+matrix[i][j];
		}
	}
	return result;
}
Matrix Matrix::operator-(const Matrix& obj) const{
	Matrix result(matrix);
	for(int i = 0 ; i < matrix.size() ; i++){
		for(int j = 0 ; j < matrix[i].size() ; j++){
			result.matrix[i][j] = matrix[i][j] - obj.matrix[i][j];
		}
	}
	return result;
}
Matrix Matrix::operator*(const Matrix& obj) const{
	int arow = matrix.size();
	int bcolumn = obj.matrix[0].size();
	int brow = obj.matrix.size();
	int sum = 0;
	Matrix result(matrix);
	for(int i = 0 ; i < arow ; i++){
		for(int j = 0 ; j < bcolumn ; j++){
			for(int k = 0 ; k < brow ; k++){
				sum += matrix[i][k] * obj.matrix[k][j];
			}
			result.matrix[i][j] = sum;
			sum = 0;
		}
	}
	return result;
}
int Matrix::determinant() const{
	int row = matrix.size();
	int det = 0;
	if(row == 0){
		return 0;
	}
	if (row == 2){
		return matrix[0][0]*matrix[1][1] - matrix[0][1]*matrix[1][0];
	}
	for(int col  = 0 ; col  < row ; col++){
		std::vector<std::vector<int>> submatrix;
		for(int submatrixRow = 1 ; submatrixRow < row ; submatrixRow++){
			std::vector<int> tempRow;
			for(int submatrixColumn = 0 ; submatrixColumn < row ; submatrixColumn++){
				if(submatrixColumn == col){
					continue;
				}
				tempRow.push_back(matrix[submatrixRow][submatrixColumn]);
			}
			submatrix.push_back(tempRow);
		}
		int sign = (col % 2 == 0) ? 1 : -1;
		Matrix sub(submatrix);
		det += sign*matrix[0][col]*sub.determinant();
	}
	return det;
}
std::ostream& operator << (std::ostream &out,const Matrix &m){
	m.display();
	return out;
}
}



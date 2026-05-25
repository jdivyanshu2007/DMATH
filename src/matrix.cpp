#include "../include/matrix.hpp"
namespace DMATH{
Matrix::Matrix(const std::vector<std::vector<int>>& data){
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
			result.matrix[i][j] = obj.matrix[i][j] - matrix[i][j];
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
}


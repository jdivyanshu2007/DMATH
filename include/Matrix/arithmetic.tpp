namespace DMATH{
template<class T>
Matrix<T> Matrix<T>::operator+(const Matrix<T>& obj) const{
	Matrix<T> result(matrix);
	for(int i = 0 ; i < obj.matrix.size() ; i++){
		for(int j = 0 ; j  < obj.matrix[i].size() ; j++){
			result.matrix[i][j] = obj.matrix[i][j]+matrix[i][j];
		}
	}
	return result;
}
template<class T>
Matrix<T> Matrix<T>::operator-(const Matrix<T>& obj) const{
	Matrix<T> result(matrix);
	for(int i = 0 ; i < matrix.size() ; i++){
		for(int j = 0 ; j < matrix[i].size() ; j++){
			result.matrix[i][j] = matrix[i][j] - obj.matrix[i][j];
		}
	}
	return result;
}
template<class T>
Matrix<T> Matrix<T>::operator*(const Matrix<T>& obj) const{
	int arow = matrix.size();
	int bcolumn = obj.matrix[0].size();
	int brow = obj.matrix.size();
	T sum = 0;
	Matrix<T> result(matrix);
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
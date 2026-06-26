namespace DMATH{
template<class T>
Matrix<T> Matrix<T>::operator+(const Matrix<T>& obj) const{
	if( matrix.size()  != obj.matrix.size() || matrix[0].size()  != obj.matrix[0].size()){
		throw std::invalid_argument("MATRIX SHOULD BE OF SAME DIMENSION FOR ADDITION");
	}
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
	if( matrix.size()  != obj.matrix.size() || matrix[0].size()  != obj.matrix[0].size()){
		throw std::invalid_argument("MATRIX SHOULD BE OF SAME DIMENSION FOR SUBTRACTION");
	}
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
	if( matrix[0].size()  != obj.matrix.size()){
		throw std::invalid_argument("DIMENSION OF MATRIX IS NOT VALID FOR MULTIPLICATION");
	}
	int arow = matrix.size();
	int bcolumn = obj.matrix[0].size();
	int brow = obj.matrix.size();
	T sum = {};
	Matrix<T> result(matrix.size() , obj.matrix[0].size());
	for(int i = 0 ; i < arow ; i++){
		for(int j = 0 ; j < bcolumn ; j++){
			for(int k = 0 ; k < brow ; k++){
				sum += matrix[i][k] * obj.matrix[k][j];
			}
			result.matrix[i][j] = sum;
			sum = {};
		}
	}
	return result;
}
}
namespace DMATH{
template<class T>
T Matrix<T>::determinant() const{
	if(matrix.size() !=  matrix[0].size()){
		throw std::invalid_argument("FOR DETERMINANT ROW AND COLUMN SHOULD BE OF EQUAL LENGTH");
	}
	int row = matrix.size();
	T det{};
	if(row == 1 && matrix[0].size() == 1){
			det = matrix[0][0];
			return det;
	}
	if (row == 2){
		return matrix[0][0]*matrix[1][1] - matrix[0][1]*matrix[1][0];
	}
	for(int col  = 0 ; col  < row ; col++){
		std::vector<std::vector<T>> submatrix;
		for(int submatrixRow = 1 ; submatrixRow < row ; submatrixRow++){
			std::vector<T> tempRow;
  			for(int submatrixColumn = 0 ; submatrixColumn < row ; submatrixColumn++){
				if(submatrixColumn == col){
					continue;
				}
				tempRow.push_back(matrix[submatrixRow][submatrixColumn]);
			}
			submatrix.push_back(tempRow);
		}
		int sign = (col % 2 == 0) ? 1 : -1;
		Matrix<T> sub(submatrix);
		det += sign*matrix[0][col]*sub.determinant();
	}
	return det;
}
template<class T>
Matrix<T> Matrix<T>::transpose() const{
		int row = matrix.size();
		int col = matrix[0].size();
		Matrix<T> result(col , row);
		for(int i = 0 ; i < row ; i++){
			for(int j = 0 ; j < col ; j++){
				result.matrix[j][i] = matrix[i][j];
			}
		}
		return result;
}
template<class T>
bool Matrix<T>::isSymmetric() const{
	return *this == this->transpose();
}
template<class T>
bool Matrix<T>::isPositiveDefinite() const{
	if(! this->isSymmetric()){
		return false;
	}
	for(int k = 1 ; k <= matrix.size() ; k++){
		Matrix<T> sub(k,k);
		for(int i = 0 ; i < k ; i++){
			for(int j = 0 ; j < k ; j++){
					sub.matrix[i][j] = matrix[i][j]; 
			}
		}
		if(sub.determinant() <= 0){
				return false;
		}
	}
	return true;
}
}
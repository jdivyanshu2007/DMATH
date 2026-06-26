namespace DMATH{
template<class T>
T Matrix<T>::determinant() const{
	int row = matrix.size();
	T det = 0;
	if(row == 0){
		return 0;
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
}
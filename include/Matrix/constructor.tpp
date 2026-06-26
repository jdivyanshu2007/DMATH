namespace DMATH{
template<class T>
Matrix<T>::Matrix(const std::vector<std::vector<T>>& data){
		if(data.empty()){
					throw std::invalid_argument("Matrix is Empty.");
		}
		for(const std::vector<T>& i : data){
			if(i.size() != data[0].size()){
					throw std::invalid_argument("Matrix dimensions are not consistent.");
			}
		}
		matrix = data;
}
template<class T>
Matrix<T>::Matrix(int row , int col) : matrix(row , std::vector<T>(col)){
}
}
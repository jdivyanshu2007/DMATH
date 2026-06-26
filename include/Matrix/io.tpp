namespace DMATH{
template<class T>
void Matrix<T>::display() const{
	for(int i = 0 ; i < matrix.size() ; i++){
		for(int j = 0 ; j < matrix[i].size() ; j++){
			std::cout<<matrix[i][j]<<"\t";
		}
		std::cout<<std::endl;
	}
}
template <class U>
std::ostream& operator << (std::ostream &out,const Matrix<U> &m){
	m.display();
	return out;
}
}
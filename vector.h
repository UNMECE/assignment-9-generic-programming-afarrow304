// mimic some behavior of vector class.
#ifndef VECTOR_H
#define VECTOR
template<typename T>
class Vector{
	private:
		T *array;
		int arraySize;

	public:
	//constructor
	T Vector(){
		T *array= new array[0];
		arraySize=0;
	}
	//destructor
	~Vector(){
		delete[]array;
		delete arraySize;
	}

	//functions
	void addElement(T element){
			
	}
	//returns the value in the array at the location param
	T at(int param){
	}
	int size(){
	}
	// return sum of the entire array
	T sum(){

	}

	T min(){

	}

	T max(){

	}

	T* slice(int begin, int end){

	}

}

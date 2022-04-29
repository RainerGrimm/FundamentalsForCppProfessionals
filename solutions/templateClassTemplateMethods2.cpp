#include <algorithm>
#include <iostream>
#include <vector>

template <typename T, int N>
class Array{
	
	std::vector<T> elem;

public:
  Array() = default;

  template <typename T2>
  Array<T, N>& operator = (const Array<T2, N>& arr){
	static_assert(std::is_convertible<T2, T>::value, "Cannot convert source type to destination type!");
    elem.clear();
	elem.insert(elem.begin(), arr.elem.begin(), arr.elem.end());
	return *this;
  }
  
  template <typename, int> friend class Array;

  int getSize() const;

};

template <typename T, int N>
int Array<T, N>::getSize() const {
  return N;
}


int main(){

  Array<double, 10> doubleArray{};
  Array<int, 10> intArray{};

  doubleArray = intArray;

}
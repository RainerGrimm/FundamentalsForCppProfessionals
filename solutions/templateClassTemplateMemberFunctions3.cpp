#include <algorithm>
#include <deque>
#include <iostream>
#include <vector>

template <typename T, int N, typename Cont = std::vector<T>>
class Array{
	
	Cont elem;

public:
  Array() = default;

  template <typename T2, typename Cont2>
  Array<T, N>& operator =(const Array<T2, N, Cont2>& arr){
	static_assert(std::is_convertible<T2, T>::value, "Cannot convert source type to destination type!");
    elem.clear();
	elem.insert(elem.begin(), arr.elem.begin(), arr.elem.end());
	return *this;
  }
  
  template <typename, int, typename> friend class Array;

  int getSize() const;

};

template <typename T, int N, typename Cont>
int Array<T, N, Cont>::getSize() const {
  return N;
}


int main(){

  Array<double, 10> doubleArray{};
  Array<int, 10, std::deque<int>> intArray{};

  doubleArray = intArray;

}
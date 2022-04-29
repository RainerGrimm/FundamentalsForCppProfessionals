#include <algorithm>
#include <iostream>

template <typename T, int N>
class Array{

public:
  Array() = default;

  template <typename T2>
  Array<T, N>& operator =(const Array<T2, N>& arr){
    if ( (void*)this == (void*)&arr ) return *this;
    std::copy(arr.elem, arr.elem + N, elem);
    return *this;
  }

  int getSize() const;

  T elem[N];
};

template <typename T, int N>
int Array<T, N>::getSize() const {
  return N;
}


int main(){

  Array<double, 10> doubleArray;
  Array<int, 10> intArray;

  doubleArray = intArray;

  Array<std::string, 10> strArray;
  Array<int, 100> bigIntArray;

  // doubleArray = strArray;            // ERROR: cannot convert ‘const std::basic_string<char>’ to ‘double’
  // doubleArray = bigIntArray;         // ERROR: no match for ‘operator=’ in ‘doubleArray = bigIntArray

}

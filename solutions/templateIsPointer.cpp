#include <iostream>

template <typename T>
struct isPointer{ 
  const static bool value = false;
};

template <typename T>
struct isPointer<T*>{ 
  const static bool value = true; 
};


int main(){
  
  std::cout << std::boolalpha;

  int var{0};
  int * ptr = &var;

  std::cout << "isPointer<int>::value: " << isPointer<int>::value << '\n';
  std::cout << "isPointer<int*>::value: " << isPointer<int*>::value << '\n';
  std::cout << "isPointer<decltype(var)>::value: " << isPointer<decltype(var)>::value << '\n';
  std::cout << "isPointer<decltype(ptr)>::value: " << isPointer<decltype(ptr)>::value << '\n';
  
  std::cout << '\n';
  
}

#include <iostream>

template <typename... Args>
int printSize(Args... args){
  return sizeof ...(args);
}

template<int ...>
struct Mult;

template<>
struct Mult<>{
  static const int value = 1;
};

template<int i, int ... tail>
struct Mult<i, tail ...>{
  static const int value = i * Mult<tail ...>::value;
};

template<int ...>
struct Add;

template<>
struct Add<>{
  static const int value= 0;
};

template<int i, int ... tail>
struct Add<i, tail ...>{
  static const int value= i + Add<tail ...>::value;
};

int main(){

  std::cout << '\n';

  std::cout << "printSize(): " << printSize() << '\n';
  std::cout << "printSize(template, 2011, true): " << printSize("template", 2011, true) << '\n';
  std::cout << "printSize(1, 2.5, 4, 5, 10): " <<  printSize(1, 2.5, 4, 5, 10) << '\n';

  std::cout << '\n';

  std::cout << "Mult<10>::value: " << Mult<10>::value << '\n';
  std::cout << "Mult<10, 10, 10>::value: " << Mult<10, 10, 10>::value << '\n';
  std::cout << "Mult<1, 2, 3, 4, 5>::value: " << Mult<1, 2, 3, 4, 5>::value << '\n';

  std::cout << '\n';
  
  std::cout << "Add<10>::value: " << Add<10>::value << '\n';
  std::cout << "Add<10, 10, 10>::value: " << Add<10, 10, 10>::value << '\n';
  std::cout << "Add<1, 2, 3, 4, 5>::value: " << Add<1, 2, 3, 4, 5>::value << '\n';

  std::cout << '\n';

}

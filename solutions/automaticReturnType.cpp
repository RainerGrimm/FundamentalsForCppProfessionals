
#include <iostream>
#include <typeinfo>

template<typename T1, typename T2>
auto add(T1 first, T2 second){
    return first + second;
}

int main(){

  std::cout << '\n';

  // -> int
  std::cout << typeid( add(1, false) ).name() << '\n';
  std::cout << typeid( add('a', 1) ).name() << '\n';
  std::cout << typeid( add(false, false) ).name() << '\n';

  // -> double
  std::cout << typeid( add(true, 3.14) ).name() << '\n';
  std::cout << typeid( add(1, 4.0) ).name() << '\n';

  std::cout << '\n';

}

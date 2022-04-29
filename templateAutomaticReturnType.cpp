#include <iostream>
#include <typeinfo>

template<typename T1, typename T2>
auto add(T1 first, T2 second) -> decltype(first + second){
    return first + second;
}

int main(){

  std::cout << '\n';

  std::cout << "add(1, 1)= " << add(1, 1) << '\n';
  std::cout << "typeid(add(1, 1)).name()= " << typeid(add(1, 1)).name() << '\n';

  std::cout << '\n';

  std::cout << "add(1, 2.1) = " << add(1, 2.1) << '\n';
  std::cout << "typeid(add(1, 2.1)).name() = " << typeid(add(1, 2.1)).name() << '\n';

  std::cout << '\n';

  std::cout << "add(1000LL, 5) = " << add(1000LL, 5) << '\n';
  std::cout << "typeid(add(1000LL, 5)).name() = " << typeid(add(1000LL, 5)).name() << '\n';

  std::cout << '\n';

}

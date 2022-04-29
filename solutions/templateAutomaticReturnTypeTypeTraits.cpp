#include <iostream>
#include <typeinfo>
#include <type_traits>

template<typename T1, typename T2>
typename std::conditional<(sizeof(T1)>sizeof(T2)), T1, T2>::type add(T1 first, T2 second){
    return first + second;
}

template<typename T1, typename T2>
typename std::common_type<T1, T2>::type add2(T1 first, T2 second){
    return first + second;
}

int main(){

  std::cout << '\n';

  std::cout << "add(1, 1) = " << add(1, 1) << '\n';
  std::cout << "typeid(add(1, 1)).name() = " << typeid(add(1, 1)).name() << '\n';
  std::cout << "typeid(add2(1, 1)).name() = " << typeid(add2(1, 1)).name() << '\n';

  std::cout << '\n';

  std::cout << "add(1, 2.1) = " << add(1, 2.1) << '\n';
  std::cout << "typeid(add(1, 2.1)).name() = " << typeid(add(1, 2.1)).name() << '\n';
  std::cout << "typeid(add2(1, 2.1)).name() = " << typeid(add2(1, 2.1)).name() << '\n';


  std::cout << '\n';

  std::cout << "add(1000LL, 5) = " << add(1000LL, 5) <<  '\n';
  std::cout << "typeid(add(1000LL, 5)).name() = " << typeid(add(1000LL, 5)).name() << '\n';
  std::cout << "typeid(add2(1000LL, 5)).name() = " << typeid(add2(1000LL,  5)).name() << '\n';

  std::cout << '\n';

}

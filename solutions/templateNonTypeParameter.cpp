#include <cstddef>
#include <iostream>
#include <typeinfo>

template <char c>
class AcceptChar{
public:
  AcceptChar(){
    std::cout << "AcceptChar: "  << typeid(c).name() << '\n';
  }
};

template < int(*func)(int) >
class AcceptFunction{
public:
  AcceptFunction(){
    std::cout << "AcceptFunction: "  << typeid(func).name() << '\n';
  }
};

template < int(&arr)[5] >
class AcceptReference{
public:
  AcceptReference(){
    std::cout << "AcceptReference: " << typeid(arr).name() << '\n';
  }
};

template < std::nullptr_t N >
class AcceptNullptr{
public:
  AcceptNullptr(){
    std::cout << "AcceptNullpt: " << typeid(N).name() << '\n';
  }
};

int myFunc(int){ return 2011; };
int arr[5];

int main(){

  std::cout << '\n';

  AcceptChar<'c'> acceptChar;
  AcceptFunction< myFunc> acceptFunction;
  AcceptReference< arr > acceptReference;
  AcceptNullptr< nullptr > acceptNullptr;

  std::cout << '\n';

}

#include <iostream>
#include <string>

class Account{};

template<typename T>
struct Type{
  std::string getName() const {
    return "unknown";
  }
};

template<typename T>
struct Type<int(*)(T)>{
  std::string getName() const {
    return "function pointer of type int(*func)(T)";
  }
};

template<typename T>
struct Type<T*>{
  std::string getName() const {
    return "pointer";
  }
};

template<typename T>
struct Type<const T>{
  std::string getName() const {
    return "const";
  }
};


template<>
struct Type<int>{
  std::string getName() const {
    return "int";
  }
};

template<>
struct Type<double>{
  std::string getName() const {
    return "double";
  }
};

template<>
struct Type<std::string>{
  std::string getName() const {
    return "std::string";
  }
};

template<>
struct Type<Account>{
  std::string getName() const {
    return "Account";
  }
};

int main(){

  std::cout << std::boolalpha << '\n';

  Type<float> tFloat;
  std::cout << "tFloat.getName(): " << tFloat.getName() << '\n';

  Type<int(*)(int)> tFunc1;
  std::cout << "tFunc1.getName(): " << tFunc1.getName() << '\n';

  Type<double(*)(int)> tFunc2;
  std::cout << "tFunc2.getName(): " << tFunc2.getName() << '\n';
  
  Type<const float> tConstFloat;
  std::cout << "tConstFloat.getName(): " << tConstFloat.getName() << '\n';
   
  Type<float*> tFloatPointer;
  std::cout << "tFloatPointer.getName(): " << tFloatPointer.getName() << '\n';
   
  Type<double> tDouble;
  std::cout << "tDouble.getName(): " << tDouble.getName() << '\n';

  Type<std::string> tString;
  std::cout << "tString.getName(): " << tString.getName() << '\n';

  Type<int> tInt;
  std::cout << "tInt.getName(): " << tInt.getName() << '\n';

  Type<Account> tAccount;
  std::cout << "tAccount.getName(): " << tAccount.getName() << '\n';

  std::cout << '\n';

}

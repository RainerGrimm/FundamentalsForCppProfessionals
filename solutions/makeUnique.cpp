#include <iostream>
#include <string>
#include <memory>
#include <utility>

template <typename T, typename ... T1>
std::unique_ptr<T> makeUnique(T1&& ... t1){
  return std::unique_ptr<T>(new T(std::forward<T1>(t1)...));
}

struct MyType {
    MyType(int, std::string, bool){}
};

int main(){

  std::cout << '\n';

  auto uni = std::unique_ptr<int>(new int);

  // Lvalue

  int five = 5;
  auto myFive = makeUnique<int>(five);
  std::cout << "*myFive: "  << *myFive << '\n';

  std::string str1{"Lvalue"};
  auto str2 = makeUnique<std::string>(str1);
  std::cout << "*str2: " << *str2 << '\n';

  // Rvalue

  auto myFive2 = makeUnique<int>(5);
  std::cout << "*myFive2: " << *myFive2 << '\n';

  auto str3 = makeUnique<std::string>(std::string("Rvalue"));
  std::cout << "*str3: " << *str3 << '\n';

  // No argument

  auto zero = makeUnique<int>();
  std::cout << "*zero: "  << *zero << '\n';

  auto str4 = makeUnique<std::string>();
  std::cout << "*str4: " << *str4 << '\n';


  // Three arguments

  std::cout << '\n';

  auto myType = makeUnique<MyType>(2011, str1, true);

}
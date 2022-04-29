#include <iostream>
#include <vector>

int func(int){ return 2011;}

int main(){

  auto i = 5;
  auto& intRef = i;             // int&
  auto* intPoint = &i;         // int*
  const auto constInt = i;     // const int
  static auto staticInt = 10;  // static int

  std::vector<int> myVec;
  auto vec = myVec;           // std::vector<int>
  auto& vecRef = vec;         // std::vector<int>&

  int myData[10];
  auto v1 = myData;           // int*
  auto& v2 = myData;          // int (&)[10]

  auto myFunc = func;          // (int)(*)(int)
  auto& myFuncRef = func;      // (int)(&)(int)

  // define a function pointer
  int (*myAdd1)(int, int) = [](int a, int b){return a + b;};

  // use type inference of the C++11 compiler
  auto myAdd2 = [](int a, int b){return a + b;};

  std::cout << "\n";

  // use the function pointer
  std::cout << "myAdd1(1, 2) = " << myAdd1(1, 2) << '\n';

  // use the auto variable
  std::cout << "myAdd2(1, 2) = " << myAdd2(1, 2) << '\n';

  std::cout << "\n";

}

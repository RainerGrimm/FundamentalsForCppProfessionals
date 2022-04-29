#include <iostream>
#include <vector>

int func(int, int){return 0;}

int main(){

  decltype(5) i= 5;                            // int

  int& intRef =i;                               // int&
  decltype(intRef) intRefD= intRef;            // int&

  int* intPoint = &i;                           // int*
  decltype(intPoint) intPointD = intPoint;      // int*

  const int constInt = i;                       // const int
  decltype(constInt) constIntD = constInt;      // const int

  static int  staticInt = 10;                   // static int
  decltype(staticInt) staticIntD = staticInt;   // static int

  const std::vector<int> myVec;
  decltype(myVec) vecD = myVec;                 // const std::vector<int>

  auto myFunc = func;                           // func*
  decltype(myFunc) myFuncD = myFunc;            // (int)(*)(int)

  // define a function pointer
  int (*myAdd1)(int, int)= [](int a, int b){return a + b;};

  // use type inference of the C++11 compiler
  decltype(myAdd1) myAdd2 = [](int a, int b){return a + b;};

  std::cout << "\n";

  // use the function pointer
  std::cout << "myAdd1(1, 2)= " << myAdd1(1, 2) << '\n';

  // use the 2 variable
  std::cout << "myAdd2(1, 2)= " << myAdd2(1, 2) << '\n';

  std::cout << "\n";

}


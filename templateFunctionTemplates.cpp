#include <iostream>
#include <string>
#include <vector>

template <typename T>
void xchg(T& x, T& y){
  T t = x;
  x = y;
  y = t;
}

int main(){

  std::cout << '\n';

  bool t = true;
  bool f = false;
  std::cout << "(t, f):  (" << t << ", " << f << ") "<< '\n';
  xchg(t, f);
  std::cout << "(t, f):  (" << t << ", " << f << ") "<< '\n';

  std::cout << '\n';

  int int2011 = 2011;
  int int2014 = 2014;
  std::cout << "(int2011, int2014):  (" << int2011 << ", " << int2014 << ") "<< '\n';
  xchg(int2011, int2014);
  std::cout << "(int2011, int2014):  (" << int2011 << ", " << int2014 << ") "<< '\n';

  std::cout << '\n';

  std::string first{"first"};
  std::string second{"second"};
  std::cout << "(first, second):  (" << first << ", " << second << ") "<< '\n';
  xchg(first, second);
  std::cout << "(first, second):  (" << first << ", " << second << ") "<< '\n';

  std::cout << '\n';
  std::vector<int> intVec1{1, 2, 3, 4, 5};
  std::vector<int> intVec2{5, 4, 3, 2, 1};

  for (auto v: intVec1) std::cout << v << " ";
  for (auto v: intVec2) std::cout << v << " ";
  std::cout << '\n';
  xchg(intVec1, intVec2);
  for (auto v: intVec1) std::cout << v << " ";
  for (auto v: intVec2) std::cout << v << " ";

  std::cout << '\n';

}

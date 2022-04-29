#include <iostream>
#include <string>

int main(){
  std::cout << '\n';

  std::string copy = "original";
  std::string ref = "original";
  auto lambda = [copy, &ref]{std::cout << copy << " " << ref << '\n';};
  lambda();
  copy = "changed";
  ref = "changed";
  lambda();

  std::cout << '\n';
}

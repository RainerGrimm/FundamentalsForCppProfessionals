#include <iostream>

int main(){

  std::cout << '\n';

  int a, b;
  std::cout << "Two natural numbers: " << '\n';
  std::cin >> a >> b;
  std::cout << "a: " << a << " b: " << b << '\n';

  std::cout << "\n\n";
  std::cout << "A sentence: " << '\n';
  char ch;
  while (std::cin >> ch) std::cout << ch;

  std::cout << '\n';

}

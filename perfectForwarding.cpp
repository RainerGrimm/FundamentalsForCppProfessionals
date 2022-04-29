#include <iostream>
#include <string>
#include <utility>

template <typename T, typename T1>
T create(T1&& t1){
  return T(std::forward<T1>(t1));
}

int main(){

  std::cout << '\n';

  // Lvalues
  int five = 5;
  int myFive = create<int>(five);
  std::cout << "myFive: "  << myFive << '\n';

  std::string str{"Lvalue"};
  std::string str2 = create<std::string>(str);
  std::cout << "str2: " << str2 << '\n';

  // Rvalues
  int myFive2 = create<int>(5);
  std::cout << "myFive2: " << myFive2 << '\n';

  std::string str3 = create<std::string>(std::string("Rvalue"));
  std::cout << "str3: " << str3 << '\n';

  std::string str4 = create<std::string>(std::move(str3));
  std::cout << "str4: " << str4 << '\n';

  std::cout << '\n';

};


#include <iostream>
#include <string>

template<typename T>
struct Type{
  std::string getName() const {
    return "unknown";
  }
};

int main(){

  std::cout << std::boolalpha << '\n';

  Type<float> tFloat;
  std::cout << "tFloat.getName(): " << tFloat.getName() << '\n';

  std::cout << '\n';

}

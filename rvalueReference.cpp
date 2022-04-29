#include <iostream>
#include <string>
#include <utility>

struct MyData{};

std::string function(const MyData &) {
    return "lvalue reference";
}

std::string function(MyData &&) {
    return "rvalue reference";
}

int main(){

  std::cout << '\n';

  MyData myData;

  std::cout << "function(myData): " << function(myData) << '\n';
  std::cout << "function(MyData()): " << function(MyData()) << '\n';
  std::cout << "function(std::move(myData)): " << function(std::move(myData)) << '\n';

  std::cout << '\n';

}

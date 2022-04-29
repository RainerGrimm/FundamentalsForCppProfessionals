#include <functional>
#include <iostream>
#include <string>

std::function<std::string()> makeLambda() {
  const std::string val = "on stack created";
  return [&val]{return val;};
}

int main(){

  auto bad = makeLambda();
  std::cout << bad();

}




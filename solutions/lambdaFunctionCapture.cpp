#include <functional>
#include <string>
#include <iostream>

std::function<std::string()> makeLambda() {
  const std::string val = "on stack created";
  return [val]{return val;};
}

int main(){

  std::cout << '\n';

  auto bad = makeLambda();
  std::cout << bad() << '\n';

  std::cout << '\n';

}




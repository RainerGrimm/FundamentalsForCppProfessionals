#include <regex>
#include <iostream>
#include <string>

int main(){

  std::cout << '\n';

  std::string germanDoubles{"+0,85 -13,2 1,0 ,45 -13,7 1,03425 10134,25"};
  std::cout << germanDoubles << '\n';

  // replace ", " with "."
  std::regex rgxDouble(R"(([-+]?[0-9]*), ?([0-9]+))");

  std::string englishDoubles{std::regex_replace(germanDoubles, rgxDouble, "$1.$2")};
  std::cout << englishDoubles << '\n';

  std::cout << '\n';

}

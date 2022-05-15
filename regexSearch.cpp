#include <regex>

#include <iostream>
#include <string>

int main(){

  std::cout << '\n';

  // regular expression holder for time
  std::regex rgx("([01]?[0-9]|2[0-3]):[0-5][0-9]");
  
  std::string time{"Now it is 23:25."};

  std::smatch result;
  if (std::regex_search(time, result, rgx)){

    std::cout << "Time: " << result[0] << '\n';

  }

  std::cout << '\n';

}

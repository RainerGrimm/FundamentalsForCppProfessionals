#include <cctype>
#include <iostream>
#include <map>
#include <string>
#include <vector>


int main(){

  std::cout << "\n";

  // iterating over a C-Array
  int myArray[5] = {1, 2, 3, 4, 5};
  for (int &x : myArray) x *= 2;
  for (int x: myArray) std::cout << x << " ";
  std::cout << '\n';

  // iterating over a std::vector
  std::vector<int> vecInt({1, 2, 3, 4, 5});
  for (int &x: vecInt) x *= 2;
  for (int x: vecInt) std::cout << x << " ";
  std::cout << '\n';

  std::cout << '\n';

  std::string str = {"Only for Testing Purpose."};
  // iterating over a std::string
  for (char& c: str) c = std::toupper(c);
  for (char c: str) std::cout << c;
  std::cout << '\n';

  // switch each character from upper to lower case and vice versa
  str = {"Only for Testing Purpose."};
  for (char& c: str) c=std::isupper(c)? std::tolower(c): std::toupper(c);
  for (char c: str) std::cout << c;
  std::cout << '\n';

  std::cout << '\n';

  //iterating over a std::map
  std::map<std::string, std::string> phonebook{{"Bjarne Stroustrup", "+1 (212) 555-1212"}, {"Gabriel Dos Reis",  "+1 (858) 555-9734"}, {"Daveed Vandevoorde", "+44 99 74855424"}};

  // the old way
  std::map<std::string, std::string>::iterator mapIt;
  for (mapIt = phonebook.begin(); mapIt != phonebook.end(); ++mapIt){
    std::cout << mapIt->first <<  ": " << mapIt->second << '\n';
  }

  // the new way
  for (auto mapIt: phonebook) std::cout << mapIt.first << ": " << mapIt.second << '\n';

  std::cout << "\n";

}

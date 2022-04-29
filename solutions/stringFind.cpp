#include <iostream>
#include <string>

int main(){

  std::cout << '\n';

  std::string str;
  
  // std::string::size_type idx= str.find("no");
  auto idx = str.find("no");

  if (idx == std::string::npos) std::cout << "no not found " << '\n';
  
  std::cout << '\n';
  
  str = {"dkeu84kf8k48kdj39kdj74945du942"};
  std::string str2{"84"};
  
  std::cout << "str: " << str <<  '\n';
  std::cout << "str2: " << str2 << '\n';
  
  std::cout << "str.find('8'): " << str.find('8') << '\n';
  std::cout << "str.rfind('8'): " << str.rfind('8') << '\n';
  std::cout << "str.find('8', 10): " << str.find('8', 10) << '\n';
  std::cout << "str.find(str2): " << str.find(str2) << '\n';
  std::cout << "str.rfind(str2): " << str.rfind(str2) << '\n';
  std::cout << "str.find(str2, 10): " << str.find(str2, 10) << '\n';
  
  std::cout << '\n';
  
  str2 = "0123456789";
  std::cout << "str: " << str << '\n';
  std::cout << "str2: " << str2 << '\n';
  
  std::cout << "str.find_first_of(678): " << str.find_first_of("678") << '\n';
  std::cout << "str.find_last_of(678): " << str.find_last_of("678") << '\n';
  std::cout << "str.find_first_of(678, 10): " << str.find_first_of("678", 10) << '\n';
  std::cout << "str.find_first_of(str2): " << str.find_first_of(str2) << '\n';
  std::cout << "str.find_last_of(str2): " << str.find_last_of(str2) << '\n';
  std::cout << "str.find_first_of(str2, 10): " << str.find_first_of(str2, 10) << '\n';

  std::cout << '\n';
  
  std::cout << "str: " << str << '\n';
  std::cout << "str2: " << str2 << '\n';
  
  std::cout << "str.find_first_not_of(678): " << str.find_first_not_of("678") << '\n';
  std::cout << "str.find_last_not_of(678): " << str.find_last_not_of("678") << '\n';
  std::cout << "str.find_first_not_of(678, 10): " << str.find_first_not_of("678", 10) << '\n';
  std::cout << "str.find_first_not_of(str2): " << str.find_first_not_of(str2) << '\n';
  std::cout << "str.find_last_not_of(str2): " << str.find_last_not_of(str2) << '\n';
  std::cout << "str.find_first_not_of(str2, 10): " << str.find_first_not_of(str2, 10) << '\n';
  
  std::cout << '\n';
  
}
#include <initializer_list>
#include <iostream>
#include <string>

class MyData{
  public:

    MyData(std::string, int){
      std::cout << "MyData(std::string, int)" << '\n';
    }

    MyData(int, int){
      std::cout << "MyData(int, int)" << '\n';
    }

    MyData(std::initializer_list<int>){
      std::cout << "MyData(std::initializer_list<int>)" << '\n';
    }
};

template<typename T>
void printInitializerList(std::initializer_list<T> inList){
  for (auto& e: inList) std::cout << e << " ";
}

int main(){

  std::cout << '\n';

  // sequence constructor has a higher priority
  MyData{1, 2};

  // invoke the classical constructor explicitly
  MyData(1, 2);

  // use the classical constructor
  MyData{"dummy", 2};

  std::cout << '\n';

  // print the initializer list of ints
  printInitializerList({1, 2, 3, 4, 5, 6, 7, 8, 9});

  std::cout << '\n';

  // print the initializer list of strings
  printInitializerList({"Only", "for", "testing", "purpose."});

  std::cout << "\n\n";

}

#include <iostream>
#include <vector>

int main(){

  std::cout << '\n';

  std::vector<int> intVec1(5, 2011);
  intVec1.reserve(10);
  std::cout << "intVec1.size(): " << intVec1.size() << '\n';
  std::cout << "intVec1.capacity(): " << intVec1.capacity() << '\n';
  intVec1.shrink_to_fit();
  std::cout << "intVec1.capacity(): " << intVec1.capacity() << '\n';
  
  std::cout << '\n';
  
}
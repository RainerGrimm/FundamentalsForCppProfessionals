#include <array>
#include <iostream>
#include <set>
#include <unordered_set>
#include <vector>

int main(){

  std::cout << '\n';

  std::array<int, 5> myArray = {-10, 5, 1, 4, 5};
  for (auto i: myArray) std::cout << i << " ";
  std::cout << "\n\n";

  std::vector<int> myVector = {-10, 5, 1, 4, 5};
  for (auto i: myVector) std::cout << i << " ";
  std::cout << "\n\n";

  std::set<int> mySet = {-10, 5, 1, 4, 5};
  for (auto i: mySet) std::cout << i << " ";
  std::cout << "\n\n";

  std::unordered_multiset<int> myUnorderedMultiSet = {-10, 5, 1, 4, 5};
  for (auto i: myUnorderedMultiSet) std::cout << i << " ";
  std::cout << "\n";

  std::cout << '\n';

}


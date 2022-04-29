#include <iostream>
#include <set>
#include <unordered_set>

int main(){

  std::cout << '\n';

  // constructor
  std::unordered_multiset<int> multiSet{1, 2, 3, 4, 5, 6, 7, 8, 9, 8, 7, 6, 5, 4, 3, 2, 1};
  std::unordered_set<int> uniqSet(multiSet.begin(), multiSet.end());

  // show the difference
  std::cout << "multiSet: ";
  for(auto m : multiSet) std::cout << m << " ";

  std::cout << '\n';

  std::cout << "uniqSet: ";
  for(auto s : uniqSet) std::cout << s << " ";

  std::cout << '\n' << '\n';

  // insert elements
  multiSet.insert(-1000);
  uniqSet.insert(-1000);

  std::set<int> mySet{-5, -4, -3, -2, -1};
  multiSet.insert(mySet.begin(), mySet.end());
  uniqSet.insert(mySet.begin(), mySet.end());

  // show the difference
  std::cout << "multiSet: ";
  for(auto m : multiSet) std::cout << m << " ";

  std::cout << '\n';

  std::cout << "uniqSet: ";
  for(auto s : uniqSet) std::cout << s << " ";

  std::cout << '\n' << '\n';

  // search for elements
  auto it = uniqSet.find(5);
  if (it != uniqSet.end()){
    std::cout << "uniqSet.find(5): " << *it << '\n';
  }

  std::cout << "multiSet.count(5): " << multiSet.count(5) << '\n';

  std::cout << '\n';

  // remove
  int numMulti = multiSet.erase(5);
  int numUniq = uniqSet.erase(5);

  std::cout << "Erased " << numMulti << " times 5 from multiSet." << '\n';
  std::cout << "Erased " << numUniq << " times 5 from uniqSet." << '\n';

  // all
  multiSet.clear();
  uniqSet.clear();

  std::cout << '\n';

  std::cout << "multiSet.size(): " << multiSet.size() << '\n';
  std::cout << "uniqSet.size(): " << uniqSet.size() << '\n';

  std::cout << '\n';

}


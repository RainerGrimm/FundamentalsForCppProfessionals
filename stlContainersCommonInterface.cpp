#include <iostream>
#include <initializer_list>
#include <set>
#include <unordered_set>
#include <vector>

template <typename Cont> 
void commonWork(Cont& cont, std::initializer_list<int> initList) {
    std::cout << std::boolalpha;
    cont = initList;
    std::cout << "All elements: ";
    for (auto c : cont) std::cout << c << " ";
    std::cout << '\n';
    std::cout << "Size: " << cont.size();
    std::cout << '\n';
    cont.clear();
    std::cout << "Size: " << cont.size() << '\n';
    cont = initList;
    Cont cont2(initList.begin(), initList.end());
    std::cout << "cont == cons2: " << (cont == cont2) << '\n';
    Cont cont3(initList.end() - 3, initList.end());
    std::cout << "Last three elements: ";
    for (auto c : cont3) std::cout << c << " ";
    std::cout << "\n\n";
}

int main(){

  std::cout << '\n';

  std::vector<int> myVector;
  commonWork(myVector, {-10, 5, 1 , 4, 5});

  std::set<int> mySet;
  commonWork(mySet, {-10, 5, 1 , 4, 5});

  std::unordered_multiset<int> myUnorderedMultiSet;
  commonWork(myUnorderedMultiSet, {-10, 5, 1 , 4, 5});

  std::cout << '\n';

}
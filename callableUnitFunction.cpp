#include <algorithm>
#include <iostream>
#include <vector>

void square(int& i){
  i = i * i;
}

int main(){

  std::cout << '\n';

  std::vector<int> myVec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  std::cout << "i->i*i:" << '\n';
  
  std::for_each(myVec.begin(), myVec.end(), square);
  for (auto v: myVec) std::cout << v << " ";

  std::cout << "\n\n";

}

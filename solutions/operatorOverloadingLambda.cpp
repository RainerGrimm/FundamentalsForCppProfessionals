#include <algorithm>
#include <iostream>
#include <vector>

int main(){

  std::cout << '\n';

  std::vector<int> intVec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  int sum{0};
  std::for_each(intVec.begin(), intVec.end(), [&sum](int x){ sum += x;});

  std::cout << "sum: "  << sum << '\n';

  std::cout << '\n';

}

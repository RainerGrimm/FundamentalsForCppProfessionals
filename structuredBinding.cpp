#include <iostream>

struct Values{
    std::string f{"test"};
    int g{5};
};
  
int main() {
  
    int arr[3] = {1, 2, 3};
      
    auto [x, y, z] = arr;
      
    std::cout << x << " " << y << " " << z << '\n';

    Values val;
    auto [a, b] = val;

}
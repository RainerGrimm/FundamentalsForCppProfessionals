#include <iostream>

int power(int m, int n){
    int r = 1;
    for(int k = 1; k<=n; ++k) r *= m;
    return r;
}

int main(){
  std::cout << power(2,10) << '\n';
}

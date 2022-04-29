#include <iostream>

template<typename T1, typename T2>
auto add(T1 fir, T2 sec){ return fir + sec; }

int main(){
  
  std::cout << add(1, 2) << '\n';
  std::cout << add (1, 2ll) << '\n';

  auto res = add(1, 2.0);
  std::cout << res << '\n';

}

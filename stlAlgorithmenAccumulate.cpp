#include <iostream>
#include <numeric>
#include <string>
#include <vector>

int main(){

  std::cout << '\n';

  std::vector<int> myVec{1, 2, 3, 4, 5, 6, 7, 8, 9};
  auto res1 = std::accumulate(myVec.begin(), myVec.end(), 0);
  std::cout << "res1: " << res1 << '\n';
  
  auto res2= std::accumulate(myVec.begin(), myVec.end(), 1, [](int fir, int sec){ return fir * sec; });
  std::cout << "res2: " << res2 << '\n';
  
  std::vector<std::string> strVec2{"Only", "for", "testing", "purpose"};
  
  std::string res3 = std::accumulate(strVec2.begin() + 1, strVec2.end(), strVec2[0], 
                                     [](auto fir, auto sec){ return fir + ":" + sec; });
  
  std::cout << "res3: " << res3 << '\n';

  std::cout << '\n';

}

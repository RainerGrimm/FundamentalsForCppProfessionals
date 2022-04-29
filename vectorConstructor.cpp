#include <utility>
#include <vector>

int main(){

  std::vector<int> first;
  std::vector<int> second(4, 2011);
  std::vector<int> third(second.begin(), second.end());
  std::vector<int> forth(second);
  std::vector<int> fifth(std::move(second));
  std::vector<int> sixth{1, 2, 3, 4, 5};

}

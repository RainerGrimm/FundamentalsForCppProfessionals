#include <algorithm>
#include <iostream>
#include <vector>

class SumMe{
public:

  SumMe(): sum(0){};

  void operator()(int x){
    sum += x;
  }

  int getSum() const {
    return sum;
  }
private:
  int sum;
};

int main(){

  std::cout << '\n';

  std::vector<int> intVec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  SumMe sumMe = std::for_each(intVec.begin(), intVec.end(), SumMe());
  std::cout << "sumMe.getSum(): " << sumMe.getSum() << '\n';

  std::cout << '\n';

}

#include <iostream>

class Account{
public:
  constexpr Account(int amou): amount(amou){}
  constexpr double getAmount() const {
    return amount;
  }
  constexpr double getAccountFees() const {
    return 0.05 * getAmount();
  }
private:
  double amount;
};

int main(){

  std::cout << '\n';

  constexpr Account accConst(15);
  constexpr double amouConst = accConst.getAmount();
  std::cout << "amouConst: " << amouConst << '\n';
  std::cout << "accConst.getAccountFees(): " << accConst.getAccountFees() << '\n';

  std::cout << '\n';

  Account accDyn(15);
  double amouDyn = accDyn.getAmount();
  std::cout << "amouDyn: " << amouDyn << '\n';
  std::cout << "accDyn.getAccountFees(): " << accDyn.getAccountFees() << '\n';

  std::cout << '\n';

}

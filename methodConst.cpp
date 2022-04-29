#include <iostream>

class Account{
public:
  double getBalance() const {
    return balance;
  }
  void addAmount(double amount){
    balance += amount;
  }
private:
  double balance{0.0};
};

int main(){

  std::cout << '\n';

  Account readWriteAccount;
  readWriteAccount.addAmount(50.0);
  std::cout << "readWriteAccount.getBalance(): " << readWriteAccount.getBalance() << '\n';

  const Account readAccount;
  std::cout << "readAccount.getBalance(): " << readAccount.getBalance() << '\n';

  std::cout << '\n';

}

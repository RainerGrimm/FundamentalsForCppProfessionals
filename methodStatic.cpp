#include <iostream>

class Account{
public:
    Account(){
      ++deposits;
    }
    static int getDeposits(){
      return Account::deposits;
    }

private:
    static int deposits;
};

int Account::deposits= 0;

int main(){

  std::cout << '\n';

  std::cout << "Account::getDeposits(): "  << Account::getDeposits() << '\n';

  Account account1;
  Account account2;

  std::cout << "account1.getDeposits(): "  << account1.getDeposits() << '\n';
  std::cout << "account2.getDeposits(): "  << account2.getDeposits() << '\n';

  std::cout << '\n';

}



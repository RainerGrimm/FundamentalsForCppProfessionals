#include <iostream>

class Account{
public:
  Account(double amt): balance(amt){}

  virtual void withdraw(double amt){
    balance -= amt;
  }

  double getBalance() const {
    return balance;
  }

protected:
  double balance;
};


class BankAccount: public Account{
public:

  BankAccount(double amt): Account(amt){}

  virtual void withdraw(double amt){
    if ((balance - amt) > 0.0) balance -= amt;
  }

};

int main(){

  std::cout << '\n';

  BankAccount bankAccount(100.0);
  Account * aPtr = &bankAccount;
  aPtr->withdraw(50);
  std::cout << "aPtr->getBalance(): " << aPtr->getBalance() << '\n';

  std::cout << '\n';

  BankAccount * bankAccount2 = new BankAccount(100.0);
  Account * aPtr2 = bankAccount2;
  aPtr2->withdraw(50);
  std::cout << "aPtr2->getBalance(): " << aPtr2->getBalance() << '\n';

  std::cout << '\n';

  BankAccount bankAccount3(100.0);
  Account& aRef = bankAccount3;
  aRef.withdraw(150);
  std::cout << "aRef.getBalance(): " << aRef.getBalance() << '\n';

  std::cout << '\n';

}

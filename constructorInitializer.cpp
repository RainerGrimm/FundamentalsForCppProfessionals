#include <iostream>
#include <string>

class Account{
public:
  Account(double b, std::string& rev):balance(b), reviser(rev), minBalance(25.0){}
  /*
  Account(double b, std::string& rev){
    balance = b;
    minBalance = 25.0;
    reviser = rev;
  }
  */

private:
    double balance;
    const double minBalance;
    std::string& reviser;
};

int main(){

  std::string reviser{"grimm"};
  Account account(100.0, reviser);


}

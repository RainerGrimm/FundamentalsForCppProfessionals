#include <iostream>

class Account{
public:
  Account(){
    std::cout << "Account: this: "  << this << '\n';
  };
  Account(double){
    std::cout << "Account(double): this: "  << this << '\n';

  }
};

int main(){

   std::cout << '\n';

   Account account1;
   Account* account2 = new Account;

   std::cout << '\n';

   Account account3(100.0);
   Account* account4 = new Account(100.0);

   std::cout << '\n';

   Account* accountArray = new Account[10];

   std::cout << '\n';

}

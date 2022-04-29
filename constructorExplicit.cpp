#include <iostream>
#include <string>

class Account{
public:
  explicit Account(double b): balance(b){}
  Account(double b, std::string c):balance(b), cur(c){}

private:
    double balance;
    std::string cur;
};

void strange(Account a){
  std::cout << "It works!" << '\n';
}

int main(){

   // Account account = 100.0; // ERROR
   Account account1(100.0);
   Account account2 = {100.0, "EUR"};
   // strange(100.0);        // ERROR
   // strange(Account(100.0)); // OK


}

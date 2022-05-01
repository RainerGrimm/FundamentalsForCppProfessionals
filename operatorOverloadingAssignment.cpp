#include <algorithm>
#include <chrono>
#include <iomanip>
#include <iostream>

class Account{
public:

  Account()= default;
  Account(int numb): numberOf(numb), deposits(new double[numb]){}

  Account(const Account& other): numberOf(other.numberOf), deposits(new double[other.numberOf]){
    std::copy(other.deposits, other.deposits + other.numberOf, deposits);
  }

  Account& operator = (const Account& other){
    numberOf = other.numberOf;
    delete deposits;
    deposits = new double[other.numberOf];
    std::copy(other.deposits, other.deposits + other.numberOf, deposits);
    return *this;
  }

  Account(Account&& other):numberOf(other.numberOf), deposits(other.deposits){
    other.deposits = nullptr;
    other.numberOf = 0;
  }

  Account& operator =(Account&& other){
    numberOf = other.numberOf;
    deposits = other.deposits;
    other.deposits = nullptr;
    other.numberOf = 0;
    return *this;
  }

private:
  int numberOf;
  double * deposits;
};

int main(){

   std::cout << '\n';
   
   std::cout << std::fixed << std::setprecision(10);

   Account account(200000000);
   Account account2(100000000);

   auto start = std::chrono::system_clock::now();
   account = account2;
   std::chrono::duration<double> dur = std::chrono::system_clock::now() - start;
   std::cout << "Account& operator = (const Account& other): " << dur.count() << " seconds" << '\n';

   start = std::chrono::system_clock::now();
   account = std::move(account2);
   dur = std::chrono::system_clock::now() - start;
   std::cout << "Account& operator=(Account&& other):" << dur.count() << " seconds" << '\n';

   std::cout << '\n';

}

#include <iostream>

class Account{
public:
  Account(double amount = 0.0): balance(amount){}

  void deposit(double amount){
    balance += amount;
  }

  void withdraw(double amount){
    balance -= amount;
  }
  double getBalance() const{
    return balance;
  }

private:
  double balance;

};


template <typename T, int N>
class Array{

public:
  Array()= default;
  int getSize() const;

private:
  T elem[N];
};

template <typename T, int N>
int Array<T, N>::getSize() const {
  return N;
}


int main(){

  std::cout << '\n';

  Array<double, 10> doubleArray;
  std::cout << "doubleArray.getSize(): " << doubleArray.getSize() << '\n';

  Array<Account, 1000> accountArray;
  std::cout << "accountArray.getSize(): " << accountArray.getSize() << '\n';

  std::cout << '\n';

}

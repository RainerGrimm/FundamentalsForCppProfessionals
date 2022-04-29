#include <iostream>

class Account{
public:
  Account(double b): balance(b){}
  double getBalance() const {
    return balance;
  }
private:
  double balance;
};

template <typename T, int Line, int Column>
class Matrix{
 public:
    std::string getName() const { return "Primary Template"; }
};

template <typename T>
class Matrix<T, 3, 3>{
 public:
    std::string getName() const { return "Partial Specialization"; }
};

template <>
class Matrix<int, 3, 3>{
 public:
    std::string getName() const { return "Full Specialization"; }
};


template<typename T>
bool isSmaller(T fir, T sec){
  return fir < sec;
}

template <>
bool isSmaller<Account>(Account fir, Account sec){
  return fir.getBalance() < sec.getBalance();
}

int main(){

  std::cout << std::boolalpha << '\n';

  Matrix<double, 3, 4> primary;
  std::cout << "primary.getName(): " << primary.getName() << '\n';
  
  Matrix<double, 3, 3> partial;
  std::cout << "partial.getName(): " << partial.getName() << '\n';
  
  Matrix<int, 3, 3> full;
  std::cout << "full.getName(): " << full.getName() << '\n';

  std::cout << "\n\n";

  std::cout << "isSmaller(3, 4): "  << isSmaller(3, 4) << '\n';
  std::cout << "isSmaller(Account(100.0), Account(200.0)): "<< isSmaller(Account(100.0), Account(200.0) ) << '\n';

  std::cout << '\n';

}

#include <iostream>

class Base{

public:

  Base& operator = (const Base& other){
    if (this == &other){
      std::cout << "self-assignment" << '\n';
      return *this;
    }
    else{
      a = other.a;
      b = other.b;
      return *this;
    }
  }

  void newA(){
    int a{2011};
    std::cout << "this->a: " << this->a << '\n';
    std::cout << "a: " << a << '\n';
    std::cout << "b: " << b << '\n';
    std::cout << "this->b: " << this->b << '\n';
  }

private:
  int a{1998};
  int b{2014};

};

int main(){

  std::cout << '\n';

  Base base;
  base.newA();

  std::cout << '\n';

  Base& base2 = base;
  base = base2;

  std::cout << '\n';

}

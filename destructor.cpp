#include <iostream>

class HelloGoodBye{
public:
  HelloGoodBye(int i):numb(i){
    std::cout << "Hello from " << numb << ": "<< '\n';
  }
  ~HelloGoodBye();
private:
  int numb;
};

HelloGoodBye::~HelloGoodBye(){
  std::cout << "Good Bye from : " <<  numb << '\n';
}

void func(){
  HelloGoodBye helloGoodBye(5);
}

HelloGoodBye helloGoodBye(1);

int main(){

  std::cout << '\n';

  HelloGoodBye helloGoodBye(2);

  std::cout << '\n';

  HelloGoodBye* helloGoodByePtr = new HelloGoodBye(3);

  std::cout << '\n';

  {
    HelloGoodBye helloGoodBye(4);
  }

  std::cout << '\n';

  delete helloGoodByePtr;

  func();

  std::cout << "--------- End of main ----------"  << '\n';

}

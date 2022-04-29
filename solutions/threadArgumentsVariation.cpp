#include <chrono>
#include <iostream>
#include <thread>

class Sleeper{

  public:
    Sleeper(int& i_, int m):i{i_}, milli(m){};
    void operator() (int k){
      for (unsigned int j = 0; j <= 5; ++j){
        std::this_thread::sleep_for(std::chrono::milliseconds(milli));
        i += k;
      }
    }
  private:
    int& i;
    int milli;
};


int main(){

  std::cout << '\n';

  for (unsigned int i = 0; i <= 20; ++i){

    int valSleeper = 1000;
    std::thread t(Sleeper(valSleeper, (i*50)), 5);
    t.detach();
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    std::cout << "valSleeper = " << valSleeper << '\n';

  }

  std::cout << '\n';

}

#include <cmath>
#include <iostream>

class MyHour{
public:
  MyHour(int hour){
    if (0 <= hour && hour <= 23) myHour = hour;
    else myHour = 0;
    std::cout << "myHour = " << myHour << '\n';
  }

  MyHour(): MyHour(0){}

  MyHour(double hour): MyHour(static_cast<int>(ceil(hour))) {}

private:
  int myHour;
};

int main(){

  std::cout << '\n';

  MyHour(10);
  MyHour(100);
  MyHour();
  MyHour(22.45);

  std::cout << '\n';

}


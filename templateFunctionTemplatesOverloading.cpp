#include <iostream>

void xchg(int& x, int& y){   
  int t = x;
  x = y;
  y = t;
}


template <typename T>        
void xchg(T& x, T& y){
  T t = x;
  x = y;
  y = t;
}

template <typename T>        
void xchg(T& x, T& y, T& z){
  xchg(x, y);
  xchg(x, z);
}


int main(){

  std::cout << '\n';

  int intA = 5;
  int intB = 10;
  int intC = 20;

  double doubleA = 5.5;
  double doubleB = 10.0;

  xchg(intA, intB);             
  xchg(doubleA, doubleB);       

  xchg<>(intA, intB);           
  xchg<int>(intA, intB);        
  // xchg<double>(intA, intB);    

  xchg(intA, intB, intC);        

  std::cout << '\n';

}

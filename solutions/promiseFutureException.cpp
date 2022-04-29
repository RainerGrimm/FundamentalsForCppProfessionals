#include <exception>
#include <future>
#include <iostream>
#include <thread>
#include <utility>

struct Div{
  void operator()(std::promise<int>&& intPromise, int a, int b){
    try{
      if (b == 0) throw std::runtime_error("illegal division by zero");
      intPromise.set_value(a/b);
    }
    catch ( ...){
      intPromise.set_exception(std::current_exception());
    }
  }
};

int main(){

  std::cout << '\n';

  // define the promises
  std::promise<int> divPromise;

  // get the futures
  std::future<int> divResult = divPromise.get_future();

  // calculate the result in a separat thread
  Div div;
  std::thread divThread(div, std::move(divPromise), 20, 0);

  // get the result
  try{
    std::cout << "20 / 0 = " << divResult.get() << '\n';
  }
  catch (std::runtime_error& e){
    std::cout << e.what() << '\n';
  }

  divThread.join();

  std::cout << '\n';

}


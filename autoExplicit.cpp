#include <chrono>
#include <future>
#include <map>
#include <string>
#include <thread>
#include <tuple>

int main(){

  auto myInts={1, 2, 3};
  auto myIntBegin= myInts.begin();

  std::map<int, std::string> myMap={{1, std::string("one")}, {2, std::string("two")}};
  auto myMapBegin= myMap.begin();

  auto func= [](const std::string& a){ return a;};

  auto futureLambda= std::async([]{ return std::string("Hello "); });

  auto begin = std::chrono::system_clock::now();

  auto pa= std::make_pair(1, std::string("second"));

  auto tup= std::make_tuple(std::string("second"), 4, 1.1, true, 'a');

}


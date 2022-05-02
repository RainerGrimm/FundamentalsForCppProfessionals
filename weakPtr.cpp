#include <iostream>
#include <memory>

int main(){

  std::cout << std::boolalpha << '\n';

  auto sharedPtr=std::make_shared<int>(2011);
  std::weak_ptr<int> weakPtr(sharedPtr);
  
  std::cout << "weakPtr.use_count(): " << weakPtr.use_count() << '\n';
  std::cout << "sharedPtr.use_count(): " << sharedPtr.use_count() << '\n';
  std::cout << "weakPtr.expired(): " << weakPtr.expired() << '\n';

  if(std::shared_ptr<int> sharedPtr1 = weakPtr.lock()) {
    std::cout << "*sharedPtr1: " << *sharedPtr1 << '\n';
  }
  else{
    std::cout << "Don't get the resource!" << '\n';
  }

  weakPtr.reset();
  if(std::shared_ptr<int> sharedPtr1 = weakPtr.lock()) {
    std::cout << "*sharedPtr: " << *sharedPtr << '\n';
  }
  else{
    std::cout << "Don't get the resource!" << '\n';
  }

  std::cout << '\n';

}

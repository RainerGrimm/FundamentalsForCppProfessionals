#include <iostream>
#include <new>
#include <string>

class ResourceGuard{
  private:
    const std::string resource;
  public:
    ResourceGuard(const std::string& res):resource(res){
      std::cout << "Acquire the " << resource << "." <<  '\n';
    }
    ~ResourceGuard(){
      std::cout << "Release the "<< resource << "." << '\n';
    }
};

int main(){

  std::cout << '\n';

  ResourceGuard resGuard1{"memoryBlock1"};

  std::cout << "\nBefore local scope" << '\n';
  {
    ResourceGuard resGuard2{"memoryBlock2"};
  }
  std::cout << "After local scope" << '\n';
  
  std::cout << '\n';

  
  std::cout << "\nBefore try-catch block" << '\n';
  try{
      ResourceGuard resGuard3{"memoryBlock3"};
      throw std::bad_alloc();
  }   
  catch (std::bad_alloc& e){
      std::cout << e.what();
  }
  std::cout << "\nAfter try-catch block" << '\n';
  
  std::cout << '\n';

}

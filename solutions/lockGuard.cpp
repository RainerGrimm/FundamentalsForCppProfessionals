#include <iostream>
#include <mutex>
#include <new>
#include <string>

class LockGuard{
  private:
    std::mutex& mut;
  public:
    LockGuard(std::mutex& m): mut(m){
      std::cout << "Lock the mutex" <<  '\n';
      mut.lock();
    }
    ~LockGuard(){
      std::cout << "Unlock the mutex" << '\n';
      mut.unlock();
    }
};

int main(){

  std::cout << '\n';

  std::mutex mut;

  LockGuard resGuard1{mut};

  std::cout << "\nBefore local scope" << '\n';
  {
    LockGuard resGuard2{mut};
  }
  std::cout << "After local scope" << '\n';
  
  std::cout << '\n';

  
  std::cout << "\nBefore try-catch block" << '\n';
  try{
      LockGuard resGuard3{mut};
      throw std::bad_alloc();
  }   
  catch (std::bad_alloc& e){
      std::cout << e.what();
  }
  std::cout << "\nAfter try-catch block" << '\n';
  
  std::cout << '\n';

}

#include <mutex>
#include <thread>

int main(){
  std::mutex m;

  m.lock();
  m.lock();

}

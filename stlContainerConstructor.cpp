#include <iostream>
#include <map>
#include <unordered_map>
#include <string>
#include <utility>
#include <vector>

int main(){
 
  std::cout << '\n';
  
  std::vector<int> intVec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  std::map<std::string, int> str2Int ={{"grimm", 12345}, {"meyer", 34929}, {"huber", 840284}};
  std::unordered_map<std::string, int> str2Int2{str2Int.begin(), str2Int.end()};
  
  for (auto v: intVec) std::cout << v << " ";
  std::cout << '\n';
  for (auto m: str2Int) std::cout << m.first << ", " << m.second << " ";
  std::cout << '\n';
  for (auto um: str2Int2) std::cout << um.first << ", " << um.second << " ";
  
  std::cout << "\n\n";
  
  std::vector<int> intVec2 = intVec;
  std::cout << "intVec.size(): " << intVec.size() << '\n';
  std::cout << "intVec2.size(): " << intVec2.size() << '\n';
  
  std::cout << '\n';
  
  std::vector<int> intVec3= std::move(intVec);
  std::cout << "intVec.size(): " << intVec.size() << '\n';
  std::cout << "intVec3.size(): " << intVec3.size() << '\n';
  
  std::cout <<  '\n'; 
  
}


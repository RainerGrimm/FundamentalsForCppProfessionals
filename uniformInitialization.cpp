#include <unordered_map>
#include <string>
#include <vector>

struct MyStruct{
  int x;
  double y;
};

class MyClass{
public:
  int x;
  double y;
};

struct Telephone{
  std::string name;
  int number;
};

Telephone getTelephone(){
  // Telephone("Rainer Grimm", 12345) created
  return {"Rainer Grimm", 12345};
}

struct MyArray {
    public:
        MyArray(): data {1, 2, 3, 4, 5} {}
    private:
        const int data[5];
};

void getVector(const std::vector<int>& v){
  // some code
}

int main(){

  // built-in datatypes and strings
  bool b{true};
  bool b2 = true;
  int i{2011};
  int i2 = {2011};
  std::string s{"string"};
  std::string s2 = {"string"};

  // struct and class
  MyStruct basic{5, 3.2};
  MyStruct basic2 = {5, 3.2};
  MyClass alsoClass{5, 3.2};
  MyClass alsoClass2 = {5, 3.2};

  // C-Array
  // dynamic array initialization
  const float * pData = new const float[4] { 1.5, 4, 3.5, 4.5 };

  // STL-Container
  // a vector of 1 element
  std::vector<int> oneElement{1};
  std::vector<int> oneElement2= {1};

  std::unordered_map<std::string, int> um { {"Dijkstra", 1972}, {"Scott", 1976}, {"Wilkes", 1967}, {"Hamming", 1968} };

  // special cases
  // brace initialization for a std::vector
  getVector({ oneElement[0], 5, 10, 20, 30 });

  // method
  std::vector<int> v {};
  v.insert(v.end(), { 99, 88, -1, 15 });

  // getTelephone returns a initializer list
  Telephone tel(getTelephone());

}

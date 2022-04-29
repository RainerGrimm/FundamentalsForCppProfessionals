#include <iostream>

class Sort{
public:
  virtual void processData(){
    readData();
    sortData();
    writeData();
  }
private:
  virtual void readData(){}
  virtual void sortData() = 0;
  virtual void writeData(){}
};


class QuickSort: public Sort{
private:
  void readData(){
    std::cout << "readData" << '\n';
  }
  void sortData(){
    std::cout <<  "sortData" << '\n';
  }
  void writeData(){
    std::cout << "writeData" << '\n';
  }
};


int main(){

  std::cout << '\n';

  Sort* sort = new QuickSort;
  sort->processData();

  std::cout << '\n';

}


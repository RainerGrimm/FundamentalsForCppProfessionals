#include <iostream>

class Sort{
public:
  void processData() {
    readData();
    sortData();
    writeData();
  }
private:
  virtual void readData(){}
  virtual void sortData()= 0;
  virtual void writeData(){}
};


class QuickSort: public Sort{
private:
  void readData() override {
    std::cout << "readData" << '\n';
  }
  void sortData() override {
    std::cout <<  "sortData" << '\n';
  }
  void writeData() override {
    std::cout << "writeData" << '\n';
  }
};

class BubbleSort: public Sort{
private:

  void sortData() override {
    std::cout <<  "sortData" << '\n';
  }

};


int main(){

  std::cout << '\n';

  Sort* sort = new QuickSort;
  sort->processData();

  std::cout << '\n';

}


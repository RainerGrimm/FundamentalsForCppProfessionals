#include <iostream>
#include <string>

class Abstract{
public:
    virtual ~Abstract() = 0;
};

Abstract::~Abstract() = default;

class Concret: public Abstract{};

class HumanBeing{
public:
  HumanBeing(const std::string& n): name(n){
    std::cout << name << " created." <<  '\n';
  }

  virtual std::string getSex() const= 0;

private:
  std::string name;

};

class Man: public HumanBeing{
public:

  Man(const std::string& n): HumanBeing(n){}

  std::string getSex() const override {
    return "male";
  }
};


class Woman: public HumanBeing{
public:

  Woman(const std::string& n): HumanBeing(n){}

  std::string getSex() const override {
    return "female";
  }
};

int main(){

  std::cout << '\n';

  // Abstract abstract;    // ERROR
  Concret concret;

  HumanBeing humanBeing("grimm");   // ERROR

  Man schmidt("Schmidt");
  Woman huber("Huber");

  std::cout << "schmidt.getSex(): " <<  schmidt.getSex() << '\n';
  std::cout << "huber.getSex(): " << huber.getSex() << '\n';

  std::cout << '\n';

}

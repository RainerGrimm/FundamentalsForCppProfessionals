class Base {
  virtual void h(int) final;
};

class Derived: public Base {

  virtual void h(int);

  virtual void h(double);

};

struct FinalBase final {};
struct DerivedFromFinal: FinalBase {};

int main(){

  Base base;
  Derived derived;

  DerivedFromFinal derivedFromFinal;

};

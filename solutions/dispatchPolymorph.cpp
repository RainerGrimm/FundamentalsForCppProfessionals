#include <iostream>

struct Base{
    virtual void interface(){
        std::cout << "Implementation Base" << '\n';
    }
};

struct Derived1: Base{
    virtual void interface(){
        std::cout << "Implementation Derived1" << '\n';
    }
};

struct Derived2: Base{
    virtual void interface(){
        std::cout << "Implementation Derived2" << '\n';
    }
};

struct Derived3: Base{};

void execute(Base& base){
    base.interface();
}

int main(){

    std::cout << '\n';

    Derived1 d1;
    Base& b1 = d1;
    execute(b1);

    Derived2 d2;
    Base& b2 = d2;
    execute(b2);

    Derived3 d3;
    Base& b3 = d3;
    execute(b3);
    
    std::cout << '\n';

}

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

template <typename T>
void execute(T& t){
    t.interface();
}

int main(){
    
    std::cout << '\n';
    
    Derived1 d1;
    execute(d1);
    
    Derived2 d2;
    execute(d2);
    
    Derived3 d3;
    execute(d3);
    
    std::cout << '\n';
    
}

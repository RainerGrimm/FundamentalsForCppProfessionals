#include <iostream>
#include <utility>
#include <vector>

struct Test {
    Test() {
       std::cout << "constructor ";
    }
    ~Test() {
        std::cout << "destructor ";
    }
    int i;
};


int main() {

    std::cout << '\n';

    std::vector<Test> myVec2(2);
    std::vector<Test> myVec1(1);

    std::cout << "\n\n";

    std::cout << "Copy assignment \n";
    myVec1 = myVec2;
    
    std::cout << "\n\n";

    std::cout << "Move assignment \n";
    myVec1 = std::move(myVec2);

}
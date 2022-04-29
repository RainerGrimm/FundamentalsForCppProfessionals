#include <iostream>
#include <string>

int main() {

    std::string str = "Only for testing purpose.";
    
    if (std::equal(str.begin(), str.begin() + str.size()/2, str.rbegin())) { 
        std::cout << "Yes " << '\n';
    }
    else std::cout << "No " << '\n';

}

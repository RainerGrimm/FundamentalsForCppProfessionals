#include <algorithm>
#include <iostream>
#include <string>

int main () {
    
    std::string str = "Only for testing purpose.";
    
    std::sort(str.begin(), str.end());
    
    std::cout << str << '\n';
    
}

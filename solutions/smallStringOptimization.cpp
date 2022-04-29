#include <numeric>
#include <cassert>
#include <iostream>
#include <string>

void* operator new(std::size_t count){
    std::cout << "   " << count << " bytes" << std::endl;
    return malloc(count);
}


int main() {

    std::cout << '\n';

    for (std::size_t  i = 1; i <= 50; ++i) {
        std::string s(i,'0');
    }

    std::cout << '\n';

}
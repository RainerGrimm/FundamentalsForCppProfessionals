#ifndef MY_NEW2
#define MY_NEW2

#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <new>
#include <string>
#include <array>

int const MY_SIZE = 10;

std::array<void * , MY_SIZE> myAlloc{nullptr, };
    
void * operator new(std::size_t sz){
    static int counter{};
    void * ptr = std::malloc(sz);
    myAlloc.at(counter++) = ptr;
    return ptr;
}

void operator delete(void  ptr) noexcept{
    auto ind = std::distance(myAlloc.begin(), std::find(myAlloc.begin(), myAlloc.end(), ptr));
    myAlloc[ind]= nullptr;
    std::free(ptr);
}

void getInfo(){
    
    std::cout << '\n';
     
    std::cout << "Not deallocated: " << '\n';
    for (auto i: myAlloc){
        if (i != nullptr) std::cout << " " << i << '\n';
    }
    
    std::cout << '\n';
    
}

#endif // MY_NEW2

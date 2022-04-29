#ifndef MY_NEW5
#define MY_NEW5

#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <new>
#include <string>
#include <vector>

std::vector<void*> myAlloc;

void * newImpl(std::size_t sz, char const * file, int line){
    static int counter{};
    void * ptr = std::malloc(sz);
    std::cerr << file << ": " << line << " " <<  ptr << '\n';
    myAlloc.push_back(ptr);
    return ptr;
}

void * operator new(std::size_t sz, char const * file, int line){  
    return newImpl(sz, file, line);
}

void * operator new [](std::size_t sz, char const * file, int line){  
    return newImpl(sz, file, line);
}

void operator delete(void * ptr) noexcept{
    auto ind = std::distance(myAlloc.begin(), std::find(myAlloc.begin(), myAlloc.end(), ptr));
    myAlloc[ind] = nullptr;
    std::free(ptr);
}

#define new new(__FILE__, __LINE__)

void dummyFunction(){
    int * dummy = new int;
}

void getInfo(){
    
    std::cout << '\n';
     
    std::cout << "Allocation: " << '\n';
    for (auto i: myAlloc){
        if (i != nullptr) std::cout << " " << i << '\n';
    }
    
    std::cout << '\n';
    
}

#endif // MY_NEW5

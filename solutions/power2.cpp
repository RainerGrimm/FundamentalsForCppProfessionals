#include <iostream>

template<int m, int n>
struct Power{
    static int const value = m * Power<m,n-1>::value;
};

template<int m>
struct Power<m, 0>{
    static int const value = 1;
};

int main(){
    std::cout << Power<2,10>::value << '\n';
}


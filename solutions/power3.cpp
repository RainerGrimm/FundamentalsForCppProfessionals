#include <iostream>

template<int n>
int power(int m){
    return m * power<n - 1>(m);
}

template<>
int power<1>(int m){
    return m;
}

template<>
int power<0>(int m){
    return 1;
}

int main(){
    std::cout << power<10>(2) << '\n';
}

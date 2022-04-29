#include <iostream>
#include <type_traits>

template <typename T>
struct RemoveConst{
    typedef T type;
};

template <typename T>
struct RemoveConst<const T>{
    typedef T type;
};

template <typename T, typename T2>
struct IsSame {
    static constexpr bool value = false;
};

template <typename T>
struct IsSame<T, T> {
    static constexpr bool value = true;
};


int main(){

    std::cout << std::boolalpha << '\n';

    std::cout << "IsSame<int, RemoveConst<int>::type>::value: " << IsSame<int, RemoveConst<int>::type>::value << '\n';
    std::cout << "IsSame<int, RemoveConst<const int>::type>::value: " << IsSame<int, RemoveConst<const int>::type>::value << '\n';
    
    std::cout << '\n';
 
}
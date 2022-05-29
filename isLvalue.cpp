#include <iostream>
#include <utility>
#include <vector>

template <typename T>
constexpr bool isLvalue(T&) {
    return true;
}

template <typename T>
constexpr bool isLvalue(T&&) {
    return false;
}

void function() {}

struct MyClass{
    int a{};
};

int returnByCopy() { 
    return 2011; 
}

std::vector<int> myVec{1, 2, 3};

int& returnByLvalueReference() {
    return myVec[0];
}

int&& returnByRvalueReference() {
    return std::move(myVec[0]);
}

int main() {

    std::cout << std::boolalpha;

    std::cout << "---- Lvalues: \n\n";

    int lvalue = 1998;
    std::cout << "isLvalue(lvalue): " << isLvalue(lvalue) << '\n';
    std::cout << "isLvalue(funcion): " << isLvalue(function) << '\n';
    auto lambdaExpression = []{std::cout << "2011\n";};
    std::cout << "isLvalue(lambdaExpression): " << isLvalue(lambdaExpression) << '\n';
    MyClass myClass;
    std::cout << "isLvalue(myClass): "  << isLvalue(myClass) << '\n';
    std::cout << "isLvalue(myClass.a): "  << isLvalue(myClass.a) << '\n';
    std::cout << "isLvalue(string_literal): " << isLvalue("string_literal") << '\n';
    int* intPtr = &lvalue;
    std::cout << "isLvalue(intPtr): "  << isLvalue(intPtr) << '\n';
    std::cout << "isLvalue(returnByLvalueReference()): " << isLvalue(returnByLvalueReference()) << '\n';


    std::cout << '\n';
    std::cout << "---- Rvalues: \n\n";

    std::cout << "isLvalue(1998): " << isLvalue(1998) << '\n';
    std::cout << "isLvalue(int{}): " << isLvalue(int{}) << '\n';
    std::cout << "isLvalue(lvalue + 1998): "  << isLvalue(lvalue + 1998) << '\n';
    std::cout << "isLvalue([]{ return 2011; }): " << isLvalue([]{ return 2011; }) << '\n';
    std::cout << "isLvalue(MyClass{}): "  << isLvalue(MyClass{}) << '\n';
    std::cout << "isLvalue(MyClass{}.a): "  << isLvalue(MyClass{}.a) << '\n';
    std::cout << "isLvalue(returnByCopy()): " << isLvalue(returnByCopy()) << '\n';
    std::cout << "isLvalue(returnByRvalueReference()): " << isLvalue(returnByRvalueReference()) << '\n';
    std::cout << "isLvalue(&lvalue): "  << isLvalue(&lvalue) << '\n';
    std::cout << "isLvalue(std::move(lvalue): " << isLvalue(std::move(lvalue)) << "\n";

}
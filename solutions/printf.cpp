#include <iostream>
 
void myPrintf(const char * format) 
{
    std::cout << format;
}
 
template<typename T, typename... Args>
void myPrintf(const char* format, T value, Args... args)
{
    for (; * format != '\0'; format++) {
        if (* format == '%') {
           std::cout << value;
           myPrintf(format+1, args...);
           return;
        }
        std::cout << *format;
    }
}
 
int main(){
    myPrintf("% world% %\n","Hello",'!',2011);
}

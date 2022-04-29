#include <iostream>
#include <string>

int main () {
    std::string str = "Only for testing purpose.";
    int len = str.length();

    std::cout << str << '\n';

    for (int i = 0; i < len; i++) {
        for (int j = i+1; j < len; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    
    std::cout << str << '\n';
    
}

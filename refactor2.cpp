#include <iostream>
#include <string>

int main() {

    std::string str = "Only for testing purpose.";
    
    int len = str.length();
    
    int i = len - 1;
    int flag = 0;
    
    for (int j = 0; j < i; j++, i--) {
        if (str[i] != str[j]) {
            flag = 1;
            std::cout << "No " << '\n';
            break;
        }
    }
    if (flag == 0) std::cout << "Yes " << '\n';
    
}

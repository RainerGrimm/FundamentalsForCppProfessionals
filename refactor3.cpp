#include <iostream>
#include <string>

int getIndex(char c) {
    switch(c) {
        case 'a' : { 
            return 0; 
            break;
        }
        case 'A' : { 
            return 0; 
            break; 
        }
        case 'e': { 
            return 1; 
            break; 
        }
        case 'E': { 
            return 1; 
            break; 
        }
        case 'i' : {
            return 2;
            break;
        }
        case 'I' : {
            return 2;
            break;
        }
        case 'o' : {
            return 3;
            break;
        }
        case 'O' : {
            return 3;
            break;
        }
        case 'u' : {
            return 4;
            break;
        }
        case 'U': {
            return 4;
            break;
        }
        default :{
            return 5;
            break;
        }
    }
}

int main() {

    std::string str = "Only for testing purpose.";

    int count[5] = {0}, x;

    int len=str.length();

    for(int i = 0; i<len; i++) {	
        x = getIndex(str[i]);
        if(x<5) count[x]+=1;
    }
    
    std::cout << "\n count[0]: " << count[0];
    std::cout << "\n count[1]: " << count[1];
    std::cout << "\n count[2]: " << count[2];
    std::cout << "\n count[3]: " << count[3];
    std::cout << "\n count[4]: " << count[4];
    
    std::cout << "\n\n";

}

#include <cctype>
#include <iostream>
#include <string>
#include <unordered_map>

int main() {

    std::string str = "Only for testing purpose.";
    
    std::unordered_map<char, int> char2Freq;

    for (auto c: str) char2Freq[std::tolower(c)]++;
    
    std::cout << "\n char2Freq[a]: " << char2Freq['a'];
    std::cout << "\n char2Freq[e]: " << char2Freq['e'];
    std::cout << "\n char2Freq[i]: " << char2Freq['i'];
    std::cout << "\n char2Freq[o]: " << char2Freq['o'];
    std::cout << "\n char2Freq[u]: " << char2Freq['u'];
    
    std::cout << "\n\n";

}

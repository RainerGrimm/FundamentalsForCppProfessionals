#include <iostream>
#include <limits>

enum class Color1 {
  red = std::numeric_limits<int>::max(),
  blue,
  green
};

enum struct Color2: char{
  red = std::numeric_limits<char>::max(),
  blue, 
  green 
};

int main(){

}
#include <fstream>
#include <iostream>
#include <string>

void writeFile(const std::string& name){

  std::ofstream outFile(name);

  if (!outFile){
    std::cerr << "Could not open file " << name << '\n';
    exit(1);
  }

  outFile << "Line 1: Rainer Grimm" << '\n';
  outFile << "Line 2: Beatrix Jaud-Grimm" << '\n';
  outFile << "Line 3: Juliette Grimm" << '\n';
  outFile << "Line 4: Marius Grimm" << '\n';

}

void readFileShift(const std::string& name){

  std::ifstream inFile(name);

  if (!inFile){
    std::cerr << "Could not open file " << name << '\n';
    exit(1);
  }
  while (inFile){
    std::string line;
    inFile >> line;
    std::cout << line << '\n';
  }

}

void readFileGetline(const std::string& name){

  std::ifstream inFile(name);

  if (!inFile){
    std::cerr << "Could not open file " << name << '\n';
    exit(1);
  }
  while (inFile){
    std::string line;
    std::getline(inFile, line);
    std::cout << line << '\n';
  }

}

int main(){
  
  std::cout << '\n';
  
  std::string grimm{"test.txt"};
  
  writeFile(grimm);
  std::cout << '\n';
  readFileShift(grimm);
  std::cout << '\n';
  readFileGetline(grimm);
  
  std::cout << '\n';
}

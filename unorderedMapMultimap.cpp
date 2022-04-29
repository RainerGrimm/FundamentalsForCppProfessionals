#include <iostream>
#include <map>
#include <string>
#include <unordered_map>

int main(){

  std::cout << '\n';

  long long home = 497074123456;
  long long mobile = 4916046123356;

  // constructor
  std::unordered_multimap<std::string, long long> multiMap{{"grimm", home}, {"grimm", mobile}, {"jaud-grimm", home}};
  std::unordered_map<std::string, int> uniqMap{{"bin", 1}, {"root", 0}, {"nobody", 65834}, {"rainer", 1000}};

  // show the unordered maps
  std::cout << "multiMap: ";
  for(auto m : multiMap) std::cout << '{' << m.first << ", " << m.second << '}';

  std::cout << '\n';

  std::cout << "uniqMap: ";
  for(auto u : uniqMap) std::cout << '{' << u.first << ", " << u.second << '}';
  std::cout << '\n';

  std::cout << '\n';

  // insert elements
  long long work = 4970719754513;

  multiMap.insert({"grimm", work});
  // will not work
  // multiMap["grimm-jaud"]=4916012323356;

  uniqMap["lp"] = 4;
  uniqMap.insert({"sshd", 71});

  std::map<std::string, int> myMap{{"ftp", 40}, {"rainer", 999}};
  uniqMap.insert(myMap.begin(), myMap.end());

  // show the unordered maps
  std::cout << "multiMap: ";
  for(auto m : multiMap) std::cout << '{' << m.first << ", " << m.second << '}';

  std::cout << '\n';

  std::cout << "uniqMap: ";
  for(auto u : uniqMap) std::cout << '{' << u.first << ", " << u.second << '}';
  std::cout << '\n';


  std::cout << '\n';
  // search for elements

  // only grimm
  auto iter = multiMap.equal_range("grimm");
  std::cout << "grimm: ";
  for(auto itVal = iter.first; itVal != iter.second;++itVal){
    std::cout << itVal->second << " ";
  }

  std::cout << '\n';

  std::cout << "multiMap.count(grimm): " << multiMap.count("grimm") << '\n';

  auto it= uniqMap.find("root");
  if (it != uniqMap.end()){
    std::cout << "uniqMap.find(root): " << it->second << '\n';
    std::cout << "uniqMap[root]: " << uniqMap["root"] << '\n';
  }

  // will create a new entry
  std::cout << "uniqMap[notAvailable]: " << uniqMap["notAvailable"] << '\n';

  std::cout << '\n';

  // remove
  int numMulti= multiMap.erase("grimm");
  int numUniq= uniqMap.erase("rainer");

  std::cout << "Erased " << numMulti << " times grimm from multiMap." << '\n';
  std::cout << "Erased " << numUniq << " times rainer from uniqMap." << '\n';

  // all
  multiMap.clear();
  uniqMap.clear();

  std::cout << '\n';

  std::cout << "multiMap.size(): " << multiMap.size() << '\n';
  std::cout << "uniqMap.size(): " << uniqMap.size() << '\n';

  std::cout << '\n';

}


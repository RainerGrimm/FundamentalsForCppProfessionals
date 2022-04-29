#include <iostream>
#include <random>
#include <unordered_set>

void getInfo(const std::unordered_set<int>& mySet){

  std::cout << "mySet.bucket_count(): " << mySet.bucket_count() << '\n';
  std::cout << "mySet.load_factor(): " << mySet.load_factor() << '\n';

}

void fillMySet(std::unordered_set<int>& h, int n){

  std::random_device seed;
  // default generator
  std::mt19937 engine(seed());
  // get random numbers 0 - 1000
  std::uniform_int_distribution<> uniformDist(0, 1000);

  for (int i = 1; i<= n; ++i){
    h.insert(uniformDist(engine));
  }

}

int main(){

  std::cout << '\n';

  std::unordered_set<int> mySet;
  std::cout << "mySet.max_load_factor(): " << mySet.max_load_factor() << '\n';

  std::cout << '\n';

  getInfo(mySet);

  std::cout << '\n';

  // only to be sure
  mySet.insert(500);
  // get the bucket of 500
  std::cout << "mySet.bucket(500): " << mySet.bucket(500) << '\n';

  std::cout << '\n';

  // add 100 elements
  fillMySet(mySet, 100);
  getInfo(mySet);

  std::cout << '\n';

  std::cout << "---------------" << '\n';

  auto numBuck = mySet.bucket_count();

  std::cout << "mySet.bucket_count(): " << mySet.bucket_count();

  std::cout << "\n\n\n";

  for (std::size_t i = 0; i < numBuck; ++i){
      std::cout << "mySet.bucket_size(" << i << "): " << mySet.bucket_size(i) << '\n';
      for (auto it =  mySet.begin(i); it != mySet.end(i); ++it) std::cout << *it <<  " ";
      std::cout << '\n';
   }

  std::cout << " ---------------"  << "\n\n";


  // at least 500 buckets
  std::cout << "mySet.rehash(500): " << '\n';
  mySet.rehash(500);

  std::cout << '\n';

  getInfo(mySet);

  std::cout << '\n';

  // get the bucket of 500
  std::cout << "mySet.bucket(500): " << mySet.bucket(500) << '\n';

  numBuck = mySet.bucket_count();
  std::cout << "mySet.bucket_count(): " << mySet.bucket_count() << '\n';

  std::cout << '\n';

}

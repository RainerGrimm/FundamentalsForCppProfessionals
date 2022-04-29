#include <iostream>

class NonCopyableClass{
  public:

  // state the compiler generated default constructor
  NonCopyableClass()= default;

  // disallow copying
  NonCopyableClass& operator = (const NonCopyableClass&) = delete;
  NonCopyableClass (const NonCopyableClass&) = delete;
  
    // allow moving
  NonCopyableClass& operator = (NonCopyableClass&&) = default;
  NonCopyableClass (NonCopyableClass&&) = default;
};


class TypeOnStack {
  public:
    void * operator new(std::size_t)= delete;
};

class TypeOnHeap{
  public:
    ~TypeOnHeap()= delete;
};

void onlyDouble(double){}

template <typename T>
void onlyDouble(T) = delete;

int main(){

  NonCopyableClass nonCopyableClass;

  TypeOnStack typeOnStack;

  TypeOnHeap * typeOnHeap = new TypeOnHeap;

  onlyDouble(3.14);

  // force the compiler errors

  /*

  NonCopyableClass nonCopyableClass2(nonCopyableClass);

  TypeOnStack * typeOnHeap2 = new TypeOnStack;

  TypeOnHeap typeOnStack2;

  onlyDouble(2011);

  */

}

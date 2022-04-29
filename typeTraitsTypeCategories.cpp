#include <iostream>
#include <type_traits>

using namespace std;

int main(){

  cout << endl;
  cout << boolalpha;

  cout << "is_void<void>::value: " << is_void<void>::value << endl;
  cout << "is_integral<short>::value: " << is_integral<short>::value << endl;
  cout << "is_floating_point<double>::value: " << is_floating_point<double>::value << endl;
  cout << "is_array<int []>::value: " << is_array<int [] >::value << endl;
  cout << "is_pointer<int*>::value: " << is_pointer<int*>::value << endl;
  cout << "is_null_pointer<std::nullptr_t>::value: " << is_null_pointer<std::nullptr_t>::value << endl;
  struct A{
    int a;
    int f(double){return 2011;}
  };
  cout << "is_member_object_pointer<int A::*>::value: " << is_member_object_pointer<int A::*>::value << endl;
  cout << "is_member_function_pointer<int (A::*)(double)>::value: " << is_member_function_pointer<int (A::*)(double)>::value << endl;
  enum E{
    e = 1,
  };
  cout << "is_enum<E>::value: " << is_enum<E>::value << endl;
  union U{
    int u;
  };
  cout << "is_union<U>::value: " << is_union<U>::value << endl;
  cout << "is_class<string>::value: " << is_class<string>::value << endl;
  cout << "is_function<int * (double)>::value: " << is_function<int * (double)>::value << endl;
  cout << "is_lvalue_reference<int&>::value: " << is_lvalue_reference<int&>::value << endl;
  cout << "is_rvalue_reference<int&&>::value: " << is_rvalue_reference<int&&>::value << endl;

  cout << endl;

}

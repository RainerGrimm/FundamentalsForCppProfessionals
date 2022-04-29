#include <iostream>
#include <type_traits>

int main(){

  std::cout << std::boolalpha << '\n';

  std::cout << "std::is_const<std::add_const<int>::type>::value: " <<  std::is_const<std::add_const<int>::type>::value << '\n';
  std::cout << "std::is_const<std::remove_const<const int>::type>::value: " << std::is_const<std::remove_const<const int>::type>::value << '\n';

  std::cout << '\n';
  typedef std::add_const<int>::type myConstInt;
  std::cout << "std::is_const<myConstInt>::value: " << std::is_const<myConstInt>::value << '\n';
  typedef const int myConstInt2;
  std::cout << "std::is_same<myConstInt, myConstInt2>::value: " << std::is_same<myConstInt, myConstInt2>::value << '\n';

  std::cout << '\n';

  int fir = 1;
  int& refFir1 = fir;
  using refToIntType = typename std::add_lvalue_reference<int>::type;
  refToIntType refFir2= fir;

  std::cout << "(fir, refFi1r, refFir2): "  << "(" << fir << ", " << refFir1 << ", " << refFir2 << ")" << '\n';

  fir = 2;

  std::cout << "(fir, refFir, refFir2): "  << "(" << fir << ", " << refFir1 << ", " << refFir2 << ")" << '\n';

  std::cout << '\n';

}

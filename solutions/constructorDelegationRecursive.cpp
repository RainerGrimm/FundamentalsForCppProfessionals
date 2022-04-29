struct C {
  C(int) { }               // 1: non-delegating constructor
  C(): C(42) { }           // 2: delegates to 1
  C(char c) : C(42.0) { }  // 3: ill-formed due to recursion with 4
  C(double d) : C('a') { } // 4: ill-formed due to recursion with 3
};

int main(){
  C(1);
  C();
  C('a');
  C(3.5);
}

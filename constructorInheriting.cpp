class Base{
public:
  Base(int){};
};

class DerivePublic: public Base{
 using Base::Base;
};

class DeriveProtected: protected Base{
  using Base::Base;
};

class DerivePrivate: private Base{
  using Base::Base;
};

int main(){

  Base(1);
  DerivePublic(1);
  DeriveProtected(1);
  DerivePrivate(1);

}

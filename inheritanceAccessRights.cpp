class Account{
public:
  int pub{0};
protected:
  int prot{0};
private:
  int pri{0};
};

class PubAccount: public Account{
public:
  PubAccount(){
    pub + prot;  // public + protected
  }
};

class ProtAccount: protected Account{
public:
  ProtAccount(){
    pub + prot;  // protected + protected
  }
};

class PriAccount: private Account{
public:
  PriAccount(){
    pub + prot;  // private + private
  }
};


int main(){

  PubAccount pubAccount;
  ProtAccount proAccount;
  PriAccount priAccount;

  pubAccount.pub;

}

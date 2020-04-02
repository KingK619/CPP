#include<iostream>
using namespace std;
class Account{
public : virtual void assign(void ) { 
    cout<<"Account Class \n";
}
virtual ~ Account(){cout<<"Accout:: Destructor\n";}
};
class SavingAccount: public Account{
public : virtual void assign() { 
    cout<<"Saving Account\n";
}
virtual~SavingAccount(){cout<<"SavingAccout:: Destructor\n";}
};
class CurrentAccount : public SavingAccount{
public: void assign()
{
    cout<<"Current Account\n";
}
virtual~CurrentAccount(){cout<<"CurrentAccout:: Destructor\n";}
};
class FinalAccount: public CurrentAccount{
public: 
void assign(){
    cout<<"Final Account\n";
}
virtual~FinalAccount(){cout<<"FinalAccout:: Destructor\n";}
};

int main(){
    Account *base1= new Account();
     Account *base2= new SavingAccount();
      Account *base3= new CurrentAccount();
       Account *base4= new FinalAccount();
    Account * arr[] = {base1,base2,base3,base4};
    for(auto i=0;i<4;++i){
        arr[i]->assign();
    }
    for(auto i=0;i<4;++i){
        delete arr[i];
    }
}
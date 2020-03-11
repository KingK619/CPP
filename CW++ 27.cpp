#include<iostream>
using namespace std;
class BANK
{
    int SB,CB;
public:
    void setBanks (int S,int C)
    {
        SB=S;

        CB=C;
    }
    void show()
    {
        cout<<SB<<" "<<CB<<endl;
    }
    void party(BANK R)
    {
        SB= SB + R.SB;
        CB= CB + R.CB;
    }
    BANK party2(BANK A)
    {
        BANK bhai;
        bhai.SB= SB+ A.SB;
            bhai.CB= CB+ A.CB;
            return(bhai);
    }
};
int main()
{
    BANK Aman;
    Aman.setBanks(1,2);
    BANK Raman;
    Raman.setBanks(3,4);

    Aman.party(Raman);
    Aman.show();

    BANK chaman;
    chaman= Raman.party2(Aman);
    chaman.show();
}

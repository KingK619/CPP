#include<iostream>
using namespace std;
template<class T>
class SWAP
{
    T A,B,temp;
public:
    void setAB(T x,T y)
    {A= x;
    B=y;
    }
    void doswap()
    {
        temp=A;
        A=B;
        B=temp;
        cout<<"A="<<A<<"B="<<B<<endl;
    }
};
int main
         {
             SWAP<int>iobj;
             iobj.setAB(1,2);
             iobj.doswap();
             SWAP<char> cobj;
             cobj.setAB('A','B');
             cobj.doswap();
         }

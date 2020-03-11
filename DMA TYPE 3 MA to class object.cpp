#include<iostream>
using namespace std;
class RECT
{
    float L,B;
public:
     void area()
     {
         cout<<"Enter L & B=";
         cin>>L>>B;
         cout<<"\tAREA="<<L*B;
     }


};

int main()
{
    RECT *P= new RECT();
    (*P).area();
    delete P;

}

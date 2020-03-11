
#include<iostream>
using namespace std;
class electricBill
{

    float units,rpu,bill,tax,net;

public:

    void input(int u1)

    {
        units=u1;
    }
    void process()
    {
        if (units<=200)
            rpu=2;
        else if (units<=400)
            rpu=4;
        else
            rpu=5;
        bill=(units)*rpu;

        net=bill-bill/10;
    }
    int getBILL()
    {
     return(bill);
    }
    int getNET()
    {
        return(net);
    }


};
int main()
{
    float u1;


        cout<<"\nNo oF units CONSUMED=";
        cin>>u1;


electricBill aman;
aman.input(u1);
aman.process();
int bill=aman.getBILL();
int net=aman.getNET();

cout<<"\nBILL="<<bill;
cout<<"\nNET="<<net;
}

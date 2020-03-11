-#include<iostream>
using namespace std;
class BUILDING
{
float b,w,s,c,total,labour;
public:
    void input(int b1,int w1,int s1,int c1,int l1)
    {
        b=b1;
        w=w1;
        s=s1;
        c=c1;
        labour=l1;
    }

    void process()
    {
        total= (b+w+s+c)+labour;

    }
    int output()
    {
     return(total);

    }

};
int main()
{
    float  b1, w1, s1, c1,l1;
        cout<<"\nEnter COST of bricks,cement,wood,steel=";
        cin>>b1>>c1>>w1>>s1;
        cout<<"\nEnter COST of LABOUR=";
        cin>>l1;

BUILDING aman;
aman.input(b1, w1, s1, c1,l1);
aman.process();
int total=aman.output();
cout<<"TOTAL="<<total;
}

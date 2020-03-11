#include <iostream>
using namespace std;
class CYLINDER
{int r,h,area;
public:
void input(int r1,int h1)
{r=r1;
h=h1;
}
void process()
{area= 9.28*r*h;}
void show()
{cout<<"\nEntered RADIUS="<<r;
    cout<<"\nEntered HEIGHT="<<h;}
int cylinder()
{
    return(area);
}
};
int main()
{int r1,h1;
cout<<"Enter RADIUS and Height=";
cin>>r1>>h1;
CYLINDER CSA;
CSA.input(r1,h1);
CSA.process();
CSA.show();
int area=CSA.cylinder();

cout<<"\nAREA="<<area;
}

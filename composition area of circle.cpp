#include<iostream>
using namespace std;
class circle
{
    int r,a;
    public:
    void area()
    {
        cout<<"\nEnter Radius R\n";
        cin>>r;
        a=9.28*r;
        cout<<"\nAREA \n"<<a;
    }
};
class shape
{
    circle c;
public:
    void process()
    {
        c.area();
    cout<<"\nBack in process";
    }
};
int main()
{
    shape S;
    S.process();
}

#include<iostream>
using namespace std;
main()
{
    int *x;
    x=new int();
    *x=7;
    cout<<"\nAdd in x="<<x;
    cout<<"\nvalue at x="<<*x;
    delete x;
    x=NULL;
    float *f= new float (7.8);
    cout<<"\n Add in f="<<f;
    cout<<"\n value at f="<<*f;
    delete f;
}


#include<iostream>
using namespace std;
class B
{
public:
    B()
    {cout<<"Const. of Base Class\n";
    }
    ~B()
    {
        cout<<"Dest. of base Class\n";
    }
};
class D:public B
{
public:
    D()
    {
        cout<<"const. of derived class\n";
    }
    ~D()
    {
        cout<<"dest. of derived class\n";
    }
};
int main()
{
    D obj;

}

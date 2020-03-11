#include<iostream>
using namespace std;
class RECT
{
public:
    void area()
    {
        cout<<"Area of Rect\n";
    }
};
class CIRCLE
{
public:
    void area()
    {
        cout << "\nArea of Circle\n";
    }
};
class SHAPE:public RECT,public CIRCLE
{

};
int main()
{
    SHAPE S;
    S.RECT::area();
    S.CIRCLE::area();
}

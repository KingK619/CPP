#include<iostream>
#include<iomanip>
using namespace std;
class Point {
int x ; 
public:
    Point(int x=0) : x{x}{}

    // Overloading extraction(<<) Operator
   friend ostream& operator <<(ostream &os ,const Point &rhs);
   friend istream& operator >>(istream &is,const Point &rhs);
    

    void Display() { cout<<"X : "<<x<<endl;}
};

ostream& operator <<(ostream &os ,const Point &rhs)
{
    os<<rhs.x;
    return os;
}

istream& operator >>(istream &is,const Point &rhs)
{
    is>>rhs.x;
    return is;
}
int main()
{   Point h1(5),h2(1);
    // Displaying using << operator
    cout<<h1<<endl;
    cout<<h2<<endl;

    // Displaying using public functions!
    h1.Display();
    h2.Display();
    Point p1; 
    // taking input from the user >>
    cout<<"\nEnter p1 data : ";
    cin>>p1;
}
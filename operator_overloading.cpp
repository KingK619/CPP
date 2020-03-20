#include<iostream>
#include<iomanip>
using namespace std;
class Point {
int x ; int y;
public:
    Point(int x=0,int y=0) : x{x},y{y} {}

    // Overloading + Operator
    Point operator +(const Point &rhs)
    {
        Point P; 
        P.x=x+rhs.x;
        P.y=y+rhs.y;
        return P;
    }
     // Overloading - Operator
    Point operator -(const Point &rhs)
    {
        Point P; 
        P.x=x-rhs.x;
        P.y=y-rhs.y;
        return P;
    }
     // Overloading * Operator
    Point operator *(const Point &rhs)
    {
        Point P; 
        P.x=x*rhs.x;
        P.y=y*rhs.y;
        return P;
    }
     // Overloading / Operator
    Point operator /(const Point &rhs)
    {
        Point P; 
        P.x=x/rhs.x;
        P.y=y/rhs.y;
        return P;
    }

    void Display() { cout<<"X : "<<x<<setw(5)<<"Y : "<<y<<endl;}
};

int main()
{
    Point p1(10,20),p2(3,4);
    Point p3=p1+p2;
    Point p4=p1-p2;
    Point p5=p1*p2;
    Point p6=p1/p2;        
    p3.Display();
    p4.Display();
    p5.Display();
    p6.Display(); 
}
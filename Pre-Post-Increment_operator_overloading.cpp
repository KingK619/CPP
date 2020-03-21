#include<iostream>
#include<iomanip>
using namespace std;
class Point {
int x ; 
public:
    Point(int x=0) : x{x}{}

    // Overloading extraction(<<) Operator
   Point operator ++ ()                //overloading pre++;
  {
      ++x; return Point(x);
  }
  Point operator -- ()                //overloading pre--;
  {
      --x; return Point(x);
  }
  Point operator ++ (int )            // overloading post++
  {
      x++;
      return Point(x);
  }
  Point operator -- (int )            // overloading post--
  {
      x--; return Point(x);
  }
  
    void Display() { cout<<"X : "<<x<<endl;}
};


int main()
{   Point h1(5),h2(1);
    h1++; --h2;
    h1.Display();
    h2.Display();
    h1--;  ++h2;
    h1.Display();
    h2.Display();
}
#include<iostream>
#include<stdlib.h>
using namespace std;
class time
{
   int H,M;
   public:
       void input(int H1,int M1)
       {H=H1;
       M=M1;
       }
   void show()
   {
    cout<<"\nTIME IS\n"<<endl<<M<<":"<<H;
   }
   time operator - (time t1)
   {
       time bhai;
       int a=t1.H*60+t1.M;
       int b=H*60+M;
       int diff=abs(a-b);
       bhai.H= diff/60;
       bhai.M= diff%60;
   }


};
int main()
{
    time t1,t2;
    t1.input(10,50);
    t2.input(11,10);
    time t3;
    t3=t2-t1;
    t3.show();
}

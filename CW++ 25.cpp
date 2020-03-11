

// INPUT MARKS INJAVA AND ANDROID ? TOTAL & PER
#include<iostream>
using namespace std;
class STUDENT
{
    int java,android,total;
public:
    void input()

    {
        cout<<"\nEnter marks in JAVA & ANDROID=";
        cin>>java>>android;
    }
    void process()
    {
        total= java + android;
    }
    void output()
    {
        cout<<"\nTOTAL=\n"<<total;
    }
};
int main()

{
STUDENT aman,raman;
aman.input();
aman.process();
aman.output();
raman.input();
raman.process();
raman.output();

}

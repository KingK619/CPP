//Array of Objects.
#include<iostream>
using namespace std;
class student
{
    int total,math,sci,eng;
public:
    void input()
    {
        cout<<"Enter Marks in Eng Math Sci=";
        cin>>eng>>math>>sci;

    }
    void process()
    {
    total= eng+math+sci;
    }
    void show()
    {
        cout<<"\nMarks in English="<<eng<<"\nMarks in Maths="<<math<<"\nMarks in Science="<<sci<<endl;
    }
    int getTOTAL()
    {
        return(total);
    }
};

int main()
{
int N,i;
student M[100];
cout<<"Enter No. of STUDENTS=";
cin>>N;
for(i=0;i<N;i++)
{
    M[i].input();
    M[i].process();
    int total= M[i].getTOTAL();
    cout<<"TOTAL MARKS="<<total;
}
cout<<"\n*************RESULT CARD*************\n";
int Max= M[0].getTOTAL();
int Min= M[0].getTOTAL();
for(i=0;i<N;i++)
{

    M[i].show();
    if (Max<M[i].getTOTAL())
    Max=M[i].getTOTAL();
    if (Min>M[i].getTOTAL())
    Min=M[i].getTOTAL();
}

cout<<"\n---MAX-----"<<Max;
cout<<"\n---MIN-----"<<Min;
}

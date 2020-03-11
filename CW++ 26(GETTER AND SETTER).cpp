//Array of Objects.
#include<iostream>
using namespace std;
class employee
{
    int BS,DA,HRA,GS;
public:
    void input()
    {
        cout<<"Enter Basic Salary=";
        cin>>BS;

    }
    void process()
    {
        DA=BS*50/100;
        HRA=BS*30/100;
        GS= BS+ DA + HRA;
    }
    void show()
    {
        cout<<"DA="<<DA<<" HRA="<<HRA<<" GS="<<GS<<endl;
    }
    int getGS()
    {
        return(GS);
    }
};

int main()
{
int N,i;
employee E[100];
cout<<"Enter No. of Employee=";
cin>>N;
for(i=0;i<N;i++)
{
    E[i].input();
    E[i].process();
}
cout<<"SALARY SLIP\n";
int Max= E[0].getGS();
for(i=0;i<N;i++)
{

    E[i].show();
    if (Max<E[i].getGS())
    Max=E[i].getGS();

}
cout<<"MAX="<<Max;
}





//Array of Objects.
#include<iostream>
using namespace std;
class employee
{
    int BS,DA,HRA,GS;
public:
    void input()
    {
        cout<<"Enter Basic Salary=";
        cin>>BS;

    }
    void process()
    {
        DA=BS*50/100;
        HRA=BS*30/100;
        GS= BS+ DA + HRA;
    }
    void show()
    {
        cout<<"DA="<<DA<<" HRA="<<HRA<<" GS="<<GS<<endl;
    }

};

int main()
{
employee Aman;
employee *P;
P= &Aman;
(*P).input();
(*P).process();
(*P).show();
}



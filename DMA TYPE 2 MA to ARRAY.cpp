#include<iostream>
using namespace std;
int main()
{
    int N,i;
    cout<<"Enter N=";
    cin>>N;
    int *A= new int [N];
    for(i=0;i<N;i++)
    {
        cout<<"Enter Value=";
        cin>>A[i];

    }
    cout<<"\nOUTPUT\n";
    for(i=0;i<N;i++)
    {
        cout<<A[i]<<endl;
    }
    delete []A;
    A=NULL;
}

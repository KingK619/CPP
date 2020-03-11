#include<iostream>
using namespace std;
#include<stdlib.h>
class MATRIX
{
    int A[10][10],M,N;
    public:
    void SetOrder(int M1,int N1)
    {
        M=M1;
        N=N1;
    }
    void input()
    {
        for (int R=0;R<M;R++)
            for(int C=0;C<N;C++)
        cin>>A[R][C];
    }
    MATRIX operator+(MATRIX M2)
    {int R,C;

        MATRIX bhai;
        bhai.SetOrder(M2.M,M2.N);
        for(R=0;R<M;R++)
            {for(C=0;C<N;C++)
        {
            A[R][C]=A[R][C]+M2.A[R][C];

        }
            }
return(bhai);
    }

    void Show()
    {int R,C;
    for (R=0;R<M;R++)
        for(C=0;C<N;C++)
    {
        cout<<" "<<A[R][C];

    }
    }
};
int main()
{
    MATRIX M1,M2,M3;
    M1.SetOrder(2,2);
    M2.SetOrder(2,2);
    cout<<"Enter first matrix\n";
    M1.input();
    cout<<"Enter 2nd MAtrix\n";
    M2.input();
    M3=M1+M2;
    M3.Show();

}

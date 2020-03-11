#include<iostream>
using namespace std;
class HEIGHT

    {
        int feets,inch;
    public:
            void setHeight (int f,int i)
    {
        feets=f;

        inch=i;
    }

    HEIGHT diff(HEIGHT A)
    {
        HEIGHT C1;
C1.feets=((A.feets-feets)*(12)+ (A.inch-inch))/(12);
C1.inch=((A.feets-feets)*(12)+ (A.inch-inch))%(12);

            return(C1);
    }
     void show(HEIGHT C)
    {

        cout<<feets<<" "<<inch<<endl;
    }
};
int main()
{
    HEIGHT A;
    int f,i;
    cout<<"\nEnter Height of 1st\n";
    cin>>f>>i;
    A.setHeight(f,i);
    HEIGHT B;
    int f1,i1;
    cout<<"\nEnter height of 2nd\n";
    cin>>f1>>i1;
    B.setHeight(f,i);


    HEIGHT C;
    C= B.diff(A);
    C.show();
}


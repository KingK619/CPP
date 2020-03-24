#include<iostream>
#include<vector>
using namespace std;
int binary;
int D2B(int n)
{   
    if(n>0)
    {
       
        binary= n%2 + 10 * D2B(n/2);
        return binary;
    }
    else
    {
        return binary;
    }
    
}

int main()
{
    cout<< D2B(12);
   
}
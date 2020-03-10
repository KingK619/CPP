#include <iostream>
#include <string>
#include<cstring>
using namespace std;
// TO  MAINTAIN RECORD OF MINIMUM ELEMENT IN THE STACK

int main()
{  int input; int stack[10]; int top=-1;int min_num[11];
    int top_min=0;
        min_num[0]=1000000;
    while(top!=9)
    {
    
        cout<<"Enter an element to push into the stack : " ;    cin>>input;
        top++;
        stack[top]=input;
        if(stack[top] < min_num[top_min])
        {
            top_min++;
            min_num[top_min]=stack[top];
        }
        cout<<"\nPUSHED ELEMENT :"<<stack[top];
        cout<<"\nMINIMUM NUMBER IN STACK:"<<min_num[top_min]<<endl;
    }
    
}

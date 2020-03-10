#include <iostream>
#include <string>
#include<cstring>
using namespace std;
// TO  MAINTAIN RECORD OF MINIMUM ELEMENT IN THE STACK

int input; int stack[10]; int top=-1;
int min_num[11]={1000000};

int top_min=0;


void push ()
    {   if(top==10)
        {
            cout<<"\n Overflow"<<endl;
        }
        else
        {
        cout<<"Enter an element to push into the stack : " ;    cin>>input;
        top++;
        stack[top]=input;
        if(stack[top] <= min_num[top_min])
        {
            top_min++;
            min_num[top_min]=stack[top];
        }
        cout<<"\nPUSHED ELEMENT :"<<stack[top];
    
        }
    }
    
    
void pop()
    {
        if(top==-1 || top_min==-1)
        {
            cout<<"\nUNDERFLOW!"<<endl;
        }
        else
        {
        if(stack[top]==min_num[top_min])
        {
            top--; top_min--;
            cout<<"\nPOPPED "<<stack[top+1]<<endl;        
        }
        else
        {
            top--; 
            cout<<"\nPOPPED "<<stack[top+1]<<endl;   
        }
        }
    }
    

int main()
{  
    
    while(1)
    {   cout<<"1. PUSH \n 2. POP"<<endl;
        int choice;
        cout<<"Enter Your Choice : " ; cin>>choice;
        switch(choice)
        {
            case 1 : push(); break;
            case 2 : pop(); break;
            default: cout<<"\nWrong Input!\n " ; 
        }
        
        
        cout<<"\nMINIMUM NUMBER IN STACK:"<<min_num[top_min]<<endl;
    }
    
}

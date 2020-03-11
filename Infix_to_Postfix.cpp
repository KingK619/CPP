#include <ctype.h>
#include <iostream>
#include <string>
using namespace std;
int priority(char c)
{   
    if(c=='(')
        return 0;
    if(c=='+' || c=='-')
        return 1 ;
    if(c=='*' || c=='/')
        return 2;
    if(c == '^') 
        return 3; 

}
int main()
{
  char exp[12]="(A+B)*(C-D)";
  char stack[12];
  int top=-1;
  int i=0;
  
while(exp[i]!='\0')
{
    if(isalnum(exp[i]))
        cout<<exp[i];
    else if(exp[i]=='(')
    {
        top++;
        stack[top]=exp[i];
    }
    else if(exp[i]==')')
    {
        while(stack[top]!='(')
            { 
                cout<<stack[top]; top--;
            }
        top--;
    }
    else
    {
        while(priority(stack[top])>=priority(exp[i]) )
        {    
            cout<<stack[top]; top--; 
        }
        top++; stack[exp[i]];
    }
    i++;

}
while(top!=-1)
{
    cout<<stack[top]; top--;
}
}

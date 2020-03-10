#include <iostream>
#include <string>
#include<cstring>
using namespace std;
// stack postfix calculation 

int main()
{   char exp[8]="82+42*+";
  int stack[4];
  int top=-1, element1, element2;
int i=0;
    
  while(exp[i]!='\0')
  {
      switch(exp[i])
      {    
          case '+' :  
                    element1=stack[top];
                    top--;
                    element2=stack[top];
                     stack[top]=element1+element2;
                       break;
          case'-':  cout<<"-"; 
                    element1=stack[top];
                    top--;
                    element2=stack[top];
                     stack[top]=element2-element1; break;
          case'*': element1=stack[top];
                    top--;
                      element2=stack[top];
                    stack[top]=element1*element2; break;
          case'/': element1=stack[top];
                    top--;
                    element2=stack[top];
                    
                    stack[top]=element1/element2;break;
          case'^': element1=stack[top];
                    stack[top]=element1*element1; break;
          default: 
          
                         top++;
                        stack[top]=exp[i]-48; // covert char to int
                        
                    
      }
      
      i++;
      
  }
  
  cout<<stack[top];
  
}

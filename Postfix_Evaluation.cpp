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
  {                 element1=stack[top];
                    top--;
                    element2=stack[top];
      switch(exp[i])
      {    
          case '+' :  
                     stack[top]=element1+element2;break;
          case'-': 
                   stack[top]=element2-element1; break;
          case'*': 
                    stack[top]=element1*element2; break;
          case'/':                    
                    stack[top]=element1/element2;break;
          case'^': 
                    stack[top]=element1*element1; break;
          default: 
                      
                         top+=2; // top is inc. by 2 as we already done top-- above and we dont need them in this case.
                        stack[top]=exp[i]-48; // covert char to int
                        
                    
      }
      
      i++;
      
  }
  
  cout<<stack[top];
  
}

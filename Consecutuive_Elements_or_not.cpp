#include <iostream>
#include <string>
using namespace std;
int stack[5];int top=-1;int count=0;
    int aux[5]; int topA=-1;

void push()
{   int data;
    if(top==4)
        cout<<"\nSTACK IS FULL";
    else
    {   cout<<"Enter Data : "; cin>>data;
        top++;
        stack[top]=data;
        count++;          // used for if push is called
    }


}
int pop()
{   int val;
    if(top==-1)
        {cout<<"\nSTACK IS EMPTY!"; return 0;}
    else
    {   int i=0;
        val=stack[top];
        top--;
        count--;         //count of elements in stack
        return val;
        }
}
void peek()
{
    if(top==-1)
    {
        cout<<"\nNothing 2 Show!";
    }
    else
    {
        cout<<"\nTOP : "<<stack[top];
    }
}
bool consec()
{   int ele1,ele2,range=-1; bool result;
    while(top!=-1)
    {
        topA++; aux[topA]=stack[top]; top--;
    }
    if(count%2!=0)
    {
        range=0;
    }
    while(topA!=range)
    {
        ele1=aux[topA]; topA--; ele2=aux[topA]; topA--;
        if(ele1-ele2!=1 || ele1-ele2!=-1)
        {
            result=false;
            top++; stack[top]=ele1;
            top++; stack[top]=ele2;
            while(topA!=range)                          // every element needs to push in to original stack
            {
                top++; stack[top]=aux[topA]; topA--;
            }
            return result;

        }
        else
            {
                result=true;
                top++; stack[top]=ele1;
                top++; stack[top]=ele2;
            }

    }

    return result;
}
int main()
{   bool result;
cout<<boolalpha;
  int choice,element;
  while(1)
  {
      cout<<"\n1. PUSH\n 2. POP\n 3. PEEK\n 4.Consecutive Check\n";
      cout<<"Enter Choice:";
      cin>>choice;
      switch(choice)
      {
          case 1 : push();  break;
          case 2 : element=pop();
                    if(element!=0)
                    cout<<element<<" is removed\n "; break;
          case 3: peek(); break;
          case 4 :  result= consec();
                    cout<<endl<<result;
                    if(count%2!=0)
                    {   top++;
                        stack[top]=aux[topA];
                        topA--;

                    }
                    break;
          default: cout<<"Wrong Input";
      }
  }


}


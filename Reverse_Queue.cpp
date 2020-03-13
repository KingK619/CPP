
#include <iostream>
#include <string>
using namespace std;
int queue[5],stack[5],top=-1,front=-1,rear=-1;
void enqueue()
{
    if((front == rear + 1) || (front == 0 && rear == 5-1))
    {
        cout<<"\noverflow\n";
    }
    else
    {
    int data;
    cout<<"\nEnter Data "; cin>>data;
    rear=(rear+1)%5;
    queue[rear]=data;
    if(front==-1)
        front++;
    cout<<"\nENQUEUED "<<queue[rear];
    }
}
int dequeue()
{   int element;
    if(front==-1)
        cout<<"\nUnderFlow";
    else
    {
    element=queue[front];
    if(front==rear)
        {
            front=-1;rear=-1;
            return element;

        }
    else
    {
    front=(front+1)%5;
    return element;
    }
    }
}

void reverse_queue()
{   int element;
    while(front!=-1)
    {
            element=dequeue();
            top++;
            stack[top]=element;
    }
    while(top!=-1)
    {   if(front==-1)
            front++;
        rear++;
        queue[rear]=stack[top];
        top--;
    }
    int i=0;
     // just for checking if it is reversed or not.

                    while(i<5)
                    {
                        cout<<"\t"<<queue[i]; // if the stack was not completely filled before reversing then
                                              //it will show the element which are on the same place before.
                        i++;
                    }
}
int main()
{
  int choice,element;
  while(1)
  {
      cout<<"\n1. Enqueue\n 2. Dequeue\n 3. Reverse\n";
      cout<<"Enter Choice:";
      cin>>choice;
      switch(choice)
      {
          case 1 : enqueue(); break;
          case 2 : element=dequeue();cout<<element<<" is removed\n"; break;
         case 3 : reverse_queue();

                    break;
          default: cout<<"Wrong Input";
      }
  }


}

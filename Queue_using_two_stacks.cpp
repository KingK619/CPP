#include <iostream>
#include <string>
using namespace std;
int stackA[5],stackB[5],rear=-1,front=-1;int count=0;
void enqueue()
{   int data;
    if(rear==4)
        cout<<"\nQUEUE IS FULL";
    else
    {
        if(front!=-1)
        {
            while(front!=-1)
            {
                rear++;
                stackA[rear]=stackB[front];
                front--;
            }
        }

        cout<<"\nEnter Data:"; cin>>data;
        rear++;
        stackA[rear]=data;
        count++;          // used for if enqueue is called
    }



}
int dequeue()
{
    if(count==0)
        {cout<<"\nQUEUE IS EMPTY!"; return 0;}
    else
    {
        if(front==-1)
        {
            while(rear!=-1)
            {   front++;
                stackB[front]=stackA[rear];
                rear--;

            }
        }
        int ele;
            ele=stackB[front];
            front--;
            count--;
            return ele;


        }
}


int main()
{
  int choice,element;
  while(1)
  {
      cout<<"\n1. Enqueue\n 2. Dequeue\n ";
      cout<<"Enter Choice:";
      cin>>choice;
      switch(choice)
      {
          case 1 : enqueue(); break;
          case 2 : element=dequeue();
                    if(element!=0)
                    cout<<element<<" is removed\n "; break;
          default: cout<<"Wrong Input";
      }
  }


}

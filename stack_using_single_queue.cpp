#include <iostream>
#include <string>
using namespace std;
int queueA[5],queueB[5],rearA=-1,frontA=-1,rearB=-1,frontB=-1;int count=0;
void push()
{   int data;
    if(rearA==4)
        cout<<"\nSTACK IS FULL";
    else
    {   cout<<"Enter Data : "; cin>>data;
        rearA=(rearA+1)%5;
        queueA[rearA]=data;
        if(frontA==-1)
            frontA++;
        count++;          // used for if push is called
    }



}
int pop()
{   int val;
    if(count==0)
        {cout<<"\nSTACK IS EMPTY!"; return 0;}
    else
    {   int i=1;
        while(i<count) // this gives number of elements.. and we have 2 leave last one (so it can become front)
        {
            val=queueA[frontA];
            frontA=(frontA+1)%5;
            rearA=(rearA+1)%5;
            queueA[rearA]=val;
            i++;

        }
        int ele=queueA[frontA];
        if(frontA==rearA)
            frontA=rearA=-1;
        else
            frontA=(frontA+1)%5;
            count--;
            return ele;


        }
}
void peek()
{
    if(frontA==-1)
    {
        cout<<"\nNothing 2 Show!";
    }
    else
    {
        cout<<"\nTOP : "<<queueA[rearA];
    }
}

int main()
{
  int choice,element;
  while(1)
  {
      cout<<"\n1. PUSH\n 2. POP\n 3. PEEK\n";
      cout<<"Enter Choice:";
      cin>>choice;
      switch(choice)
      {
          case 1 : push(); break;
          case 2 : element=pop();
                    if(element!=0)
                    cout<<element<<" is removed\n "; break;
          case 3: peek(); break;
          default: cout<<"Wrong Input";
      }
  }


}


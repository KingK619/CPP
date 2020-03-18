#include<iostream>
using namespace std;
class Demo{
  string name; int salary; int id;int * serial=NULL;
public:
static int count;        // Declaration ( no memory given yet)
    void display()
    {
        cout<<"\nNAME:"<<this->name<<"\n Salary: "<<this->salary<<"\n ID: "<<this->id;
        cout<<"\nSERIAL "<<*serial<<endl<<count;
    }

    Demo(string name="None",int salary=0,int id=0,int s=0)
    {
        this->name=name;
        this->salary=salary;
        this->id=id;
        serial=new int;
        *serial=s;
        count++;

    }
    Demo( Demo &obj)        // Copy Constructor ( useful for heap memory)
    {
        name=obj.name;
        salary=obj.salary;
        id=obj.id;
        serial=new int;
        *serial=*obj.serial;

    }
     ~Demo()                  // Destructor ( Heap memory Removal)
    {
        cout<<"\n\tDESTRUCTOR IS CALLLED!";
        delete serial;
    }
};
int Demo::count=0;      // Memory Given only One Time

// Note : value of count will be the same for ever object and changes can be made 
 int main()
 {
    Demo e1,e2("KV",100,0,20),e3("K.V",1000,234,30),e4;
    cout<<"\n COUNT "<<Demo::count;
    e1.display();
    e2.display();
    e3.display();
    Demo new_obj(e2);
    new_obj.display();
}

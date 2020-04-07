#include<iostream>
#include<memory>
#include<vector>
using namespace std;

class Base{
    private : int* data;
    public: 
        Base() {cout<<"Default Const. is called\n";}
        Base(int data) {this->data = new int{ data };}
        int getData(){ return *data; }
        ~Base() {
            cout<<"\nDestructor is called\n";
            delete data;
            }
};
// Unique Smart POinter !

int main(){
    Base * p  = new Base(100);      // object pointer
    cout<< p->getData();
    delete p;       // we need to explicitly define the delete keyword to fre uo heap memory after usage!
    int* ptr = new int(10);
    Base Obj(*ptr);             // passing a pointer value  ( destructor will remove heap memory)
    cout<<Obj.getData()<<endl;
    // using smart pointers 
    //unique
    unique_ptr <Base> ptrNew ( new Base(200) );         // automatiaclly freed memory
    cout<<ptrNew->getData()<<endl;

    unique_ptr<Base> ptr1 = make_unique<Base>(500);    
    cout<<ptr1->getData()<<endl;

    ptr1 = move(ptrNew);                                     // moving the ownership ( cant copy)
     cout<<ptr1->getData()<<endl;
    // vector< unique_ptr<Base> > objects;
    // for(int i = 0; i < 5 ; i++)
    //     objects.push_back(make_unique<Base>(i));

    // for(const auto &object: objects)
    //     cout<< endl<< *object << endl;
}
#include <fstream>
#include<iostream>
using namespace std;
class filecopy
{
    ofstream write;
    ifstream read;
    char ch, srcfile[30],desfile[30];
public:
    void copy()
    {
        cout<<"Enter File name to be copied\t";
        cin>>srcfile;
        cout<<"Enter File Destination\t";
        cin>>desfile;

        read.open(srcfile);
    if(read.fail())
    {
        cout<<"FILE DOESNOT EXIST.......";
        return;
    }
    else

    {
         write.open(desfile,ios::app);
         while(!read.eof())
         {
             ch=read.get();
             write<<ch;
             cout<<ch;
         }
    }
    cout<<"\t\t\n\nFILE COPIED......";

    }
    ~filecopy()
    {
        read.close();
        write.close();
        cout<<"\nFILE CLOSED..";
    }
    };
    int main()
    {
        filecopy cp;
        cp.copy();    }

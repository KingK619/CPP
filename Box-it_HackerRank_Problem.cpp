#include<bits/stdc++.h>

using namespace std;
//Implement the class Box 

class Box{
private: long int l,b,h; 
public:
    Box(int l=0,int b=0,int h=0){          //default and parameterized
        this->l=l;
        this->b=b;
        this->h=h;
    }
    Box(const Box &source)              //copy const.
    {
        l=source.l;
        b=source.b;
        h=source.h;

    }

    int getLength() { return l;}
    int getBreadth () { return b;}
    int getHeight () {return h;}
    long long CalculateVolume() {return (l*b*h);}

    //operator overloading 

    bool operator<(Box& B) {
        if(l < B.l) {return true;}
        if(b < B.b && l==B.l) {return true;}
        if(h < B.h && b==B.b && l==B.l) {return true;}
        return false;
    }

    friend ostream& operator<<(ostream& out, Box& B);

    
};

ostream& operator<<(ostream& out, Box& B){
    out<<B.l<<" "<<B.b<<" "<<B.h;
    return out;
}


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}

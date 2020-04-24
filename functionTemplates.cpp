#include<iostream>
#include<vector>
#include<string>

using namespace std;

template<typename T>
T MAX(T a , T b)
{
    if( a > b) 
        return a; 
    else 
        return b;
}
template<typename T, typename B>
void display(T a,B b)
{
    cout<<a<<","<<b<<endl;
}
class Player{
string name; int age;
public: 
 Player(string name, int age ) : name{name}, age{age} {}
 friend ostream& operator<<(ostream&,Player&);
 bool operator > (Player& obj2)
 {
     if(age > obj2.age)
        return true;
     else 
        return false;
 }
};

 ostream& operator<<(ostream&os,Player& obj)
 {
     os<<obj.name<<" "<<obj.age;
     return os;
 }
int main()
{
    Player p1("KV",30);
    Player p2("GTS",20);
    cout<<MAX<int>(190,20)<<" ";
    cout<<MAX(190,20)<<" ";
    cout<<MAX<double>(19.0,2.0)<< " ";
    cout<<MAX('A','B')<< " ";
    display(2,'A');
    Player p3 = MAX<Player>(p1,p2);
    cout<<p3;
}
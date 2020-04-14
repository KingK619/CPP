#include<iostream>
#include<vector>
using namespace std;

int count =0;
vector<int> sum(vector<int> newVec)
{   int i = 0;
    while(i < newVec.size()-1 )
    {
        newVec[i] = newVec[i] + newVec[i+1];
        i++;
    }
    newVec.pop_back();
    return newVec;
}

void display(vector<int> vec)
{   int i = 0;
    while(i < vec.size())
    {
        cout<<vec[i]<<" ";
        i++;
    }
    cout<<endl;
}
void sumTraingle( vector <int> vec )
{
    if(vec.size()==1) {display(vec);  }
    else{
         sumTraingle( sum(vec) ) ;
         display(vec);
    }    
}


int main()
{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    sumTraingle(vec);
}
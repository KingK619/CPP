#include<iostream>
#include<vector>
using namespace std;

int count =0;
vector<int> sum(vector<int> newVec)
{   static int i = 0;
   if(i == newVec.size -1 )
   {
     newVec.pop_back();
    return newVec;
   }

    if(i < newVec.size()-1 )
    {
        newVec[i] = newVec[i] + newVec[i+1];
        i++;
    }
    return sum(newVec);
    
}

void display(vector<int> vec)
{  static int j = 0;
    if(j == vec.size())
    {
      cout<<endl;

    }
   else
    {
        cout<<vec[j]<<" ";
        j++;
        display(vec);
    }
    
    
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

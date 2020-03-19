// C++ program for Largest Area Under Histogram by Brute Force Method.
#include<iostream>
#include<iomanip>
#include <bits/stdc++.h>
#include<vector>
using namespace std; 
int main()
{   stack <int> stack;    // single stack storing highest area on top 
    vector <int> heights{5,4,6,5,3,2,2,2,2,4}; // try different test cases  
    int area,width=1;           // unit width
    area=heights[0] * width;        
    stack.push(area);                   
    for(int i=0; i<heights.size()-1;i++)    // brute force method
    {   int j=i;
        while(heights[i] <= heights[j+1])       
        { 
            width++; j++; if(j==6) break;
        }
         j=i;
        while(heights[i] <= heights[j-1])
        { 
            width++; j--; if(j==1) break;
        }
        area=heights[i] * width;

        if(area >  stack.top())
            stack.push(area);
        
        width=1;                           // width needs to reset
    }
    
    cout<<stack.top()<<endl;            // displaying max area 
}
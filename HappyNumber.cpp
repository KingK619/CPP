/*Write an algorithm to determine if a number is "happy".

A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.

Example: 

Input: 19
Output: true
Explanation: 
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1
*/
#include<iostream>
using namespace std;
int square(int n)                   // squares and sum up
    {
        if(n==0) return 0;
        else
        {
        return (n%10)*(n%10) + square(n/10);
        }
    }
    
    bool isHappy(int n) {
        int x = n,count=0; 
        while(x!=1)
        {
            if(count==100) return false;        // kinda lke exception thowing but not the correct way
            x = square(x);
            count++;
            
        }
        return true;
    }
    
    int main()
    {
      cout<<boolalpha<<isHappy(19);                       // output :  true;
    }

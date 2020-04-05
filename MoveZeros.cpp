/*Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Example:

Input: [0,1,0,3,12]
Output: [1,3,12,0,0]*/
// Recursive Approach.
// Note : This is not an optimum approach .... it has more space complexity 

#include<iostream> 
#include<vector>
using namespace std;
 
 vector<int> newNums;                       // global vector in which output will be stored
void moveZeroes(vector<int>& nums,int i=0) {
        
        if(i==nums.size()) return;
        if(nums[i]!=0)
        {
            newNums.push_back(nums[i]);
            
            return moveZeroes(nums,i+1);
        }
         else
        {   

            moveZeroes(nums,i+1);
       
             return newNums.push_back(nums[i]);
        }
    }
int main()
{  vector<int> nums={0,1,0,3,12};
moveZeroes(nums);
int i=0;
while(i<newNums.size())
{
    cout<<newNums[i]<<" ";
    i++;
}
}

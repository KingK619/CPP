#include<iostream>
#include<iomanip>
#include<vector>
#include<string>
using namespace std;

// fibonacci series
int fibonacci(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1; 
    else
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
    
} 

//to print the array elements using recursion
void print_array(int arr[],int n)
{
    if(n==0)
    {
        cout<<arr[0]<<endl;
    }
    else
    {
        print_array(arr,n-1);
        cout<<arr[n]<<endl;
    }
    
}

// to count the digits of a given number using recursion

int countDigit(int n){
    static int count=0;
if(n==0)
{
    return count;
}
else
{
     count++;
    countDigit(n/10);
    return count;
}
}
// Greatest Common Diivisor
int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 
// Largest element of an array
int printLargestArray(int arr[],int n)
{
    static int i=0,comp=-999999;
    if(i<n)
    {
    if(comp < arr[i]) 
        comp=arr[i];
     i++;
    printLargestArray(arr,n);
    }
    return comp;
}  
// prime or not 
bool checkPrime(int n){
    static int count = 0,i=2; static bool result;
    if(n==1) return false;
    if(i==n) 
    {
     if(count > 0) 
        {
            result=false;
            return result; 
       }
       result= true;
       return result;
    }
    if(n % i == 0) count++;
    i++;
    checkPrime(n);
    return result;
}

// LCM 
/*int LCM (int n1 , int n2 )
{   static int i=2,div1,div2;
    if(n2==1) { return n1;}
    if(n1==1) {return n2;}
    div1= n1%i; div2=n2%i;
    LCM(div1)
}*/

/// printing odd and even serpratly
void oddEven(int n)
{
    if(n==0) {cout<<endl; return;}
    if(n==1) { cout<<n<<endl;}
    else if(n%2==0) {
        cout<<n<<setw(5);
        oddEven(n-2);
        cout<<n-1<<setw(5);
    }
    else{
        cout<<n<<setw(5);
        oddEven(n-2);
        cout<<n-1<<setw(5);
    }
}

// if string is palindrome or not !  
bool isPalindrome(string str){
    static int i=0,n=str.length();
    if(i==n/2)
    {
        return true;
    }
    if(str[i]==str[n-i-1])
    {   i++;
        return isPalindrome(str);
    }
    else
    return false;
}

// power of any number 
long int powerNumber(int num, int power)
{   static int result=1;
    if(power==0) { return result;}
    else
    {
        return  result=num*powerNumber(num,power-1);
        
    }
}
// print numbers of hailstone sequence 
void HailstoneSequence (int num)
{
    if(num==1)
    {   cout<<num;
        return;
    }
    if(num%2==0)
     {
         cout<<num<<setw(5);
         HailstoneSequence(num/2);
     }
     else
     {    cout<<num<<setw(5); 
         HailstoneSequence(3*num+1);
     }
}
//copy One string to another using recursion.
string copyString(string str,int i,int n)      // pass string along with length & starting and ending
{
    static string newString=""; 
    if(i>n) { return "operation failed";}
    if(i==n)
    {
        return newString;
    }
    else
    {   newString=newString + str[i];
        return copyString(str,i+1,n);
    }
}
//to find the first capital letter in a string 
char firstCapital(string str,int i,int n)
{   static string cap;
    if(i > n) { cout<<"index out of bound"; return's';}
    else if(i==n) { cout<<"NOT FOUN"; return'D'; }
    else
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            return str[i];
        return firstCapital(str,i+1,n);
    }
}
// binary search using recursion 
void binarySearch(int arr[],int i,int n,int element)    // arr, beg , end (index) , emenent
{
    if(i==n+1) { cout<< "NOT FOUND ";}
    else
    {   int mid = (i + n) /2  ;
        if(arr[mid]== element) { cout<<"Found at positon "<<mid; return;}
        else
        {
        if(element > arr[mid])
            binarySearch(arr,mid+1,n,element);
        else
            binarySearch(arr,i,mid-1,element);
        }
    }
     return;
}


// sum of digits in a string 
int stringToInterger(string str,int i=0){
    static int len= str.length(); static int newNumber=0;
    if(i==len){
        return newNumber;
    }
    int curr = str[i];
   return  newNumber + (curr-48) +  stringToInterger(str,i+1)    ;
    
    
}
// length of string using recursion 
int lengthString(string str,int i =0)
{
    if(str[i]=='\0'){
        return i;
    }
    else
        return lengthString(str,i+1);
}
int main() 
{   
    cout<<lengthString("hello there wehfa");
   
}
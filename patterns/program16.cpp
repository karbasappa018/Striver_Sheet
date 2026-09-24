/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

A

BB

CCC

DDDD

EEEEE

Print the pattern in the function given to you.
*/

#include<iostream>
using namespace std;

void DisplayPattern1(int iNo)
{
  
    char a = 'A';

    for(int i = 1; i<=iNo; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            cout<<a;

        }
        cout<<"\n";

        a++;
        
    }
    
}

int main()
{
    int iNo = 0;
   

    cout<<"Enter the number \n";
    cin>>iNo;

    

    DisplayPattern1(iNo);
    

}
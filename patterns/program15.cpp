/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

ABCDE

ABCD

ABC

AB

A

Print the pattern in the function given to you.
*/

#include<iostream>
using namespace std;

void DisplayPattern1(int iNo)
{
  

    for(int i = 1; i<=iNo; i++)
    {
        char a = 'A';

       for(int j = iNo ; j>=i; j--, a++)
       {
            cout<<a<<"\t";
       }

        cout<<"\n";
    }
    
}

int main()
{
    int iNo = 0;
   

    cout<<"Enter the number \n";
    cin>>iNo;

    

    DisplayPattern1(iNo);
    

}
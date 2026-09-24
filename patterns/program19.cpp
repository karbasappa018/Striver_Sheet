/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
Print the pattern in the function given to you.
*/

#include<iostream>
using namespace std;

void DisplayPattern1(int iNo)
{
  
   

    for(int i = 1; i<=iNo; i++)
    {
       for(int j =iNo; j>=i; j--)
       {
            cout<<"*";
       }

       for(int k = 1; k<i*2-1; k++)
       {
            cout<<" ";
       }

        for(int j =iNo; j>=i; j--)
       {
            cout<<"*";
       }

        cout<<"\n";
    }

    for(int i = 1; i<=iNo; i++)
    {
       for(int j =1; j<=i; j++)
       {
            cout<<"*";
       }

       for(int k = iNo*2; k>i*2; k--)
       {
            cout<<" ";
       }

        for(int j =1; j<=i; j++)
       {
            cout<<"*";
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
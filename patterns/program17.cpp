/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

Print the pattern in the function given to you.
*/

#include<iostream>
using namespace std;

void DisplayPattern1(int iNo)
{
  

    for(int i = 1; i<=iNo; i++)
    {
        for(int j = iNo-1; j>=i; j--)
        {
            cout<<" ";
        }

        char a = 'A';

        for(int k = 1;k<= i; k++, a++)
        {
            cout<<a;
        }

        char b = a-=2;

        for(int l = 1; l<i; l++, b--)
        {
            cout<<b;
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
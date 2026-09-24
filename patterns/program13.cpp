/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

1 

2 3 

4 5 6 

7 8 9 10 

11 12 13 14 15

Print the pattern in the function given to you.
*/

#include<iostream>
using namespace std;

void DisplayPattern1(int iNo)
{
    int k = 1;

    for(int i = 1; i<=iNo; i++)
    {

       for(int j = 1; j<=i; j++,k++)
       {
            cout<<k<<"\t";
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
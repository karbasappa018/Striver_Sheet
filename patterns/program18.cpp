/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

E 

D E 

C D E 

B C D E 

A B C D E

Print the pattern in the function given to you.
*/

#include<iostream>
using namespace std;

void DisplayPattern1(int iNo)
{
  
    char a = 'E';

    for(int i = 1; i<=iNo; i++)
    {
        for(int j= 1; j<=i; j++, a++)
        {
            cout<<a;

        }

       
        for(int k =1; k<=i+1; k++)
        {
            a--;
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
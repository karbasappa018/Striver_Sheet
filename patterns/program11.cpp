/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

1 

0 1 

1 0 1 

0 1 0 1 

1 0 1 0 1

Print the pattern in the function given to you.



*/

#include<iostream>
using namespace std;

void DisplayPattern1(int iNo)
{
    for(int i = 1; i<=iNo; i++)
    {


        for(int j =1; j<=i; j++)
        {
            if(j%2==0)
            {
                cout<<"0";
            }
            else
            {
                cout<<"1";
            }
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
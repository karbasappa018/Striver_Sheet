/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

1        1
12      21
123    321
1234  4321
1234554321

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
            cout<<j;

        }

            for(int k = 1; k<=(iNo*2-i*2);k++)
            {
                cout<<" ";
            }
            for(int l= i; l>=1; l--)
            {
                cout<<l;
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
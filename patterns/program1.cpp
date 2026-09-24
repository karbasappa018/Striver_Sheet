/*
    Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

*****

*****

*****

*****

*****

Print the pattern in the function given to you.`
*/

#include<iostream>
using namespace std;

void DisplayPattern1(int iNo)
{
    for(int i =0; i<iNo; i++)
    {
        for(int j =0; j<iNo; j++)
        {
            cout<<"*";
        }

        cout<<"\n";
    }
}

int main()
{
    int iNo = 0;
    

    cout<<"Enter the number\n";
    cin>>iNo;


    DisplayPattern1(iNo);
    

}
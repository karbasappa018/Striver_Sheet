/*Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

12345

1234

123

12

1

Print the pattern in the function given to you.


*/

#include<iostream>
using namespace std;

void DisplayPattern1(int iNo)
{
    for(int i = iNo; i>=1; i--)
    {
        for(int j = 1; j<=i; j++)
        {
            cout<<j;
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
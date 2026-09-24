// Input Output

/*
    Complete the function printNumber which takes an integer input from the user and prints it on the screen.



Use:-

for C++ : cout << variable_name;

Example 1

Input(user gives value): 7

Output: 7

Example 2

Input(user gives value): -5

Output: -5
*/

#include<iostream>
using namespace std;


class Solution
{
    public:

    void printNumber(int iNo)
    {
        cout<<iNo;
    }
};

int main()
    {

        int iNo = 0;

        cin>>iNo;

        Solution sobj;
        sobj.printNumber(iNo);

        return 0;
    }
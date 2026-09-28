/*
    You are given an integer n. Return the value of n! or n factorial.

Factorial of a number is the product of all positive integers less than or equal to that number.

Example 1:
Input: n = 2

Output: 2

Explanation: 2! = 1 * 2 = 2.

Example 2:
Input: n = 0

Output: 1

Explanation: 0! is defined as 1.
*/

#include<iostream>
using namespace std;

class Solution
{
    public :

    int Factorial(int iNo)
    {
        int Fact = 1;

        for(int i = iNo ; i>=1; i--)
        {
            Fact = Fact * i;
        }
        return Fact;
    }

};

int main()
{
    Solution sobj;
    int Value = 0;
    cin>>Value;

    int iRet = sobj.Factorial(Value);
    cout<<iRet;
    return 0;
}
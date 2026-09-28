/*
A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself. A divisor of an integer x is an integer that can divide x evenly.

Given an integer n, return true if n is a perfect number, otherwise return false.

 

Example 1:

Input: num = 28
Output: true
Explanation: 28 = 1 + 2 + 4 + 7 + 14
1, 2, 4, 7, and 14 are all divisors of 28.
Example 2:

Input: num = 7
Output: false
 

Constraints:

1 <= num <= 108
*/

#include<iostream>
using namespace std;

class Solution {
public:
    bool checkPerfectNumber(int num) 
    {
        if(num <0 && num > INT_MAX)
        {
            return false;
        }
        int checkPerfect = 0;

        for(int i = 1; i<= num/2; i++)
        {
            if(num % i == 0)
            {
                checkPerfect = checkPerfect + i;
            }
        }

        return num == checkPerfect;
        
    }
};

int main()
{
    Solution sobj;
    int Value = 0;
    cin>>Value;

    bool iRet = sobj.checkPerfectNumber(Value);
    if(iRet == true)
    {
        cout<<"It is Perfect Number";
    }
    else
    {
        cout<<"It is not Perfect number";
    }
    return 0;
}
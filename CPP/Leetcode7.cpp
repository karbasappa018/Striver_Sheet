/*
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
 

Constraints:

-2^31 <= x <= 2^31 - 1
*/

#include<iostream>
#include<climits>
using namespace std;

class Solution
{
    public:
    int iDigit = 0;
    int iReverse = 0;

    int reverse(int iNo)
    {
        while(iNo > 0)
        {
            iDigit = iNo % 10;

            if(iReverse > INT_MAX / 10 ||(iReverse == INT_MAX / 10 && iDigit > 7) )
            {
                return 0;
            }

            if(iReverse < INT_MIN / 10 || (iReverse == INT_MIN / 10 && iDigit < -8))
            {
                return 0;
            }

            iReverse = (iReverse * 10) + iDigit;
            iNo = iNo / 10;
        }

        return iReverse;
    }

};

int main()
{
    Solution sobj;
    int iValue = 0;
    cin>>iValue;
    int iRet = 0;
    iRet = sobj.reverse(iValue);
    cout<<iRet;
}
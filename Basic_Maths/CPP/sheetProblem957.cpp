/*
You are given an integer n. Return the largest digit present in the number.

Example 1:
Input: n = 25

Output: 5

Explanation: The largest digit in 25 is 5.

Example 2:
Input: n = 99

Output: 9

Explanation: The largest digit in 99 is 9.


*/
#include<iostream>
using namespace std;
class Solution
{
    public:

    int largestDigit(int iNo)
    {
        int iDigit = 0;
        int LargestDigit = 0;

        if(iNo < 0)
        {
            return 0;
        }
         
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(LargestDigit < iDigit)
            {
                LargestDigit = iDigit;
            }
            iNo = iNo / 10;
            
        }
        return LargestDigit;
    }

};

int  main()
{
    Solution sobj;
    int Value = 0;
    cin>> Value;
    int iRet = sobj.largestDigit(Value);
    cout<<iRet;
    return 0;
}
/*
 You are given an integer n. You need to check whether it is an armstrong number or not. Return true if it is an armstrong number, otherwise return false.

An armstrong number is a number which is equal to the sum of the digits of the number, raised to the power of the number of digits.

Example 1:
Input: n = 153

Output: true

Explanation: Number of digits : 3.

13 + 53 + 33 = 1 + 125 + 27 = 153.

Therefore, it is an Armstrong number.

Example 2:
Input: n = 12

Output: false

Explanation: Number of digits : 2.

12 + 22 = 1 + 4 = 5.

Therefore, it is not an Armstrong number.


*/

#include<iostream>
using namespace std;

class Solution
{
    public:
    bool checkArmStrong(int iNo)
    {
        int countDigit = 0;
        int OriginalNo = iNo;
        int CompareONo = iNo; 
        int ComputedNo = 0;


        while(iNo > 0)
        {
            int iDigit = iNo % 10;
            countDigit++;
            iNo = iNo/ 10;
        }

        while(OriginalNo > 0)
        {
            int iDigit = 0;
            iDigit = OriginalNo % 10;

            int performMult = 1;
            for(int i = 1; i<=countDigit; i++)
            {
                
                performMult = performMult * iDigit;
            }

            ComputedNo = ComputedNo + performMult;

            OriginalNo= OriginalNo/ 10;
        }

        return CompareONo == ComputedNo;
        
    }


};

int main()
{
    Solution sobj;
    int Value = 0;
    cin>>Value;

    bool iRet = sobj.checkArmStrong(Value);
    if(iRet == true)
    {
        cout<<"It is ArmStrong Number";
    }
    else
    {
        cout<<"It is not ArmStrong number";
    }
    return 0;
}
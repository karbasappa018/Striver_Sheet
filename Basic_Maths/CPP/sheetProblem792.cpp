/*
You are given two integers n1 and n2. You need find the Lowest Common Multiple (LCM) of the two given numbers. Return the LCM of the two numbers.

The Lowest Common Multiple (LCM) of two integers is the lowest positive integer that is divisible by both the integers.

Example 1:
Input: n1 = 4, n2 = 6

Output: 12

Explanation: 4 * 3 = 12, 6 * 2 = 12.

12 is the lowest integer that is divisible both 4 and 6.

Example 2:
Input: n1 = 3, n2 = 5

Output: 15

Explanation: 3 * 5 = 15, 5 * 3 = 15.

15 is the lowest integer that is divisible both 3 and 5.
*/

#include<iostream>
using namespace std;

class Solution
{
    public:

    int n1 = 0;
    int n2 = 0;
    int LCM = 0;
    int iNo = 0;

    Solution(int n1 ,int n2)
    {
        this->n1 = n1;
        this->n2 = n2;
    }

    void findLCM()
    {
        if(n1> n2)
        {
            iNo = n1;
        }
        else
        {
            iNo = n2;
        }

        for(int i= iNo;i<n1 * n2; i++)
        {
            if(i % n1 ==0 && i % n2==0)
            {
                LCM = i;
                break;
            }
        }

    cout<<"Lowest Common Multiple: "<<LCM;

    };

    
};

int main()
{
    int num1 = 0;
    int num2 = 0;
    cin>>num1;
    cin>>num2;
    Solution sobj(num1,num2);
    sobj.findLCM();
    return 0;
}



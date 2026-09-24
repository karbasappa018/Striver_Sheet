// For Loop

/*
    Given two integers low and high, return the sum of all integers from low to high inclusive.


    Example 1

    Input: low = 1, high = 5

    Output: 15

    Explanation: 1 + 2 + 3 + 4 + 5 = 15

    Example 2

    Input: low = 3, high = 7

    Output: 25

    Explanation: 3 + 4 + 5 + 6 + 7 = 25
*/


#include<iostream>
using namespace std;

class Solution {
public:
    int forLoop(int low, int high) 
    {
        int iSum = 0;

        for(int i = low; i<=high; i++)
        {
            iSum = iSum + i;
        }

        return iSum;
        
    }
};

int main()
{
    int low = 0;
    int high = 0;

    cin>>low;
    cin>>high;

    int iRet = 0;

    Solution sobj;
    iRet = sobj.forLoop(low, high);
    cout<<iRet;
    return 0;
}
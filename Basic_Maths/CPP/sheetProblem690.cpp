/*
You are given an integer n. You need to find all the divisors of n. Return all the divisors of n as an array or list in a sorted order.

A number which completely divides another number is called it's divisor.

Example 1:
Input: n = 6

Output = [1, 2, 3, 6]

Explanation: The divisors of 6 are 1, 2, 3, 6.

Example 2:
Input: n = 8

Output: [1, 2, 4, 8]

Explanation: The divisors of 8 are 1, 2, 4, 8.

Constraints:
1 <= n <= 1000
*/

#include<iostream>
#include<vector>
using namespace std;


class Solution
{
    public :
    vector<int> findDivisors(int iNo)
    {
        vector<int>brr;
        for(int i = 1; i<=iNo; i++)
        {
            if(iNo % i == 0)
            {
                brr.push_back(i);
            }
        }

        return brr;
    }

};

int main()
{
    int iValue= 0;
    cin>>iValue;
    vector<int> Arr;
    Solution sobj;
    Arr = sobj.findDivisors(iValue);

    for(int x : Arr)
    {
        cout<<x<<" ";
    }
    return 0;
}
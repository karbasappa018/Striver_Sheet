// While Loop

/*
    Given a digit d (0 to 9), find the sum of the first 50 positive integers (integers > 0) that end with digit d.



    A number ends with digit d if its last digit is d.


    Example 1

    Input: d = 1

    Output: 12300

    Explanation:

    The first 50 positive integers ending with 1 are: 1, 11, 21, 31, ..., 491

    Their sum is 12300.
*/

#include<iostream>
using namespace std;

class Solution {
    public:
    int whileLoop(int digit) 
    {
        int count = 0;
        int iSum = 0;
        int num = digit;
        while(count != 50)
        {
            iSum = iSum + digit;
            digit += 10; 
            count++;
        }
         
        return iSum;
    }
};

int main()
{
    int digit = 0;
    cin>>digit;
    int iRet = 0;
    Solution sobj;
    iRet = sobj.whileLoop(digit);
    cout<<iRet;
    return 0;

}
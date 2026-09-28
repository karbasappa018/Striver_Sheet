/*You are given two integers n1 and n2. You need find the Greatest Common Divisor (GCD) of the two given numbers. Return the GCD of the two numbers.

The Greatest Common Divisor (GCD) of two integers is the largest positive integer that divides both of the integers.

Example 1:
Input: n1 = 4, n2 = 6

Output: 2

Explanation: Divisors of n1 = 1, 2, 4, Divisors of n2 = 1, 2, 3, 6

Greatest Common divisor = 2.

Example 2:
Input: n1 = 9, n2 = 8

Output: 1

Explanation: Divisors of n1 = 1, 3, 9 Divisors of n2 = 1, 2, 4, 8.

Greatest Common divisor = 1.

Constraints:
1 <= n1, n2 <= 1000

*/

#include<iostream>
using namespace std;

class Solution
{
    public:

    int n1 = 0;
    int n2 = 0;
    int GCD = 0;
    int iNo = 0;

    Solution(int n1 ,int n2)
    {
        this->n1 = n1;
        this->n2 = n2;
    }

    void findGCD()
    {
        if(n1> n2)
        {
            iNo = n1;
        }
        else
        {
            iNo = n2;
        }

        for(int i= 1; i<=iNo; i++)
        {
            if(n1 % i ==0 && n2 % i==0)
            {
                GCD = i;
            }
        }

    cout<<"Greatest Comman Factor: "<<GCD;

    };

    
};

int main()
{
    int num1 = 0;
    int num2 = 0;
    cin>>num1;
    cin>>num2;
    Solution sobj(num1,num2);
    sobj.findGCD();
    return 0;
}



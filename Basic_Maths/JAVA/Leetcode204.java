/*
    Given an integer n, return the number of prime numbers that are strictly less than n.

Example 1:

Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
Example 2:

Input: n = 0
Output: 0
Example 3:

Input: n = 1
Output: 0
 

Constraints:

0 <= n <= 5 * 106

*/
import java.util.Scanner;
import java.util.Arrays;
class Solution
{
    public int countPrimes(int iNo)
    {
        if(iNo < 0  || iNo <= 2)
        {
            return 0;
        }

        boolean[] isPrime = new boolean[iNo];

        Arrays.fill(isPrime,true);
        isPrime[0] = false;
        isPrime[1]= false;

        for(int i = 4; i<iNo; i+=2)
        {
            isPrime[i] = false;
        }

        for(int i = 3; i<iNo; i+=2)
        {
            if(isPrime[i])
            {
                for(int j=i*i; j<iNo; j+=i*2)
                {
                    isPrime[j] = false;
                }
            }
        }

        int iCount = 0;
        for(int i = 2; i<iNo; i++)
        {
            if(isPrime[i])
            {
                iCount++;
            }
        }

        return iCount;


    }

}

class Leetcode204
{
    public static void main(String a[])
    {
        Solution sobj = new Solution();
        Scanner ssobj = new Scanner(System.in);


        int iValue = 0;
        iValue = ssobj.nextInt();
        int iRet = 0;
        iRet = sobj.countPrimes(iValue);
        System.out.println(iRet);
    }
}
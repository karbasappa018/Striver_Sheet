#include<iostream>
// #include<climits>
#include<vector>
using namespace std;


class Solution {
    public :
    
    int countPrimes(int iNo)
    {
        if(iNo<=2)
        {
            return 0;
        }

        vector<bool> isPrime(iNo, true);

        isPrime[0] = false;
        isPrime[1] = false;

        for(int i =4; i<iNo; i+=2)
        {
            isPrime[i] = false;
        }


        for(int i= 3; 1LL*i*i<iNo; i+=2 )
        {
            if(isPrime[i])
            {
                for(int j = i*i; j<iNo; j+=2*i)
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

};

int main()
{
     Solution sobj;
    int iValue = 0;
    cin>>iValue;

    int iRet = sobj.countPrimes(iValue);
    cout<<iRet;
    
    
}
#include<iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x< 0)
        {
            return false;
        }

        if(x % 10 == 0 && x!= 0)
        {
            return false;
        }

        int iReverse = 0;

        while(x > iReverse )
        {

            int iDigit = x % 10; 
            iReverse = (iReverse * 10) + iDigit ;
            x = x/ 10;
        }

        return x == iReverse || x==iReverse/10;
        
    }
};

int main()
{
    Solution sobj;
    int iValue = 0;
    cin>>iValue;

    bool iRet = sobj.isPalindrome(iValue);
    
    if(iRet == true)
    {
        cout<<"given number is palindrome"<<"\n";

    }
    else
    {
        cout<<"given number is not palindrome"<<"\n";
    }
}
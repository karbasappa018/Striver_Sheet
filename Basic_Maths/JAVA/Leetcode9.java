import java.util.Scanner;

class Solution {
    public boolean isPalindrome(int x)
    {
        int Palin = 0;
        int iDigit = 0;

        if(x < 0)
           {
            return false;
           }

           if(x% 10 == 0 && x != 0)
           {
            return false;
           }
        
        while(x > Palin)
        {
           

            iDigit = x% 10;
            Palin = (Palin * 10) + iDigit;
            x= x/10;
            
        }

       return x == Palin || x == Palin / 10;
       
        
    }
}

class Leetcode9
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        Solution soobj = new Solution();
        int No = 0;
        No = sobj.nextInt();
        boolean bRet = soobj.isPalindrome(No);
        System.out.println(bRet);
    }
}

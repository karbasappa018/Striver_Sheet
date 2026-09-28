import java.util.Scanner;

class Solution {
    public boolean checkPerfectNumber(int num) 
    {
        if(num <0 && num > Integer.MAX_VALUE)
        {
            return false;
        }
        int checkPerfect = 0;

        for(int i = 1; i<= num/2; i++)
        {
            if(num % i == 0)
            {
                checkPerfect = checkPerfect + i;
            }
        }

        return num == checkPerfect;
        
    }
}

class Leetcode507 
{
     public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        Solution soobj = new Solution();
        int No = 0;
        No = sobj.nextInt();
        boolean bRet = soobj.checkPerfectNumber(No);
        
        if(bRet == true)
        {
            System.out.println("It is perfect Number");

        }
        else
        {
            System.out.println("It is not perfect number");
        }
    }
}

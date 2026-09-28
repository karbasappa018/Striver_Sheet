import java.util.Scanner;

class Solution
{
    public int reverse(int iNo)
    {
        int iDigit = 0;
        int iReverse = 0;

        while(iNo > 0)
        {
            iDigit = iNo % 10;

            if(iReverse > Integer.MAX_VALUE / 10 || iReverse == Integer.MAX_VALUE / 10 && iDigit > 7 )
            {
                return 0;
            }

            if(iReverse < Integer.MIN_VALUE / 10 || iReverse == Integer.MIN_VALUE / 10 && iDigit < -8)
            {
                return 0;
            }

            iReverse = (iReverse * 10) + iDigit;
            iNo = iNo / 10; 
            

        }

        return iReverse;
    }

}

class Leetcode7
{
    public static void main(String a[])
    {
        Solution sobj = new Solution();
        Scanner ssobj = new Scanner(System.in);
        int iValue = 0;
        iValue = ssobj.nextInt();
        int iRet = 0;
        iRet = sobj.reverse(iValue);

        System.out.println(iRet);
    }
}
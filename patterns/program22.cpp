/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5


Print the pattern in the function given to you.



*/

#include<iostream>
using namespace std;

void DisplayPattern1(int iNo)
{

    for(int i = 1; i<iNo*2; i++)
    {
          for(int j = 1; j<iNo*2; j++)
          {
               if(i==1 || j==1 || i== 9 || j== 9)
               {
                    cout<<"5";
               }
               else if( i==2 || j==2 || i==8 || j== 8)
               {
                    cout<<"4";
               }
               else if(i == 3|| j == 3 || i== 7 || j== 7)
               {
                    cout<<"3";
               }
               else if(i==4 || j== 4 || i == 6 || j == 6)
               {
                    cout<<"2";
               }
               else
               {
                    cout<<"1";
               }
          }

          cout<<"\n";
         
    }
    
    
}

int main()
{
    int iNo = 0;
   

    cout<<"Enter the number \n";
    cin>>iNo;

    

    DisplayPattern1(iNo);
    

}
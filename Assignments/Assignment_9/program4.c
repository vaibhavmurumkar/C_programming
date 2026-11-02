/*
write a program to find odd factorial of given number 
 input: 5
 output: 15 (5*3*1)

 input : -5
 output: 15  (5*3*1)

*/

#include<stdio.h>
 
int Oddfactorial(int iNo)
{
    
    int iCnt=0;
    int iFact=1;
   

    if(iNo < 0)
    {
       iNo = -iNo;
    }

    for(iCnt= iNo;iCnt>=2; iCnt--)
    {
        if(iCnt % 2 != 0)
        {
            iFact = iFact * iCnt;
        }
    }
     return iFact;
      
}

int main()
{ 
    int iValue=0, iRet=0;

   printf("Enter Number: \n");
    scanf("%d",&iValue);

      iRet= Oddfactorial(iValue);

      printf("Even Factorial of number is %d",iRet);
    return 0;
}
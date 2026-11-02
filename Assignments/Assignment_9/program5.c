/*
write a program which returns difference between even factorial and odd factorial
 input: 5
 output: -7 (8 - 15)

 input : -5
 output: -7 (8 - 15)

*/

#include<stdio.h>
 
int factorialDiff(int iNo)
{
    
    int iCnt=0;
    int iEvenFact=1;
    int iOddFact=1;
   

    if(iNo < 0)
    {
       iNo = -iNo;
    }

    for(iCnt= iNo;iCnt>=1; iCnt--)
    {
        if(iCnt % 2 == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }
     return iEvenFact - iOddFact;
      
}

int main()
{ 
    int iValue=0, iRet=0;

   printf("Enter Number: \n");
    scanf("%d",&iValue);

      iRet= factorialDiff(iValue);

      printf(" Factorial difference is  %d",iRet);
    return 0;
}
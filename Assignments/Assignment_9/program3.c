/*
write a program to find odd factorial of given number
 input: 5
 output: 8 (4*2)

 input : -5
 output: 8   (4*2)

*/

#include<stdio.h>
 
int Evenfactorial(int iNo)
{
    
    int iCnt=0;
    int iFact=1;
   

    if(iNo < 0)
    {
       iNo = -iNo;
    }

    for(iCnt= iNo;iCnt>=2; iCnt--)
    {
        if(iCnt % 2 == 0)
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

      iRet= Evenfactorial(iValue);

      printf("Even Factorial of number is %d",iRet);
    return 0;
}
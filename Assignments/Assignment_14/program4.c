/*
 write the program which accept number from user and return summation of all its non factors.
 input:12
 ouput:  50

 input:10
 ouput:  37   


*/

#include<stdio.h>
#include<stdlib.h>

int SumNon(int iNo)
{
  
    int iCnt=0;
    int iSum=0;

    for(iCnt=1; iCnt< iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
           iSum = iSum + iCnt;
        }
    }
     return iSum;
    
    }

int main()
{
    int iValue=0; 
    int iRet=0;
  

     printf("Enter Number:");
     scanf("%d", &iValue);

    iRet= SumNon(iValue);

    printf("%d",iRet);

 
    return 0;
}


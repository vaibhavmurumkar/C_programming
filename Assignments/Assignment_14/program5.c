/*
 write the program which accept number from user and return Difference between summation of all its factors and non factors.
 input:12
 ouput:  -34

 input:10
 ouput:     


*/

#include<stdio.h>
#include<stdlib.h>

int FactDiff(int iNo)
{
  
    int iCnt=0;
    int iSumFact=0;
    int iNonFact=0;

    for(iCnt=1; iCnt< iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
           iNonFact = iNonFact + iCnt;
        }
        else
        {
            iSumFact = iSumFact + iCnt;
        }
    }
     return iNonFact - iSumFact;
    
    }

int main()
{
    int iValue=0; 
    int iRet=0;
  

     printf("Enter Number:");
     scanf("%d", &iValue);

    iRet= FactDiff(iValue);

    printf("%d",iRet);

 
    return 0;
}


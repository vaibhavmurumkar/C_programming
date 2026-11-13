/*
 write the program which accept number from user and display its multiplication of factors.
 input:12
 ouput:  144   (1*2*3*4*6)

 input:13
 ouput:  1   (1)


*/

#include<stdio.h>
#include<stdlib.h>

int  MultiFact(int iNo)
{
    int iMulti=1;
    int iCnt=0;

    for(iCnt=1; iCnt<iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMulti = iMulti* iCnt;
        }
    }
     return iMulti;
    }

int main()
{
    int iValue=0; 
    int iRet=0;

     printf("Enter Number:");
     scanf("%d", &iValue);

  iRet= MultiFact(iValue);

  printf("Multiplication of factors is :%d",iRet);
  
    return 0;
}


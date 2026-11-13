/*
 write the program which accept number from user and display its of factors in decreasing order.
 input:12
 ouput:  6 4 3 2 1

 input:13
 ouput:  1   


*/

#include<stdio.h>
#include<stdlib.h>

int  FactRev(int iNo)
{
  
    int iCnt=0;

    for(iCnt=iNo; iCnt>=1; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\n",iCnt);
        }
    }
    
    }

int main()
{
    int iValue=0; 
  

     printf("Enter Number:");
     scanf("%d", &iValue);

     FactRev(iValue);

 
    return 0;
}


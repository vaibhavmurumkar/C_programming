/*
 write the program which accept number from user and display all its Non factors .
 input:12
 ouput:  5 7 8 9 10 11

 input:10
 ouput:  3 4 6 7 8 9   


*/

#include<stdio.h>
#include<stdlib.h>

void NonFact(int iNo)
{
  
    int iCnt=0;

    for(iCnt=1; iCnt< iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
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

     NonFact(iValue);

 
    return 0;
}


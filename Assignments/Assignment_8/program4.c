/*
write a program which accept number from user and display its table in reverse order
 input: 2
 output: 20 18 16 14 12 10 8 6 4 2

*/

#include<stdio.h>
 
void Table(int iNo)
{
    
    int iCnt=0;

    if(iNo < 0)
    {
       iNo = -iNo;
    }

     for(iCnt=10;iCnt >= 1;iCnt--)
     {
        printf("%d\t",iNo * iCnt);
     }
    
}

int main()
{ 
    int iValue=0; 

   printf("Enter Number: \n");
    scanf("%d",&iValue);

       Table(iValue);
    return 0;
}
// write a program which accepts N from user and print all even numbers up to N
// input: 18  output : 2 4 6 8 10 12 14 16 18

#include<stdio.h>
#include<stdlib.h>

void OddDisplay(int iNo)
{
int iCnt=0;


for( iCnt=1; iCnt<=iNo; iCnt++)
{
    
    if(iCnt % 2==0)
    {
        printf("%d ",iCnt);
   
    }  
}
}

int main()
{
    int iValue=0;
    
    printf("Enter number: ");
    scanf("%d",&iValue);

   OddDisplay (iValue);
    return EXIT_SUCCESS;
}

// write a program which accepts N and print first 5 multiples to N
// input: 4  output :  4 8 12 16 20

#include<stdio.h>
#include<stdlib.h>

void MultiplyDisplay(int iNo)
{
int iCnt=0;
for( iCnt=1; iCnt<=5; iCnt++)
{
    printf(" %d",iNo*iCnt); // 4+4......
}
}

int main()
{
    int iValue=0;
    
    printf("Enter number: ");
    scanf("%d",&iValue);

   MultiplyDisplay (iValue);
    return EXIT_SUCCESS;
}

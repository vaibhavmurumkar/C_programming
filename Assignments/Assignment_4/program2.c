//check Even or Odd number

#include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd(int iValue)
{
    if(iValue % 2 ==0)
    {
        printf("Even Number");
    }
     else
     {
        printf("odd Number");
     }
}

int main()
{
    int iValue=0;

    printf("Enter a Number: ");
    scanf("%d\n",&iValue);
       
    CheckEvenOdd(iValue);
    return EXIT_SUCCESS;
}
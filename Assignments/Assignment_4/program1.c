//Check Whether a Number is Positive or negative

#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iValue)
{
    if(iValue > 0)
    {
        printf("positive Number\n");
    }
     else if(iValue < 0)
    {
         printf("negative Number\n");
    }
     else
     {
        printf("zero\n");
     }
}

int main()
{
    int iValue=0;

    printf("Enter a number: ");
    scanf("%d\n",&iValue);

    CheckNumber(iValue);
    return EXIT_SUCCESS;
}
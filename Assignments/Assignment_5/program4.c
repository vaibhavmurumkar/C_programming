// check leep year

#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{
    if(iYear % 400 == 0)
    {
        printf("Leap year\n");
    }
    else if (iYear % 100 == 0)
    {
        printf("Not a Leap Year\n");
    }
     else if(iYear % 4 == 0)
     {
       printf("Leap year\n");
     }
      else
      {
        printf("Not a Leap Year\n");
      }
}

int main()
{
    int iYear=0;

    printf("Enter leap Year: ");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}
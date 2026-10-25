//find greater of two numbers
#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iFirst, int iSecond)
{
    if (iFirst > iSecond)
    {
        printf("Greater number is %d\n",iFirst);
    }
     else if(iFirst < iSecond)
     {
        printf("Greater Number is %d\n",iSecond);
     }
      else
      {
        printf("Both Numbers Equals");
      }
}

int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Enter two Number: ");
    scanf("%d %d",&iValue1,&iValue2);

    FindGreater(iValue1,iValue2);
    return EXIT_SUCCESS;
}
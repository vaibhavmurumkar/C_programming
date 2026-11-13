/*
 write the program whitch accept range frome user and display all number in between

 input:23 35
 ouput: 23 24 25 26 27 28 29 30 31 32 33 34 35

*/
#include<stdio.h>


void RnageDisplay(int iStart, int iEnd)
{
    int iCnt=0;
    if(iStart > iEnd)
    {
        printf("Invalid Range");

    }
      else
      {
        for(iCnt= iStart; iCnt <= iEnd; iCnt++)
        {
            printf("%d\n",iCnt);
        }
      }
}

int main()
{ 
    int iValue1=0;
    int iValue2=0;

    printf("Enter Starting point: ");
    scanf("%d",&iValue1);

    printf("Enter Ending point: ");
    scanf("%d",&iValue2);

    RnageDisplay(iValue1,iValue2);
    return 0;

}

/*
 write the program whitch accept range from user and display all even numbers in between that range
 input:23 25
 ouput:  24  26  28  30  32  34 

*/
#include<stdio.h>


void RnageDisplay(int iStart, int iEnd)
{
   
    
    int iCnt=0;
    if(iStart > iEnd)
    {
        printf("invalid range");
    }
    
      else
      {
        for(iCnt=iStart; iCnt <= iEnd; iCnt++)
        {
           if(iCnt % 2== 0)
    {
         printf("%d\n",iCnt);

    }
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

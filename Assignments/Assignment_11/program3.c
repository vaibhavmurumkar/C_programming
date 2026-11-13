/*
 write the program whitch accept range from user and display all even numbers in between that range
 input:23 25
 ouput:  24  26  28  30  32  34 

*/
#include<stdio.h>


int RangeDisplay(int iStart, int iEnd)
{
   
    int iCnt=0;
    int iSum=0;
    if( iStart < 0 ||iStart > iEnd )
    {
       return -1;
    }
    
     for(iCnt=iStart; iCnt <= iEnd; iCnt++)
        {
          iSum= iSum + iCnt;
        }
        return iSum;

}


int main()
{ 
    int iValue1=0;
    int iValue2=0;
    int iRet=0;

    printf("Enter Starting point: ");
    scanf("%d",&iValue1);

    printf("Enter Ending point: ");
    scanf("%d",&iValue2);

    iRet=RangeDisplay(iValue1,iValue2);
     printf("Addition is %d",iRet);

    return 0;

}

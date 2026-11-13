/*
 write the program whitch accept range from user and return addition of all even numbers in between that range .(Range should contains positive nymbers only)
 input:23 30
 ouput:  108


*/

#include<stdio.h>
#include<stdlib.h>

int DisplayRangeSum(int iStart,int iEnd)
{
    int iCnt=0 , iSum=0;

    if(iStart <=0 || iEnd <=0 || iStart > iEnd)
    {
        printf("Invalid Range");
        exit(0);
    }

    for(iCnt=iStart ; iCnt<=iEnd ; iCnt++)
    {
        if(iCnt % 2==0)
        {
            iSum = iSum + iCnt;
        }
    }
      return iSum;
}


int main()
{
    int iValue1=0, iValue2=0 , iRet=0;

    printf(" Enter Starting point: ");
    scanf("%d", &iValue1);

     printf(" Enter Ending point: ");
     scanf("%d", &iValue2);

     iRet= DisplayRangeSum(iValue1,iValue2);

     printf("Addition is %d",iRet);

    return EXIT_SUCCESS;
}
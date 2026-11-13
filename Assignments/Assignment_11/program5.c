/*
 write the program whitch accept range from user and return addition of all even numbers in between that range .(Range should contains positive nymbers only)
 input:23 30
 ouput:  108


*/

#include<stdio.h>
#include<stdlib.h>

void DisplayRangeSum(int iStart,int iEnd)
{
    int iCnt=0 ;

    if( iStart > iEnd)

    {

        printf("Invalid Range");
        exit(0);
    }

    for(iCnt=iEnd ; iCnt>=iStart ; iCnt--)
   
      {
           printf("%d\t", iCnt);
          }   
        } 



int main()
{
    int iValue1=0, iValue2=0 ;

    printf(" Enter Starting point: ");
    scanf("%d", &iValue1);

     printf(" Enter Ending point: ");
     scanf("%d", &iValue2);

   DisplayRangeSum(iValue1, iValue2);
    return EXIT_SUCCESS;
}
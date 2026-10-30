//write a program which accept number from user and print that number of $ & *
// input: 5
// output: $ * $ * $ * $ * $ * 

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
int iCnt=0;
if(iNo<0)
{
    iNo=-iNo;
}
for( iCnt=1; iCnt<=(iNo*2); iCnt++)
{
    if(iCnt % 2!=0)
    {
        printf("$\t");
    }
    else
    {
        printf("*\t");
    }
}
}

int main()
{
    int iValue=0;
    
    printf("Enter number: ");
    scanf("%d",&iValue);

    Pattern(iValue);
    return EXIT_SUCCESS;
}
/////////////////////////////
//
//
//        if(iNo<0)
 //      {               ya logic mul - chi value + hote .ex= -3 tr value 3 honar
 //        iNo=-iNo;
//       }
//
///
/////////////////////////////
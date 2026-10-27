// find the greatest of three numbers 

#include<stdio.h>
#include<stdlib.h>

void CheckGreatest(int ifirst,int isecond,int ithird)
{
    if(ifirst>= isecond && ifirst>=ithird)
    {
        printf(" %d is Greatest \n",ifirst);
    }
    else if (isecond>=ifirst && isecond>=ithird)
    {
        printf("%d is Greatest \n",isecond);
    }
     else
     {
       printf("%d is Greatest \n",ithird);
     }
}

int main()
{
    int iValue1=0,iValue2=0,iValue3=0;

    printf("Enter three Number: ");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    CheckGreatest(iValue1,iValue2,iValue3);
    return EXIT_SUCCESS;
}
/*
 write the program which accept number from user and check wthether it contains 0
 input:2395 
 ouput:  there is no Zero


*/

#include<stdio.h>
 #define TRUE 1
 #define FALSE   0

 typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit=0;

    while(iNo != 0)
    {
        iDigit = iNo %  10;

        if (iDigit == 0)
       
        {
            break;
        }
         iNo = iNo / 10;
    }
    
     if(iDigit == 0)
     {
        return TRUE;
     } 
     else
     {
        return FALSE;
     }

}

int main()
{
    int iValue=0; 
    BOOL bRet= FALSE;

     printf("Enter Number:");
     scanf("%d", &iValue);

     bRet = ChkZero(iValue);

     if(bRet == TRUE)
     {
        printf("It Contains Zero");
     }
     else
     {
        printf("There is no zero");
     }
      return 0;
    }



/*
 write the program which accept number from user and return count of Digits in between 3 And 7.
 input:2395 
 ouput:  1

 input:1018 
 ouput:  0


*/

#include<stdio.h>
#include<stdlib.h>

int  MultDigits(int iNo)
{
    int iDigit=0;
    int iCount=0;

    if(iNo < 0)
    {
        iNo= -iNo;
    }
   
    while(iNo != 0)
   
      {
           iDigit = iNo % 10;

           if(iDigit > 3 && iDigit < 7 )
           {
            iCount++;
           }
            iNo = iNo / 10;
          
          }   
          return iCount;
        } 



int main()
{
    int iValue=0; 
    int iRet=0;

     printf("Enter Number:");
     scanf("%d", &iValue);

  iRet= MultiDigits(iValue);

  printf("%d",iRet);
    return 0;
}


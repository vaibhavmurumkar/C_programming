/*
 write the program which accept number from user and return Multiplication of all digits.
 input:2395 
 ouput:  270

 input:1018 
 ouput:  8


*/

#include<stdio.h>
#include<stdlib.h>

int  MultDigits(int iNo)
{
    int iMult=1;
    int iDigit=0;

   
   
    while(iNo != 0)
   
      {
           iDigit = iNo % 10;

           if(iDigit != 0 )
           {
            iMult= iMult * iDigit;
           }
            iNo = iNo / 10;
          
          }   
          return iMult;
        } 



int main()
{
    int iValue=0; 
    int iRet=0;

     printf("Enter Number:");
     scanf("%d", &iValue);

  iRet= MultDigits(iValue);

  printf("Multiplication : %d",iRet);
    return 0;
}


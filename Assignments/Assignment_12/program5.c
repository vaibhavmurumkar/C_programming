/*
 write the program which accept number from user and count frequency of 4 in it.
 input:2395 
 ouput:  0

 input:1018 
 ouput:  0


*/

#include<stdio.h>
#include<stdlib.h>

int  Count(int iNo)
{
    int iDigit=0;
    int iCount=0;
   
    while(iNo != 0)
   
      {
           iDigit = iNo % 10;

           if(iDigit < 6)
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

  iRet= Count(iValue);

  printf("Count of digits less than 6 is :%d",iRet);
    return 0;
}


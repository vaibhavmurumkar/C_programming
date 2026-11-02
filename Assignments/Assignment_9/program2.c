/*
Accept amount is US dollar and return its corresponding value in indian currency consider 1$ as 70 rupees
input:1 
output:70 

 input : 10
 output: 700

*/

#include<stdio.h>
 
int DollarToINR(int iNo)
{
    int iRupees =0;
    
    iRupees=iNo * 70;
    return iRupees;
}

int main()
{ 
    int iValue=0, iRet=0; 

   printf("Enter Number: \n");
    scanf("%d",&iValue);
  iRet= DollarToINR(iValue);

  printf("value in INR is :%d\n",iRet);
    return 0;
}
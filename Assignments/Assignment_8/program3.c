/*
write a program which accept number from user and display its table
 
inpt: 2
output: 2 4 6 8 10  12 14 16 18 20

input : -5
output: 5 10 15 20 25 30 35 40 45 50
*/

#include<stdio.h>
 
void Table(int iNo)
{
    
    int iCnt=0;

    if(iNo < 0)
    {
       iNo = -iNo;
    }

     for(iCnt=1;iCnt <= 10;iCnt++)
     {
        printf("%d\t",iNo * iCnt);
     }
    
}

int main()
{ 
    int iValue=0; 

   printf("Enter Number: \n");
    scanf("%d",&iValue);

       Table(iValue);
    return 0;
}
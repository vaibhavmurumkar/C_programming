/*
   Write a program which accept area in square feet and convert it into square metere.

    ( 1 square feet = o.0929 square metere)

    input:5
    output: 0.464515
 */ 

   #include<stdio.h>
    
   double SquareMeter(int iValue)
   {
     double dMeter=0.0;

      dMeter= iValue * 0.0929;

     return dMeter;

   }

   int main()
   {
    int iValue=0.;
    double dRet=0.0;
    
    printf("Enter Area in square feet: ");
    scanf("%d",&iValue);

      
    dRet= SquareMeter(iValue);
    printf(" Area in Square feet is %lf :",dRet);
    return 0;

   }
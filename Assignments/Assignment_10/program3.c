/*
   Write a program which accept distance in kilometre and convert it into meter
   (1 kilometre=1000 meter) 
    ( Area = width* height)
   input:5
   output: 5000
 */ 

   #include<stdio.h>

    
   int  KMtoMeter(int iNo)
   {
     int imeter=0;
     imeter= iNo *1000;
     return imeter;
     

   }

   int main()
   {
    int iValue=0;
    int iRet=0;

    printf("Enter Distance: ");
    scanf("%d",&iValue);
      
    iRet=KMtoMeter(iValue);
    printf("Distance in metre is %d :",iRet);
    return 0;

   }
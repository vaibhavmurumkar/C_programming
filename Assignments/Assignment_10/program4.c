/*
   Write a program which accept tempreature in fahrenheit and Convert it into celsius
    ( 1 celsius = (fahrenheit -32)*(5/9))
   input:10
   output: -12.2222  (10-32)* (5/9)
 */ 

   #include<stdio.h>
    
   double FhtoCs(float fTemp)
   {
     
     double dCelsius= 0.0;
     
     dCelsius = (fTemp-32)*(5.0/9.0);

     return dCelsius;

   }

   int main()
   {
    float fValue=0.0f;
    double dRet=0.0;
    
    printf("Enter temperature in fahrenheit: ");
    scanf("%f",&fValue);

      
    dRet= FhtoCs(fValue);
    printf("temperature in celsius is %lf :",dRet);
    return 0;

   }
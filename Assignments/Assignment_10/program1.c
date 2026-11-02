/*
   Write a program which accept radius of circlr from user and calculate its area. Consider value of PI as 3.14(Area= PI*radius*radius)

   input:5.3
   output: 88.2026
   */ 

   #include<stdio.h>
    
   double CircleArea(float fRadius)
   {
     
     double dArea= 0.0;

     dArea= 3.14 * fRadius * fRadius;

     return dArea;

   }

   int main()
   {
    float fValue=0.0f;
    double dRet=0.0;

    printf("Enter radius: \n");
    scanf("%f",&fValue);
      
    dRet= CircleArea(fValue);
    printf("Area of Circle is%lf :",dRet);
    return 0;

   }
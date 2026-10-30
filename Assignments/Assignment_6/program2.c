#include<stdio.h>
#include<stdlib.h>

void CheckAddmision(float fmarks,int iAge)
{
    if(fmarks > 100 || iAge<0 || fmarks< 0)
    {
        printf("Invalid Input\n");
    }
     else if(fmarks>=60 && iAge>=17)
     {
        printf("Eligibale for Admission\n");
     }
      else
      {
        printf("Not Eligible\n");
      }
}
int main()
{
    int iAge=0;
    float fmarks=0.0f;

    printf("Enter marks And Age :");
    scanf("%f %d",&fmarks,&iAge);

    CheckAddmision(fmarks,iAge);

    return EXIT_SUCCESS;
}

// 75 18=eligibale karan 60 peksha jastha markas aani age pn 17 peksha jastha
// 55 19 not eligible
//80 16 not eligible
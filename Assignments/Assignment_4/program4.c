// check vothing Eligibility

#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if( iAge >= 18)
    {
        printf("Eligible for voting \n");
    }
     else if (iAge >=0 )
     {
        printf("Not Eligible for voting \n");
     }
     else
     {
        printf("Invalid Age \n");
     }

}
  

int main()
{
    int iAge=0;
    
    printf("Enter your age :");
    scanf("%d",&iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}
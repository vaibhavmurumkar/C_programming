#include <stdio.h>

#include <stdlib.h>

void CalculateBonus(float fSalary, int iYears)

{

   float fBonus =0.0f;
    if (fSalary <=0 || iYears < 0)
    {
        printf("invalid inputs");
    }
     else if (iYears >10)
     {
        fBonus= fSalary * 15/100;
        printf("Bonus=%.2f\n",fBonus);
     }
     else if (iYears >=5)
     {
        fBonus = fSalary * 10/100;
        printf("Bonus= %.2f\n",fBonus);
     }
     else
     {
        fBonus = fSalary * 5/100;
        printf("Bonus= %.2f\n",fBonus);
     }

}


int main()

{

   float fSalary = 0.0f;
   int iYears= 0;



    printf("Enter monthly Salary: ");
    scanf(" %f", &fSalary);

    printf("Enter years of service: ");
    scanf(" %d", &iYears);
    

CalculateBonus(fSalary, iYears);

return EXIT_SUCCESS;
}

//Input: 30000 12 Bonus = 4500.00jar 10 year peksha jastha experense asel tr 15% discount

//Input: 20000 7- Bonus 2000.00jar 5kiva tya   peksha jastha experense asel tr 10% discount

//Input: 10000 2→ Bonus 500.00 jar 5 peksha kami year  experense asel tr 5% discount
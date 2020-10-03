#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 25000


int main()
{
    srand(time(NULL));
    double x[SIZE];
    double sum=0.0;
    double gjennomsnitt=0.0;
    double kontroll_1=0.0,kontroll_2=0, prosent;

    unsigned long i=0,j=0;

    for (i=0;i<SIZE;i++)
    {
        x[i] = (rand()%10001)/100.0;
        //printf("%.2f\t",x[i]);
        sum = sum + x[i];

    }
    gjennomsnitt = sum/(double)i;
    //printf("\n\n%.2f\n",gjennomsnitt);

    //Regner +-10% av gjennomsnittet
    prosent = gjennomsnitt*(0.10);
    kontroll_1 = gjennomsnitt+prosent;
    kontroll_2 = gjennomsnitt-prosent;
    //printf("\n%.2f og %.2f \n",kontroll_2,kontroll_1);

    //Sjekker om tallene i arrayet er innenfor prosent grensen
    for (i=0;i<SIZE;i++)
    {
        if (x[i]<=kontroll_1 && x[i]>=kontroll_2)
            {
                //printf("\n\ntallet %.2f\n\n",x[i]);
                j++;
            }
    }

    printf("\n\n%d tall i arrayet ligger +-10 av gjennomsnittet\n\n",j);



    return 0;
}

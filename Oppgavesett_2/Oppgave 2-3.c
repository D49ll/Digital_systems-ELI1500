#include <stdio.h>

int main()
{
    float poeng=0;
    float input;
    float gjennomsnitt;
    int antall;

    for (antall=1; antall<=10; antall++)
        {
        printf("Les inn poengsum for pr\233ven: ");
        scanf("%f",&input);
        poeng = (poeng+input); // kan skrives poeng += input, samme funksjon
        gjennomsnitt = poeng/((float)antall);
        }

    if (gjennomsnitt<=39)
    {
        printf("Gjennomsnittet til studenten er %.2f\n",gjennomsnitt);
        printf("\nDette tilsvarer karakteren F\n");
    }
    else if (gjennomsnitt<50 && gjennomsnitt>=40)
    {
        printf("Gjennomsnittet til studenten er %.2f\n",gjennomsnitt);
        printf("\nDette tilsvarer karakteren E\n");
    }
    else if (gjennomsnitt<60 && gjennomsnitt>=50)
    {
        printf("Gjennomsnittet til studenten er %.2f\n",gjennomsnitt);
        printf("\nDette tilsvarer karakteren D\n");
    }
    else if (gjennomsnitt<80 && gjennomsnitt >=60)
    {
        printf("Gjennomsnittet til studenten er %.2f\n",gjennomsnitt);
        printf("\nDette tilsvarer karakteren C\n");
    }
    else if (gjennomsnitt<90 && gjennomsnitt >=80)
    {
        printf("Gjennomsnittet til studenten er %.2f\n",gjennomsnitt);
        printf("\nDette tilsvarer karakteren B\n");
    }
    else if (gjennomsnitt<=100 && gjennomsnitt >=90)
    {
        printf("Gjennomsnittet til studenten er %.2f\n",gjennomsnitt);
        printf("\nDette tilsvarer karakteren A\n");
    }
    else
    {
        printf("Verdien du har tastet stemmer ikke\n");
        printf("%.2f",gjennomsnitt);
    }
    return 0;


}

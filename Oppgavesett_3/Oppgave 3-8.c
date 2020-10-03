#include <stdio.h>

int stjerner(int b);

int main()
{
    int b;


    printf("Hvor mange rader/kolonner stjerner \233nsker du?\n");
    scanf("%d",&b);
    printf("\n");
    stjerner(b);

    return 0;

}


int stjerner(int b)
 {
     int a; // første løkke
     int c; // antall ganger * printes for hver linje

     for (a=1;a<=b;a++) // denne for løkken vil kjøre så mangen ganger som b er.
     {
         for (c=1;c<=a;c++) // denne løkken printer ut *, antall stjerner blir bestemt av a.
         {
             printf("*");
         }
         printf("\n");
     }
     return 0;
 }

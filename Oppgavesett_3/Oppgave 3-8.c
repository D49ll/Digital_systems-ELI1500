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
     int a; // f�rste l�kke
     int c; // antall ganger * printes for hver linje

     for (a=1;a<=b;a++) // denne for l�kken vil kj�re s� mangen ganger som b er.
     {
         for (c=1;c<=a;c++) // denne l�kken printer ut *, antall stjerner blir bestemt av a.
         {
             printf("*");
         }
         printf("\n");
     }
     return 0;
 }

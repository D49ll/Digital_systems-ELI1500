
#include <stdio.h>
#include <stdlib.h>

int main()
 {
     int a; // f�rste l�kke
     int b; // antall ganger l�kke skal kj�res
     int c; // antall ganger * printes for hver linje

     printf("Hvor mange linjer \233nsker du aa printe?\n");
     scanf("%d",&b);

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

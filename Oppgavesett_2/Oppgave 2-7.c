
#include <stdio.h>
#include <stdlib.h>

int main()
 {
     int a; // første løkke
     int b; // antall ganger løkke skal kjøres
     int c; // antall ganger * printes for hver linje

     printf("Hvor mange linjer \233nsker du aa printe?\n");
     scanf("%d",&b);

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

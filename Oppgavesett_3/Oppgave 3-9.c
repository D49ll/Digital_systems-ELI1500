#include <math.h>
#include <stdio.h>


int main()
 {

     float i,j,x,y; // f�rste l�kke
     float pi = M_PI;

     y = pi/30


     for (i=0;(y*i)<=pi;i++) // denne for l�kken vil kj�re s� mangen ganger som b er.
     {
         x = sin(i)*40
         for (j=0;j<=x;j++) // denne l�kken printer ut *, antall stjerner blir bestemt av a.
         {
             printf("*");
         }
         printf("\n");
     }
     return 0;
 }

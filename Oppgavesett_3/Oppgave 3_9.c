#include <math.h>
#include <stdio.h>
int stjerner (float antall);

int main()
{
    float antall;

    printf("skriv antall vinkler:\n");
    scanf("%f",&antall);

    stjerner(antall);

    return 0;
}
int stjerner(float antall)
 {

     float x,y;// første løkke
     int i,j;
     float pi = M_PI;

     for (i=0;i<=antall;i++) // denne for løkken vil kjøre så mangen ganger som b er.
     {
         x = floor(sin((pi/antall)*i)*40);
         printf("%f",x);

         for (j=0;j<x;j++) // denne løkken printer ut *, antall stjerner blir bestemt av a.
         {
             printf(".");
         }
         printf("\n");
     }
     return 0;
 }

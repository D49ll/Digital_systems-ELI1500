#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void sort_min_max(float x[]);
float median(float x[]);

int main()
{
    srand(time(NULL));
    float x[SIZE];
    float median_ferdig;
    int i;
    printf("Array f\233r sortering:\n\n");

    for (i=0;i<SIZE;i++)
    {
        x[i]=(rand()%10000)/100.0;
        printf("%.2f\t",x[i]);
    }
    sort_min_max(x);
    printf("\n\n");
    printf("Array etter sortering, h\233yest til lavest:\n\n");
    for (i=0;i<SIZE;i++)
    {
        printf("%.2f\t",x[i]);
    }
    printf("\n\n");

    median_ferdig = median(x);

    for (i=0;i<SIZE;i++)
    {
        printf("%.2f\n",median_ferdig);
    }

    return 0;
}


float median(float x[]){

    int i,j;
    float resultat;

    //visst arrayet er et partall
    if (SIZE%2==0)
    {
        i = SIZE/2;
        j = (SIZE/2)+1;
        resultat = (x[i]+x[j])/2.0;
    }
    //visst arrayet er et oddetall
    else
    {
        i = (SIZE/2)+1;
        resultat = x[i];
    }
    return resultat;
}

void sort_min_max(float x[]){
    float lager;
    int i,j;
    for (i=0;i<SIZE;i++)
     {
         for (j=0;j<SIZE;j++)
         {
             if (x[j]>x[j+1])
             {
                 lager = x[j];
                 x[j]  = x[j+1];
                 x[j+1]= lager;
             }
         }
     }
}

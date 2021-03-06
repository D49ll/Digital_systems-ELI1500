#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 25

void sort_max_min(float x[]);

int main()
{
    srand(time(NULL));
    float x[SIZE];
    int i;
    printf("Array f\233r sortering:\n\n");

    for (i=0;i<SIZE;i++)
    {
        x[i]=(rand()%10000)/100.0;
        printf("%.2f\t",x[i]);
    }
    sort_max_min(x);
    printf("\n\n");
    printf("Array etter sortering, h\233yest til lavest:\n\n");


    for (i=0;i<SIZE;i++)
    {
        printf("%.2f\t",x[i]);
    }
    printf("\n");

    return 0;
}


void sort_max_min(float x[])
{
    float lager;
    for (int i=0;i<SIZE;i++)
     {
         for (int j=0;j<SIZE;j++)
         {
             if (x[j]<x[j+1])
             {
                 lager = x[j];
                 x[j]  = x[j+1];
                 x[j+1]= lager;
             }
         }
     }
}

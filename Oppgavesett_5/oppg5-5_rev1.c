#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void sort_min_max(float x[]);
float median(float x[]);

int main(){
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

    printf("medianen til arrayet er %.2f\n",median_ferdig);


    return 0;
}
float median(float x[]){

    int i=0,j=0;
    //printf("\n\n%d\n\n",SIZE);
    float resultat;

    //visst arrayet er et partall
    if (SIZE%2==0){

        i = SIZE/2;
        //printf("i = %d ",i);
        j = i-1;
        //printf("j = %d",j);
        resultat = (x[i]+x[j])/2.0;
        //printf("\n%.2f\n",resultat);
    }
    //visst arrayet er et oddetall
    else{

        i = SIZE/2;
        //printf("i_else = %d",i);
        resultat = x[i];
        //printf("\n%.2f\n",resultat);
    }
    return resultat;
}
void sort_min_max(float x[]){
    float lager=0;
    int i,j;
    for (i=0;i<SIZE;i++)
     {
         for (j=0;j<SIZE-1;j++)//Må kjøres 1 gang mindre en størrelse på arrayet når man sorterer fra min til max.
         {
             if (x[j]>x[j+1])
             {
                 lager = x[j];
                 x[j]  = x[j+1];
                 x[j+1]= lager;
                 //printf("%f og %f\n",x[j],x[j+1]);
             }
         }
     }
}

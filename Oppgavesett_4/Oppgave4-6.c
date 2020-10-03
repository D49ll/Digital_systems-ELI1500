#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int terning();

int main()
{
    int antall[31]={0}; // går fra plass 0 til plass 49.

    int i,j,sum,antall_kast=9000,kast;

    for (i=0;i<antall_kast;i++)
    {
        sum=0;
        for (j=0;j<5;j++)
        {
            kast = terning();
            sum = sum+kast;
        }

        antall[sum]+=1;
        //printf("%d\t",sum);

    }
    //printf("\n\n\n");
    for (i=0;i<31;i++)
    {
        printf("%d\t",antall[i]);
    }


    return 0;
}





























int terning()
{
    int kast;
    kast = (rand()%6)+1;
    return kast;
}

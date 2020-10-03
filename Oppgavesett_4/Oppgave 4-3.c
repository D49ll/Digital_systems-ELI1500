#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 10

//finnes to filer med samme program, fikk bare problemer med å lagre denne filen første gang

int main ()
{
    srand(time(NULL));

    int x[SIZE];
    int i=0,j=0;

    for (i=0;i<SIZE;i++)
    {
        x[i]=((rand()%20)+1);
    }

    for (i=0;i<SIZE;i++)
    {
        if (x[i]==5)
        {
            printf("x[%d] er lik 5\n",i);
        }
        else
        j++;
    }
    if (j==i)
    {
        printf("Ingen verdier i arrayet er lik 5\n");
    }



    return 0;


}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int arraysum(int x[],int lengde);

int main()
{
    srand(time(NULL));
    int STR = 100;
    int x[STR];
    int i;

    //Setter tilfeldige verdier mellom 1-100
    for (i=0;i<STR;i++)
    {
        x[i]= rand()%100+1;
        printf("Plass nr %d = %d\n",i+1,x[i]);
    }

    //Lurer på hva summen av alle verdiene i arrayet blir
    int sum = arraysum(x,STR);

    //Printer summen til x[]-arrayet
    printf("\n\nTotal summen til arrayet x[] = %d\n",sum);
}


int arraysum(int x[], int lengde)
{
    int i;
    int sum=0;

    //Summerer alle verdier i x[]-arrayet.
    for (i=0;i<lengde;i++)
    {
        sum = sum + x[i];
    }

return sum;

/*
SIZEOF(INT)=4

(SIZEOF(X[])=40)/4 = 10
*/
}

#include <stdio.h>
#define SIZE 6

int main ()
{

float x[SIZE]={-2.0,-6.9,1.2,28.9,8.1,10.2};

int i,j;

float max=x[0], min=x[0];

    for (i=0; i<SIZE;i++)
    {
        if (x[i]<min)
        {min = x[i];}

        if (x[i]>max)
        {max = x[i];}
    }
    printf("\n%.2f er maxverdi og %.2f er minverdi i arrayet x[7].\n",max,min);

return 0;

}

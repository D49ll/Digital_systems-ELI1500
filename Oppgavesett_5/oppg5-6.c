#include <stdio.h>
#define SIZE 21

int main()
{
    int i,j;
    float teller=0.0;

    float c[SIZE];
    float f[SIZE];

    printf("%10s%15s\n","Celsius","Fahrenheit");
    printf("-------------------------\n");

    //L�kken kj�res SIZE antall ganger.
    for (i=0;i<SIZE;i++)
    {
        c[i] = -100.0+teller;
        f[i] = (1.8*c[i])+32;
        teller+=10.0; //�ker celsius med 10 for hver gang l�kken kj�res
        printf("%10.1f%15.1f\n",c[i],f[i]);

    }
    return 0;
}





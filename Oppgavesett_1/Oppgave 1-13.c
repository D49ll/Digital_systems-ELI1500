#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int i,j,q,p;

int main()
{
    srand(time(NULL)); // Det samme regnestykket vil komme hver gang programmet kj�res. Dette unng�s ved � inkludere #include <time.h> i starten, og programlinjen srand(time(NULL)); i programmet f�r de tilfeldige tallene trekkes.
    i = rand()%100;
    j = rand()%100;

    q = i + j;

    printf("%d + %d = ",i,j);
    scanf("%d",&p);

    if (q==p)
    {
        printf("\nKorrekt!");
    }
    else
    {
        printf("\nFeil!");
    }
    return 0;




}

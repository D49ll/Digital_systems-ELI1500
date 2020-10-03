#include <stdio.h>

int perfect(long x);

int main()
{
    long x,y,i;

    printf("Sjekk hvor mange perfekte tall det er opp til 10.000\n");
    scanf("%d",&x);
    printf("\nSjekker for perfekte tall mellom 0 og %d:\n----------------------------------------\n",x);

    for (i=1;i<=x;i++)
    {
        y = perfect(i);

        if (y==1)
        {
            printf("%d\t",i);
        }

    }
    return 0;
}


int perfect(long x)
{
    long antall, faktor, sum=0;

    if (x<6)
        {
            return 0;
        }

    for (antall=2;antall<=x/2;antall++)
    {
            if ( x%antall== 0)
            {
                faktor = x/antall;
                sum = sum + faktor;
            }
    }
    sum++;


    if (sum == x)
        {
            return 1;
        }
    else
        {
            return 0;
        }
}

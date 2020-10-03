#include <stdio.h>

int main()
{
    long x, antall, faktor, sum=0;

    scanf("%d",&x);

    for (int i = 0; i < x; i++)
    {
    if (x<6)
        {
            printf("Ingen perfekte tall");
            //return 0;
        }

    for (antall=2;antall<=i/2;antall++)
    {
            if ( x%antall== 0)
            {
                faktor = i/antall;
                sum = sum + faktor;
                printf("faktor = %d\n",faktor);
               printf("sum = %d\n",sum);
            }
            //if (sum == x)
                //printf("sum = %d",x);
    }
    sum++;


    if (sum == i)
        {
            printf("%d == %d",x,sum);
            //return 1;
        }
    /*else
        {
            return 0;
        }*/
    }

        return 0;
}

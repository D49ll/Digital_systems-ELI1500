#include <stdio.h>

int main()
{
    int a;
    int b;
    int produkt;

    printf("   *    1    2    3    4    5    6    7    8    9   10\n");
    printf("******************************************************\n");
    for (a=1;a<=10;a++)
    {

        printf("%2d *",a);

        for (b=1;b<=10;b++)
        {
            produkt = a*b;
            printf("%5d",produkt);
        }

        printf("\n");

    }


}

#include <stdio.h>

int main ()
{
    int x=2,y=5
    int sum,produkt;

    s_og_p(x,y,&sum,&produkt);

    printf("Verdier: x = %d\ty = %d\nPekere: sum=%d\tprodukt=%d\n",x,y,*sum,*produkt);
}

void s_og_p(int x,int y,int *sum,int *produkt)
{
     *produkt = x*y;
     *sum = x+y;
}

#include <stdio.h>

void s_og_p(int x,int y,int *sum,int *produkt);

int main ()
{
    int x=2,y=5;
    int *sum,*produkt;
    printf("hei");

    s_og_p(&x,&y);


    printf("Verdier: x = %d\ty = %d\nPekere: sum=%d\tprodukt=%d\n",x,y,*sum,*produkt);
}

void s_og_p(int *sum,int *produkt)
{
     *produkt = 2*2;
     *sum = 2+2;
}

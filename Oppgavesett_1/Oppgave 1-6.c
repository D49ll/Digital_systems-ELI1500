#include <stdio.h>

int x;

int main()
{
    printf("tast inn ditt tall:\n");
    scanf("%d",&x);

    if (x>0)
    {
        printf("Tallet er positivt");
    }
    if (x<0)
    {
        printf("Tallet er negativt");
    }
    if (x==0)
    {
        printf("Tallet er null");
    }
return 0;
}

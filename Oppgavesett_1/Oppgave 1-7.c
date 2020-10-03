#include <stdio.h>

int x;
int y;

int main()
{
    printf("velg x:\n");
    scanf("%d",&x);
    printf("velg y:\n");
    scanf("%d",&y);

    if (x>y)
    {
        printf("x, %d er st\223rst",x);
    }
    if (x<y)
    {
        printf("y, %d er st\223rst",y);
    }
    if (x==y)
    {
        printf("x og y er like store");
    }
return 0;
}

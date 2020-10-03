#include <stdio.h>

int main()
{
    int i, x=1;

    for (i=1;i<=10;i++)
    {
        printf("%010d\n",x);
        x*=10;
    }
}

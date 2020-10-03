#include <stdio.h>

int x;

int main()
{
    printf("Tast inn ett tall:\n");
    scanf("%d",&x);

    if (x%2==0)
    {
        printf("Tallet %d er et partall", x);

    }
    else
    {
    printf("Tallet %d er et oddetall", x);

    }

return 0;

}

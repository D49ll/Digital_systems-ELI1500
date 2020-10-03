#include <stdio.h>

int main()
{
    int i;

    printf("%10c",'i');
    printf("%10c*%c",'i','i');
    printf("%8c*%c*%c",'i','i','i');
    printf("\n\n");

    for (i=1;i<=10;i++)
    {
        printf("%10d",i);
        printf("%10d",(i*i));
        printf("%10d",(i*i*i));
        printf("\n");
    }
    return 0;
}

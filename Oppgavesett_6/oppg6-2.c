#include <stdio.h>

int main()
{
    int x[10];
    long long y[10];
    float z[10];
    long double w[10];

    printf("int=%d\t",sizeof(int));
    printf("longlong=%d\t",sizeof(long long));
    printf("float=%d\t",sizeof(float));
    printf("longdouble=%d\n",sizeof(long double));

    for (int i=0;i<10;i++)
    {
        printf("int[%d]=%d\n",i,&x[i]);
    }
    printf("\n");
    for (int i=0;i<10;i++)
    {
        printf("long long[%d]=%d\n",i,&y[i]);
    }
    printf("\n");
    for (int i=0;i<10;i++)
    {
        printf("float[%d]=%d\n",i,&z[i]);
    }
    printf("\n");
    for (int i=0;i<10;i++)
    {
        printf("long double[%d]=%d\n",i,&w[i]);
    }

    printf("\n\nAdressene \233ker tilsvarende byte arrayet bestar av\n");
    return 0;
}

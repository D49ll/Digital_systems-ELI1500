#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    float a,c,b,x,b2,x1,x2;

    printf("Velg a\n");
    scanf("%f",&a);
    printf("Velg b\n");
    scanf("%f",&b);
    printf("Velg c\n");
    scanf("%f",&c);

    printf("\nFinner x\n\n");

    b2 = b*b;
    x1 = ((-b) + sqrt(b2-(4*a*c)))/(2*a);
    x2 = ((-b) - sqrt(b2-(4*a*c)))/(2*a);

    if (x1==x2)
    {
        printf("Gir en reell rot: ");
        printf("x=%.0f",x1);
    }
    if (x1!=x2)
    {
        printf("Gir to r\233tter: ");
        printf("x1=%.0f og x2=%.0f",x1,x2);
    }
    else
    {
        printf("Ingen r\233tter");
    }
    return 0;
}

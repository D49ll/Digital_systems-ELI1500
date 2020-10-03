#include <stdio.h>
#include <math.h>

float pi = M_PI;
float areal;
float radius;

int main(void)
{
    printf("Tast inn radius\n");
    scanf("%f",&radius);
    areal = (radius*radius*pi);
    printf("Arealet til sirkelen er %.2f",areal);

    return 0;
}

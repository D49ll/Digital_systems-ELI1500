#include <stdio.h>
#include <math.h>

float p1, p2, q1, q2, X, Y, Z;

int main()
{
    printf("Tast inn x1\n");
    scanf("%f",&p1);
    printf("Tast inn x2\n");
    scanf("%f",&p2);
    printf("Tast inn y1\n");
    scanf("%f",&q1);
    printf("Tast inn y2\n");
    scanf("%f",&q2);

    X = (p2-p1)*(p2-p1);
    Y = (q2-q1)*(q2-q1);

    Z = sqrt(X+Y);

    printf("Lengden blir: %.2f",Z);

return 0;
}


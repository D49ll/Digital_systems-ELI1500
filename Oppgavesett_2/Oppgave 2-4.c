#include <stdio.h>
#include <math.h>
//Gitt to heltall a og b. Dersom heltallet n er det største tallet slik
//n|a (a er en faktor i n) og n|b
int main()
{
    int a;
    int b;
    int n;
    int GCD;

    printf("Tast inn a og b\n");
    scanf("%d og %d\n",&a,&b);

    for (n=2; n <= a && n <= b; n++)
    {
        if (a%n==0 && b%n==0)
        {
            GCD = n;
        }
    }
    printf("GCD er: %d",GCD);
    return 0;
}

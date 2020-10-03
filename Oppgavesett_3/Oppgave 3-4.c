#include <stdio.h>

float CtilF (float celcius)
{
    float fahrenheit;

    fahrenheit = (9.0/5.0)*celcius + 32.0;

    return fahrenheit;
}

int main()
{
    float C;
    float F;

    printf("   Celcius      Fahrenheit\n");
    for (C = 31; C<=38;C++)
        {

        F = CtilF(C);
        printf("%10.1f %15.1f\n",C,F);
        }

    return 0;

}

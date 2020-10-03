#include <stdio.h>

float EUR2NOK (float euro);

int main ()
{
    float euro;
    float nok;

    printf("Hvor mange EURO \233nsker du omgjort til NOK:\n");

    scanf("%f",&euro);

    printf("%.2f EURO er %.2f NOK",euro,EUR2NOK(euro));

    return 0;
}


float EUR2NOK (float euro)
{
    float nok_kurs = 9.72;
    float nok;

    nok = euro * nok_kurs;

    return nok;

}


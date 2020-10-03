#include <stdio.h>
#include <math.h>

float hyp(float kat1, float kat2)
{
    float hyp = sqrt((kat1*kat1)+(kat2*kat2));

    return hyp;
}

int main ()
{
    float kat1;
    float kat2;
    float hypotenus;

    printf("Les inn 2 verdier for katet i en rettvinklet trekant:\n");
    scanf("%f %f",&kat1, &kat2);
    hypotenus = hyp(kat1,kat2);

    printf("Kateter med lengen %.1f og %.1f skal gi hyp %.1f\n",kat1,kat2,hypotenus);
}

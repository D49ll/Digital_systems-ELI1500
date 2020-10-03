#include <stdio.h>
#include <math.h>

float voksen;
float barn;
float pris;

int main()
{
    printf("Hvor mange voksne?\n");
    scanf("%f",&voksen);
    printf("Hvor mange barn?\nj");
    scanf("%f",&barn);
    pris = ((voksen*210)+(barn * 150));
    printf("Totalpris: %.2f",pris);

return 0;
}

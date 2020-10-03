#include <stdio.h>
#include <math.h>

float pund;
float kilo;
float forhold = 0.454;

int main()
{
    printf("Oppgi antall pund som skal konverteres til kilo\n");
    scanf("%f",&pund);
    kilo = (pund/forhold);
    printf("Det gir %.2f kilo",kilo);

return 0;
}

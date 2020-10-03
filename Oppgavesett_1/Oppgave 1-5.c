#include <stdio.h>
#include <math.h>

float R1;
float R2;
float RTS;
float RTP;

int main()
{
    printf("Motstandsverdi 1:\n");
    scanf("%f",&R1);
    printf("Motstandsverdi 2:\n");
    scanf("%f",&R2);

    RTS = R1 + R2;
    RTP = ((R1*R2)/(RTS));

    printf("Total seriemotstand: %.0f Ohms\n",RTS);
    printf("Total parallelmotstand: %.0f Ohms\n",RTP);

return 0;
}

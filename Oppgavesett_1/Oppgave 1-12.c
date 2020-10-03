#include <stdio.h>
#include <math.h>




int antall = 0;
int input;
int sum = 0;
int max = 0;
int min = 80000;
float gjennomsnitt;



int main()
{
    while (antall < 5)
    {
        printf("Les inn regndata\n");
        scanf("%d",&input);

        if (input < 0)
        {
            break; //Bryter while-løkken dersom input er negativ
        }
        sum = sum + input;
        gjennomsnitt = (float)sum/5.0;

        if (input>max)
        {
            max=input;
        }
        if (input<min)
        {
            min=input;
        }
        antall++; // Legger til 1 slik at loopen har kjørt 1 gang osv
    }
    printf("Max: %d\nMin: %d\nGjennomsnitt: %.2f",max,min,gjennomsnitt);

    return 0;
}

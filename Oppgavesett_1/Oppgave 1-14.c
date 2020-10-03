#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void delay(unsigned int mseconds) //Definerer delay
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
int main()
{

int antall=0;
    int N;
    int K;

    NYRUNDE: srand(time(NULL)); // Det samme regnestykket vil komme hver gang programmet kjøres. Dette unngås ved å inkludere #include <time.h> i starten, og programlinjen srand(time(NULL)); i programmet før de tilfeldige tallene trekkes.

    N = (rand()%99)+1;
    printf("%d\n",N);
    printf("Gjett N, ligger mellom 0 og 100. Sekvens avsluttes med 0 eller 100\n");

    while (N>0||N<100)
    {
        antall++;
        scanf("%d",&K);

        if (N>K && K>0)
        {
            printf("Verdien til N er st\233rre enn %d\n",K);
        }
        if (N<K && K>0)
        {
            printf("Verdien til N er mindre enn %d\n",K);
        }
        if (N==K)
        {
            break;
        }
        if (K==0 || K==100)
        {
            break;
        }

    }
    if (K==0 || K==100)
    {
        printf("Du har avbrutt sekvensen\n");
        printf("Du har gjettet %d\n",antall);
        printf("Korret verdi er %d\n",N);
    }
    if (N==K)
    {
        printf("Korrekt!\n");
        printf("Du har gjettet %d ganger.\n",antall);
        printf("Korret verdi er %d.\n",N);
        delay(1000);
        printf("\n\nNy runde!\n");
        antall = 0;
        goto NYRUNDE;

    }

    return 0;

}

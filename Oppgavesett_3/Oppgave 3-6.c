#include <stdio.h>
#include <time.h>

int terning()
{
    int kast;
    kast = (rand()%6)+1;
    return kast;
}

int main()
{
    srand(time(NULL)); // HVORFOR MÅ DENNE VÆRE I MAIN OG IKKE I PROTOKOLLEN?
    int antall;
    int kast=0;
    int sum=0;

    for (antall=0; antall<3000;antall++)
        {
            kast = terning();
            //printf("%d\n",kast); //FOR Å SJEKKE OM KAST ER TILFELDIG

            if (kast == 6)

                sum = sum + 1;
                //printf("antall: %d\n",sum); //FOR Å SJEKKE OM TELLER STEMMER
        }

    printf("antall kast som ble 6 er: %d\n",sum);

}

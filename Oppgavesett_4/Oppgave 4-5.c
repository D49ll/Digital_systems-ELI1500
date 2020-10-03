#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 365

int main()
{

    srand(time(NULL));

    float minTemp[SIZE];
    float maxTemp[SIZE];
    float mini,maxi;

    int nedbr[SIZE],j=0,antall=0,antall_2=0;

    //Tilfeldige temperaturer for Oslo i 2018
    while (j<SIZE)
    {
        float min = (rand()%2001/100.0)-10.0;
                                                                                                                                //printf("%d dag. min = %.1f",j,min);
        float max = (rand()%3001/100.0)-5.0;
                                                                                                                                //printf("%d dag. max = %.1f\n",j,max);

        //Registerer verdier i de ulike arryas
        if (min<max)
        {
            nedbr[j]   = rand()%50;
            maxTemp[j] = max;
                                                                                                                                // if (max>=20)
                                                                                                                                // {printf("%.2f\n",max);}
            minTemp[j] = min;
                                                                                                                                //printf("%d dag:\n%.2f < %.2f og nedb\233r %d\n",j,minTemp[j],maxTemp[j],nedbr[j]);
            j++;
        }
    }



    printf("Nummer p\206 hvilke dager det har v\221rt tropenatt:\n");
    printf("-------------------------------------------------------------------------------------------------------------------\n");

    //Sjekker temeratur og nedbøren i arraysene
    for (int i=0;i<SIZE;i++)
    {
                                                                                                                                //if (minTemp[i]<mini)
        //Oppdaterer maxtemperatur for en dag                                                                                   //  {mini = minTemp[i];}
        if (maxTemp[i]>maxi)
            {maxi=maxTemp[i];}

        //Sjekker antall tropenetter
        if (maxTemp[i]>=20.0)
        {
            antall++;
            printf("%d\t",i);
        }
        //Sjekker antall døgn med snø
        if (maxTemp[i]<=0 && nedbr[i]>0)
            {antall_2++;}



    }
    printf("\n\nMax temp gjennom \206ret: %.2f C*\n",maxi);
    printf("Antall tropenetter: %d dager\n",antall);
    printf("Antall d\233gn med sn\233: %d d\233gn\n",antall_2);



























    return 0;
}

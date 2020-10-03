#include <stdio.h>
#include <math.h>

int primtall(int x);

int main()
{
    int x;
    int kontroll;
    int antall;

    printf("Hvor langt i tallrekken \233nsker du?\nMaks grense er 200. \n");
    scanf("%d",&x);



    for (antall = 1; antall <= x;antall++)
    {

        kontroll = primtall(antall);
        //printf("%d\n",kontroll); //Overvåker verdien av "kontroll" variabel

        if (kontroll == 1)
        {
            printf("%d = primtall\n",antall);
        }
        else if (x <= 0 && kontroll == 0)
        {
            printf("Avslutter\n",x);
            break;
        }
        else
        {
            continue;
        }
    }

    return 0;
}

int primtall(int x)
{
    if (x>0 && x<=13)
    {
        if (x!=1 && x%2!=0 && x%3!=0 || x==2 || x==3)
            return 1;
        else
            return 0;
    }
    else if (x>13)
    {
        if (x%2!=0 && x%5!=0 && x%3!=0 && x%7!=0 && x%9!=0 && x%11!=0 && x%13!=0)
            return 1;
        else
            return 0;
    }

}

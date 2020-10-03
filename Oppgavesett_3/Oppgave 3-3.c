#include <stdio.h>

int min (int x, int y);

int main()
{
    int x, y;
    printf("Les inn 2 heltall\n");
    scanf("%d %d",&x,&y);

    printf("Det minste heltallet er %d\n",min(x,y));
    return 0;
}

int min(int x, int y)
{
    int resultat;

    if (x==y)
    {
        resultat = x;
    }
    else if (x<y)
    {
        resultat = x;
    }
    else
    {
        resultat = y;
    }

    return resultat;
}


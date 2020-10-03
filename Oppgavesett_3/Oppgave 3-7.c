#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;

    printf("Velg tre tall\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("Det minste heltallet er: %d",min(a,b,c));

//    printf("%d %d %d",a,b,c);


    return 0;
}


int min(int x,int y,int z)
{
    int resultat;

    if (x==y && y==z)
    {
        resultat = x;
    }
    else if (x<y && x<z)
    {
        resultat = x;
    }
    else if (y<x && y<z)
    {
        resultat = y;
    }
    else if (z<x && z<y)
    {
        resultat = z;
    }

    return resultat;
}





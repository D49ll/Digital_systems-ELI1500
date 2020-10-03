#include <stdio.h>

int main()
{
    int tall;
    printf("Skriv inn et heksadesimalt tall\n");
    scanf("%x",&tall);

    printf("Hexadesimal %X har verdien %d",tall,tall);
    return 0;
}

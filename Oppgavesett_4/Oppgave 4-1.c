#include <stdio.h>
#define SIZE 7

int main ()
{
int temp[7];
int i;

printf("Les inn temperatur for uken, starter med mandag.\n");

for (i=0;i<SIZE;i++)
{
    scanf("%d",&temp[i]);
}

printf("Man-    Tir-    Ons-    Tor-    Fre-    L\233r-    S\233ndag (C*)\n");
printf("-------------------------------------------------------------\n");

for (i=0;i<SIZE;i++)
{
    printf("%d\t",temp[i]);
}

return 0;
}


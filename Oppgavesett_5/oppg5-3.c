#include <stdio.h>


int main()
{
    int x,y;

    printf("Skriv inn to heltall:\n");
    scanf("%d%d",&x,&y);

    printf("%d AND %d gir %d\n",x,y,(x&y));
    printf("%d OR  %d gir %d\n",x,y,(x|y));
    printf("%d XOR %d gir %d\n",x,y,(x^y));

    return 0;

}

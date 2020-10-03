#include <stdio.h>


int main()
{
    int x[]={89,32,89,79,24,24,510,32,79},i,y;
    int lengde = sizeof(x)/sizeof(int);

    int step = 0;

    //Bruker at xor to ganger opphever tallet.
    printf("step | array | sum\n\n");
    for (i=0;i<lengde;i++)
    {

        printf("%3d",step);
        step = step^x[i];
        printf("  ^%3d\t",x[i]);
        printf("=%d\n\n",step);
    }

    printf("%d",step);


}

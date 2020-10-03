#include <stdio.h>

int main()
{
    int x=2,y=5,*z,*w;


    z=&x;
    w=&y;

    printf("Adresse til variablene:\n&x=%d og &y=%d.\n\nVerdien av pekere:\nx=%d og y=%d\n",&x,&y,*z,*w);
    printf("\nAdresse til pekere:\n*x=%d og *y=%d\n\nInnholdet til variablene:\nx=%d og y=%d\n\n",z,w,x,y);

    return 0;
}

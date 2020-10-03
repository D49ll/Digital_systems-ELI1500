#include <stdio.h>

int main()
{
    int n=0;

    while (n*n<5000)
    {
        n++;
    }
    printf("Det minste heltallet er %d\n\n",n);
    return 0;
}

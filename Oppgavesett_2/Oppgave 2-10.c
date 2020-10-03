#include <stdio.h>

int main()
{
    char c;


    do
    {
        printf("Tast inn en bokstav:\n");
        nystart: c = getchar();
    switch (c)
        {

           case 'a':
                printf("Vokal\n\n");
                break;

            case 'e':
                printf("Vokal\n\n");
                break;

            case 'i':
                printf("Vokal\n\n");
                break;

            case 'o':
                printf("Vokal\n\n");
                break;

            case 'u':
                printf("Vokal\n\n");
                break;

            case 'y':
                printf("Vokal\n\n");
                break;

            case '-':
                printf("Avsluttet\n\n");
                break;
            case '\n':
                goto nystart;

            default:
                printf("Ikke vokal\n\n");
                break;
        }

    }while (c != '-');

         return 0;

}

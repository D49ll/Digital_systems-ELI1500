#include <stdio.h>

int main()
{
   int a,b;
   double fakultet;

   fakultet = 1.0;


   printf("Skriv inn fakultet du \233nsker: ");
   scanf("%d",&b);

    if (b==0)
    {
            printf("%d!=1",b);
            goto END;
    }

    for (a=1;a<=b;a++)
    {
           fakultet = a*fakultet;
           printf("%d!=%.0f\n",a,fakultet);
    }

    END: return 0;
}

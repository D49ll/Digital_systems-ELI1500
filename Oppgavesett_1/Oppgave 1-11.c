#include <stdio.h>
#include <math.h>

float voksen;
float barn;
float pris;

int main()
{
    printf("Hvor mange voksne?\n");
    scanf("%f",&voksen);
    printf("Hvor mange barn?\n");
    scanf("%f",&barn);

   if (barn+voksen < 10)
   {
    pris = ((voksen*180)+(barn * 100));
    printf("Totalprisen blir: %.2f",pris);
   }
   else
   {
    pris = ((voksen*180)+(barn*100))*0.9;
    printf("Totalprisen blir: %.2f",pris);
   }

return 0;
}

#include <stdio.h>
#include <math.h>

int main(void)
{
  //deklarerer variable
  int x,y,z;  //sidekanter

  for (x=1;x<=100;x++)   //sjekker alle x mellom 0 og 100
  {
    for(y=x;y<=100;y++)//bestemmer at x<y, og sjekker alle x<=y<=100
    {
      for(z=y;z<=100;z++) //z er større enn x og y
      {
        if(x*x+y*y==z*z) //tester om betingelsen er oppfylt
        {
          printf("En trekant er %3d, %3d, %3d\n",x,y,z);  //utskrift
        }
      }
    }
  }

  return 0;
}

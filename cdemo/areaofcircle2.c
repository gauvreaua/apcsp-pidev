#include <stdio.h>

float areaofcircle(float r)
{
   float x = 3.14 * (r * r);
   return x;
}

int main()
{
   float b;
   float r;
   char input[64];
   int a;
   printf("What is the radius value?\n");
   fgets(input, 64, stdin);
   sscanf(input, "%d", &a);
    b = areaofcircle(a);
    printf("area of the circle is %f\n", b);
}

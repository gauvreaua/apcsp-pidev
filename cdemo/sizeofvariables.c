#include<stdio.h>

int main()
{
  int a = 545;
  char c = 'a';
  float f = 12.345;
  double d = 123.456;

  // print value and size of an int variable
  printf("int a value: %d and size: %d bytes\n", a, sizeof(a));
  printf("char c value: %c and size: %c bytes\n", c, sizeof(c));
  printf("float f value: %f and size: %f bytes\n", f, sizeof(f));
  printf("double value: %lf and size: %lf bytes\n", d, sizeof(d)); 
}


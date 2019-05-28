#include <stdio.h>

int main()
{
  int a = 0;
  int b = 10;

  // if statement to test is a is equal to 0
  printf("a equals %d and b equals %d\n");

  if (a == b)
  {
    printf("a is b\n");
  }
  if (a != b)
  {
    printf("a is not b\n");
  }

  if (a > b)
  {
    printf("a is greater than b\n");
  }
  if (a >= b)
  {
    printf("a is greater than or equal to b\n");
  }

  if (a == 0 && b == 0)
  {
    printf("a is equal to 0 and b is equal to 0\n");
  }
  if (a == 0 || b == 0)
  {
    printf("a is equal to 0 or b is equal to 0\n");
  }

  if (!(a == 0))
  {
    printf("a is not equal to 0\n");
  }
}

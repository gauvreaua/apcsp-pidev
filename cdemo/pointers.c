#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  float d = 1.2;
  float* ptrtod;
  ptrtod = &d;
  *ptrtod = 3;
  float e = 4.1;
  float* ptrtoe;
  ptrtoe = &e;
  *ptrtoe = 8;
  printf("The value of d is %f and the address of d is %d\n", d, &d);
  printf("The value of e is %f and the address of e is %d\n", e, &e);

  float temp;
  temp = *ptrtoe;
  *ptrtoe = *ptrtod;
  *ptrtod = temp;
  printf("The value of d is %f and the address of d is %d\n", d, &d);
  printf("The value of e is %f and the address of e is %d\n", e, &e);
}

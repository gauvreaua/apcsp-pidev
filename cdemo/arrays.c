#include <stdio.h>

void addArray();
void main()
{
  int arr[100];
  for (int a = 0; a < 100; a++)
  {
    arr[a] = a*a;
    printf("%d\n", arr[a]);
  }
  printf(" \n");
  addArray(arr, 100, 1);
}

void addArray(int* arr, int s, int n)
{
  for (int num = 0; num < s; num++)
  {
    arr[num] = arr[num] + n;
    printf("%d\n", arr[num]);
  }
}


#include <stdio.h>
#include <string.h>

struct Student {
  char firstname[20];
  char lastname[20];
  char age[100];
  char id[100];
};

int main()
{
struct Student arr[2];
  for (int i = 0; i<2; i++)
  {
   printf("First Name:\n");
   scanf("%s", arr[i].firstname);
   printf("Last Name:\n");
   scanf("%s", arr[i].lastname);
   printf("Age:\n");
   scanf("%s", arr[i].age);
   printf("Id:\n", arr[i].id);
   scanf("%s", arr[i].id);
  }

  for (int i = 0; i<2; i++)
  {
   printStudent(&arr[i]);
  }
}

#include <stdio.h>
#include <string.h>

int main()
{
char constantString[] = "abcdefghijklmnopqrstuvwxyz";
char capString[27];
char b = 'A';
   for  (int i = 0; i<27; i++)
     {
      capString[i] = b;
      b++;
     }
capString[26] = '\0';
char togString[53];
   strcpy(togString, capString);
   strcat(togString, constantString);
printf("%s\n%s\n%s\n", constantString, capString, togString);
   if (strcmp(constantString, capString) == 0)
    {
     printf("strings are the same\n");
    }
   else
    {
     printf("strings are different\n");
    }
}

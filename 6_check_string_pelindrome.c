#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, char const *argv[])
{
  char input1[120];
  loop:
  printf("Enter String: ");
  scanf(" %s", input1);

  size_t length1 = strlen(input1);

  char *input2 = malloc(length1 + 1);

  size_t temp = length1 - 1;

  for (size_t i = 0; i < length1; i++) {

    input2[i] = input1[temp];
    temp--;
    }
    input2[length1] = '\0';

    int result = strcmp(input1, input2);
   if (result == 0)
   {
     printf("String is Palindrom:\n");
   }
   else
    printf("String is Not a Palindrom:\n");
   goto loop;
   return 0;
}

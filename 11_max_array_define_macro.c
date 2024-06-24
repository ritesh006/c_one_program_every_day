#include <stdio.h>

#define MAX(array, length) ({ \
int current_max = array[0]; \
for(int i = 0; i < length; i++) \
    if(array[i] > current_max)  \
      current_max = array[i]; \
    current_max;\
}) 


int main()
{
    int array[5] = {1,2,3,4,5};

    int max = MAX(array,5);

    printf("max num is: %d\n",max);

    return 0;
}
#include <stdio.h>



int main()
{
    int array[5];

    int length = sizeof(array)/sizeof(array[0]);

    for(size_t i = 0; i < 5; i++ )
    {
        printf("Enter value for array: \n");
        scanf("%d",&array[i]);

    }

    int current_max = array[0];

    for(size_t i = 0; i < length; i++)
    {
        if(current_max < array[i])
        {
            current_max = array[i];
        }
    }
    

    printf("current_max is: %d\n",current_max);

    return 0;

}
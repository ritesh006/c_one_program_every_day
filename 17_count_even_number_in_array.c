#include <stdio.h>

void count_even_number(int array[],size_t, size_t*);

int main()
{
    int array[] = {1, 2, 3, 4, 5,6 , 7,8 ,9};
    size_t array_size = sizeof(array)/sizeof(array[1]);
    size_t count = 0;
    count_even_number(array,array_size, &count);

    printf("Evern Number is: %d",count);
    return 0;
}

void count_even_number(int array[], size_t array_size, size_t* count)
{
    
    for(size_t i = 0; i < array_size; i++ )
    {
        if(array[i] % 2 == 0)
        {
            (*count)++; 
        }
    }

}
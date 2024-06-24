/*
Question 3: Write a C program that dynamically allocates memory for an array of integers. 
Prompt the user to enter the size of the array and then the elements of the array. 
Display the sum of all the elements entered by the user.
*/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    size_t length;
    printf("Enter Size of Array: ");
    scanf("%ld",&length);

    int *array[length] ;

    for (size_t i = 0; i < length; i++)
    {
        array[i] = malloc(sizeof(int)*length);
    }
    
    size_t sum = 0;
    printf("Enter Number: ");
    for (size_t i = 0; i < length; i++)
    {
        scanf("%d",array[i]);
        sum += *array[i];
    }
     printf("Sum of Array: %ld\n",sum);
    return 0;
}

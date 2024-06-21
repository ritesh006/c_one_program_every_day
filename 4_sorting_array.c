#include<stdio.h>

int main(int argc, char const *argv[])
{
    int arr[] = {5, 2, 9, 1, 5, 6};

    int length = sizeof(arr) / sizeof(arr[0]);

    for (size_t i = 0; i < length; i++)
    {
        for (size_t j = 0; j < length-1-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            
        }
        
    }

    for (size_t i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

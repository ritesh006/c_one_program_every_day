#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct
{
    int *num;
    unsigned int size;
}array;

void inputNumbers(array *arr);
void displayNumbers(const array *arr);
void findMin(const array *arr);
void findMax(const array *arr);
void calculateAverage(const array *arr);
void countPrimes(const array *arr);
void sortArray(array *arr);
void searchNumber(const array *arr);
bool isPrime(int num);

int main() {
    //int numbers = MAX_NUMBERS;
    int count = 0;
    
    // TODO: Implement input loop
    // TODO: Implement analysis functions

array first;

printf("Enter How many input you needed: ");
scanf("%d",&first.size);

first.num = malloc(first.size * sizeof(int));

if(first.num == NULL)
{
    perror("memory not allocated");
}

inputNumbers(&first);
displayNumbers(&first);
findMin(&first);
findMax(&first);
calculateAverage(&first);
countPrimes(&first);
sortArray(&first);
searchNumber(&first);

free(first.num);

return 0;
}
void inputNumbers(array *arr)
{  //1. Take multiple numbers as input
    for (size_t i = 0; i < arr->size; i++)
    {
        printf("Enter value: ");
        scanf("%d",&arr->num[i]);
    }
}

void displayNumbers(const array *arr)
{
    for (size_t i = 0; i < arr->size; i++)
    {
        printf("Your Entered value: %d\n",arr->num[i]);
    }
}

void findMin(const array *arr)
{
        //2. Find min, max, average
    int min = arr->num[0];

    for (size_t i = 0; i < arr->size; i++)
    {
        if(arr->num[i] < min)
        {
            min = arr->num[i];
        }
    }
    printf("min = %d\n",min);
}

void findMax(const array *arr)
{
        //2. Find min, max, average
    int max = arr->num[0];
    int sum = 0;
    for (size_t i = 0; i < arr->size; i++)
    {
        if(arr->num[i] > max)
        {
            max = arr->num[i];
        }
    }
    printf("max = %d\n",max);
}

void calculateAverage(const array *arr)
{
    int sum = 0;
    for (size_t i = 0; i < arr->size; i++)
    {
        sum = sum + arr->num[i];
    }
    //float avarage = 0;
    double average = (double)sum / arr->size;
    printf("avarage = %f\n",average);
}

void countPrimes(const array *arr)
{
    bool status;
    
    unsigned int notPrime = 0;
    unsigned int Prime = 0;

    for (size_t i = 0; i < arr->size; i++)
    {
        int num = arr->num[i];
        status = isPrime(num);
        if(status == false)
        {
            notPrime++;
        }
        if(status == true)
        {
            Prime++;
        }
    }
    printf("   prime numbers count: %d\n",Prime);
    printf("notPrime numbers count: %d\n",notPrime);
}

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= num/2; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void sortArray(array *arr)
{
    for (size_t i = 0; i < arr->size; i++)
    {
        for (size_t j = 0; j < arr->size-1; j++)
        {
            int temp;
            if(arr->num[j] > arr->num[j+1])
            {
                temp = arr->num[j+1];
                arr->num[j+1] = arr->num[j];
                arr->num[j] = temp;
            }
        } 
    }
    printf("Sorted Number: \n");
    for (size_t i = 0; i < arr->size; i++)
    {
        printf("%d\n",arr->num[i]);
    }
}

void searchNumber(const array *arr)
{
    printf("Which number do you want to search: ");
    int search;
    size_t index = 0;
    scanf("%d",&search);
    bool status = false;
    for (size_t i = 0; i < arr->size; i++)
    {
        if(search == arr->num[i])
        {   
            status = true;
            index = i;
            break;
        }
    }
if (status)
{
    printf("Number found inded is: %ld  number is: %d\n",index,arr->num[index]);

}
else
{
    printf("Number Not Found...\n");
}


}
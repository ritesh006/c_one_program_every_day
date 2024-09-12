#include <iostream>
using namespace std;

void sum_and_product_of_array(int array[], int size)
{
    // int mysize = size - 1;
    int sum = 0, product = 1;
    for(size_t i = 0; i < size; i++)
    {
        sum = sum + array[i];
        product = product * array[i];
    }

    cout << "sum of array is: " << sum << endl;
    cout << "product of array is: " << product << endl;
}
int main()
{

    int array[] = {1, 2, 3, 4, 5};

    int size_of_array = sizeof(array)/sizeof(array[0]);

    sum_and_product_of_array(array, size_of_array);


    return 0;
}

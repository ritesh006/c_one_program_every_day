//two pointer apporach

#include <iostream>
using namespace std;

void reverse_array(int array[], int size_of_array)
{
    int start = 0, end = size_of_array-1;

    while(start <= end)
    {
        swap(array[start],array[end]);

        start++;
        end--;
    }
    
    for(size_t i = 0; i < size_of_array; i++)
    {
        cout << "  "<< array[i];
    }

    cout << endl;
}


int main()
{

    int array[] = {1, 2, 3, 4, 5};

    int size_of_array = sizeof(array)/sizeof(array[0]);


    reverse_array(array, size_of_array); 




    return 0;
}

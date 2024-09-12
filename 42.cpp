#include <iostream>
using namespace std;

void unique_value(int array[], int size)
{
    
    for(int i = 0; i < size; i++)
    {   int count = 0;
        for(int j = 0; j < size - i; j++)
        {
            if(array[i] == array[j])
            {
                count++;
                if(count == 2)
                {
                    cout << array[i] << endl;
                }
            }
            
        }
    }
}

int main()
{

    int array[] = {1, 2, 3, 3, 5};

    int size_of_array = sizeof(array)/sizeof(array[0]);

    unique_value(array, size_of_array);


    return 0;
}

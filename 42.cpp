//print all unique value in array
#include <iostream>
using namespace std;

void unique_value(int array[], int size)
{
    int count = 0;
    for(int i = 0; i < size; i++)
    {   
        for(int j = 0; j < size; j++)
        {
            if(array[i] == array[j])
            {
                
                count++;
                //cout << array[i] << array[j] << count << endl;
                if((!(i == j)) && (count == 2))
                {
                    cout << array[i] << endl;
                }
            }
            
        }
        count = 0;
    }
}

int main()
{

    int array[] = {1, 2, 3, 3, 5};

    int size_of_array = sizeof(array)/sizeof(array[0]);

    unique_value(array, size_of_array);


    return 0;
}

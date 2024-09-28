//wap the maximum and minimum numbers in an array

#include <iostream>

using namespace std;

void swap_min_max(int a[],int size)
{
    int min_index = 0, max_index = 0, end = size-1;

    cout<< "before swap array: "<< endl;
    
    for (size_t i = 0; i <= end; i++)
    {
        cout << " "<<a[i];
    }
    
    cout<<endl;

    for (size_t i = 0; i <= end; i++)
    {
        if(a[i] < a[min_index])
        {
            min_index = i;
        }
        if(a[i] > a[max_index])
        {
            max_index = i;
        }
        
    }

    swap(a[min_index],a[max_index]);

    cout<< "after swap array: "<< endl;

    for (size_t i = 0; i <= end; i++)
    {
        cout << " "<<a[i];
    }
    
    cout<<endl;
}

int main()
{
    int a[] = {4, 7, 1, 9, 3};
    int size = sizeof(a)/sizeof(a[0]);

    swap_min_max(a,size);

    return 0;
}
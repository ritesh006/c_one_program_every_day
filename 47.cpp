#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {3, 5, 7, 2, 8, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    if (size < 2) {
        printf("Not enough elements to find the second largest.\n");
        return 0;
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    // Find largest and second largest in one pass
    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest; // Update second largest
            largest = arr[i];        // Update largest
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];  // Update second largest
        }
    }

    printf("Second largest number: %d\n", secondLargest);
    
    return 0;
}

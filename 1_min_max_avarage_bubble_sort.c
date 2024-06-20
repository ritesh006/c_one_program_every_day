#include <stdio.h>

int main(int argc, char const *argv[]) {
  int array[5] = {5, 4, 3, 2, 1};
  int n = sizeof(array) / sizeof(array[0]);

  int average = 0;

  // Bubble sort to sort the array in ascending order
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < (n - 1)-i; j++) {
      if (array[j] > array[j + 1]) {
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }

  // Calculate the sum for average calculation
  for (int i = 0; i < n; i++) {
    average = average + array[i];
  }

  // Print maximum, minimum, and average
  printf("Maximum is = %d\n", array[n - 1]);
  printf("Minimum is = %d\n", array[0]);
  printf("Average is = %d\n", average / n);

  return 0;
}

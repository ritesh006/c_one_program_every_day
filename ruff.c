#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/
    int arrayOdd[5];
   int arrayEven[5];
int main()
{
    int N;
    scanf("%d", &N);
    int array1[N];
    int array2[N];
    for (int i = 0; i < N; i++) {

        scanf("%d", &array1[i]);
    }
    // printf("\n");
    // for (int i = 0; i < N; i++) {

    //     printf("%d\n", array1[i]);
    // }
int even = 0;
int odd =0;
    for(int i = 0; i < N-1; i++)
    {
        for(int j = 0; j < N - 1 - i; j++)\
        {
            if(array1[j] > array1[j+1])
            {
                int temp = array1[j];
                array1[j] = array1[j+1];
                array1[j+1] = temp;
            }
        }
    }
   printf("\n");
    for (int i = 0; i < N; i++) {

        printf("%d ", array1[i]);
    }


      for (int i = 0; i < 10; i++) {

       if(array1[i] % 2 == 0)
       {
            arrayEven[even] = array1[i];
            even++;
            printf("%d\n", arrayEven[i]);
       }
       else
       {
        arrayOdd[odd] = array1[i];
        odd++;
       }
    }
    
       printf("\n");
    for (int i = 0; i < 5; i++) {

        printf("%d ", arrayEven[i]);
    }

for (int i = 0; i < 5; i++) {

        printf("%d ", arrayOdd[i]);
    }
    printf("\n");
    return 0;
}
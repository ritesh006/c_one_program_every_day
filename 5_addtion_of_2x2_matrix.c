#include<stdio.h>

int main()
{
    int matrix1[2][2];
    int matrix2[2][2];
    int result[2][2];
    printf("Enter First 2 x 2 matric for addiotn: ");

    for (size_t i = 0; i < 2; i++)
    {
        for(size_t j = 0; j < 2; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
        
    }
  printf("Enter second 2 x 2 matric for addiotn: ");
    for (size_t i = 0; i < 2; i++) {
      for (size_t j = 0; j < 2; j++) {
        scanf("%d", &matrix2[i][j]);
        result[i][j] = matrix1[i][j] + matrix2[i][j];
      }
    }
    printf("Result: ");
    for (size_t i = 0; i < 2; i++) {
      for (size_t j = 0; j < 2; j++) {
        printf("%d ", result[i][j]);
      }
    }

   printf("\n ");

    return 0;
}
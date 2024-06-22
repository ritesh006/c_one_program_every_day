#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter Positive Number: ");
    scanf("%d", &num);
    int sum = 0;
    if(num < 0)
    {
        printf("Your Numbr is Negative\n Enter Positve Number.\n");
    }
    else
    {
        while (num>0)
        {
          int result = num % 10;
          num = num / 10;
          sum = sum + result;
        
        }
        printf("result = %d\n", sum);
    }
    return 0;
}

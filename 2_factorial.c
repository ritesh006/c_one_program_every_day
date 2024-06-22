#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n = 3;

    int fact = 0;
    int temp = 3;
    while (temp)
    {
        fact = fact + temp;
        temp--;
        /* code */
    }
    printf("fact is: %d", fact);

    return 0;
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10, b = 20;

    printf("Before swap A = %d  B = %d\n", a,b);

    a = a * b;
    b = a / b;
    a = a / b;
    printf("After swap A = %d  B = %d\n", a,b);

    return 0;
}

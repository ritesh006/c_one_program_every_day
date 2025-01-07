#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;

    printf("Enter Number: ");
    scanf("%d",&num);

    //num = num % 2; 
    
    num % 2 ? printf("Number is ODD\n") : printf("Number is EVEN\n");
    return 0;
}

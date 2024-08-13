#include <stdio.h>
#include <stdlib.h>

void enter_data(void);
void print_data(void);
int circuler_buffer[8];

size_t count = 0;
int *head = circuler_buffer;
int *tail = circuler_buffer;
int main()
{
    // for(size_t i = 0; i < 8; i++)
    // {
    //     enter_data();
    //     print_data();
    // }

    while(1)
    {
        enter_data();
        print_data();
    }

   return 0;
}
void enter_data(void)
{
    
    printf("Enter Data in Buffer: ");
    scanf("%d",head);
    head++;

    if(count == 7)
    {
        printf("Buffer Full\n");
    }
    int *head = circuler_buffer;
}
void print_data(void)
{
    printf("Data is:  ");
        printf(" %d ",*tail);
       if(count > 0)
       {
         tail++;
         printf("count: %d",count);
       }
       count++;
    printf("\n");

}

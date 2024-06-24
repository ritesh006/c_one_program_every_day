#include <stdio.h>
#include <stdlib.h>
typedef struct record
{
    int data;
    struct record *next;
}sll;

void add_end(sll **head, int data)
{
    sll *p = *head;
    sll *new_data = malloc(sizeof(sll));

    new_data->data = data;
    new_data->next = NULL;
    if (*head == NULL) {
        *head = new_data;  // If head is NULL, make new_data the head
        return;
    }

    while(p->next != NULL)
    {
        p = p->next;
    }

    p->next = new_data;



}
int main()
{
    sll *head = NULL;

    add_end(&head,10);
add_end(&head, 20);
    add_end(&head, 30);

    // Print the linked list to verify
    sll *current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");



    return 0;
}
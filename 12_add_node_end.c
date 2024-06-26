#include <stdio.h>
#include <stdlib.h>

typedef struct records{
    int data;
    struct records *next;
}sll;

void add_end(sll **head, int data)
{
    sll *new_data = malloc(sizeof(sll));
    if(new_data == NULL)
    {
        printf("Memory Not Allocated\n");
    }
    else{
        printf("Memory Allocated\n");
    }

    new_data -> data = data;
    new_data -> next = NULL;

    if(*head == NULL)
    {
        *head = new_data;
        printf("head null\n");
        return;
    }

    sll *temp = *head;

    while(temp -> next!= NULL)
    {
        temp = temp->next;
    }

    temp -> next = new_data;

}

void print(sll *head){
    if(head == NULL)
    {
        printf("No Data\n");
        return;
    }

    while(head != NULL)
    {
        printf("%d\n",head->data);
        head = head -> next;
    }
}

int main(){
    sll *head = NULL;

    add_end(&head, 10);
    add_end(&head, 20);
    add_end(&head, 30);
    add_end(&head, 40);
    print(head);
}
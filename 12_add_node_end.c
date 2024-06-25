    #include <stdio.h>
    #include <stdlib.h>

    typedef struct records{
        int data;
        struct records *next;
    }sll;


    void add_end(sll **head, int data){
        sll *new_data = malloc(sizeof(sll));
        if(new_data == NULL)
        {
            printf("NO Memory allocated\n");
            exit(1);
        }
        else{
            printf("Memory Allocated!\n");
        }
        
        new_data->data = data;
        new_data->next = NULL;

        sll *p = *head;

        if(*head == NULL)
        {
            *head = new_data;
            return;
        }
        while(p->next != NULL)
        {
            p = p->next;
        }

        p->next = new_data;
    }

    void print(sll *head){
        sll *temp = head;
        if(head == NULL)
        {
            printf("NO data found\n");
            exit(1);
        }

        while(temp != NULL)
        {
            printf("%d\n",temp->data);
            temp = temp->next;
        }


    }


    int main(){
        sll *head = NULL;

        add_end(&head, 10);
        add_end(&head, 20);
        add_end(&head, 30);
        print(head);
        return 0;
    }
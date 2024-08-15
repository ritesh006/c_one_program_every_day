#include <stdio.h>

#define BUFFER_SIZE 5  // Define the size of the buffer

int buffer[BUFFER_SIZE];
int head = 0;
int tail = 0;
int count = 0;

// Function to add data to the buffer
void enqueue(int data) {
    if (count == BUFFER_SIZE) {
        // Buffer is full, overwrite the oldest data
        tail = (tail + 1) % BUFFER_SIZE;
    } else {
        count++;
    }
    buffer[head] = data;
    head = (head + 1) % BUFFER_SIZE;
}

// Function to remove data from the buffer
int dequeue() {
    if (count == 0) {
        printf("Buffer is empty\n");
        return -1;  // Return an error code
    }
    int data = buffer[tail];
    tail = (tail + 1) % BUFFER_SIZE;
    count--;
    return data;
}

// Function to print the buffer content
void print_buffer() {
    printf("Buffer content: ");
    if (count == 0) {
        printf("Buffer is empty\n");
        return;
    }
    
    int i = tail;
    int elements = count;
    while (elements > 0) {
        printf("%d ", buffer[i]);
        i = (i + 1) % BUFFER_SIZE;
        elements--;
    }
    printf("\n");
}

int main() {
    int data;
    while (1) {
        printf("Enter Data in Buffer: ");
        scanf("%d", &data);

        enqueue(data);
        print_buffer();

        printf("Data is: %d\n", dequeue());
    }
    return 0;
}

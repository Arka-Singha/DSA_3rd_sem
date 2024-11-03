/*Write a menu driven program to implement queue operations such as enqueue, dequeue,
peek, IsEmpty, IsFull, and display using linked list.*/
#include <stdio.h>
#include <stdlib.h>                                      //Arka Singha - 2230068

// Node structure for the linked list
struct Node {
    int data;
    struct Node* next;
};

// Queue structure
struct Queue {
    struct Node *front, *rear;
    int size;
    int capacity;
};

// Function to initialize an empty queue
void initializeQueue(struct Queue* queue, int capacity) {
    queue->front = queue->rear = NULL;
    queue->size = 0;
    queue->capacity = capacity;
}

// Function to check if the queue is empty
int isEmpty(struct Queue* queue) {
    return queue->front == NULL;
}

// Function to check if the queue is full
int isFull(struct Queue* queue) {
    return queue->size == queue->capacity;
}

// Function to add an element to the rear of the queue (enqueue)
void enqueue(struct Queue* queue, int item) {
    if (isFull(queue)) {
        printf("Queue is full. Cannot enqueue.\n");
        return;
    }

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed. Cannot enqueue.\n");
        return;
    }

    newNode->data = item;
    newNode->next = NULL;

    if (isEmpty(queue)) {
        queue->front = queue->rear = newNode;
    } else {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }

    queue->size++;
    printf("%d enqueued to the queue.\n", item);
}

// Function to remove an element from the front of the queue (dequeue)
void dequeue(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty. Cannot dequeue.\n");
        return;
    }

    struct Node* temp = queue->front;
    int item = temp->data;

    if (queue->front == queue->rear) {
        queue->front = queue->rear = NULL;
    } else {
        queue->front = temp->next;
    }

    free(temp);
    queue->size--;

    printf("%d dequeued from the queue.\n", item);
}

// Function to get the front element of the queue (peek)
void peek(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty. Cannot peek.\n");
        return;
    }

    printf("Peek element: %d\n", queue->front->data);
}

// Function to display the elements of the queue
void display(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty.\n");
        return;
    }

    struct Node* current = queue->front;
    printf("Queue elements: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct Queue queue;
    int capacity;

    printf("Enter the capacity of the queue: ");
    scanf("%d", &capacity);

    initializeQueue(&queue, capacity);

    int choice, item;

    while (1) {
        printf("\nQueue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. IsEmpty\n");
        printf("5. IsFull\n");
        printf("6. Display\n");
        printf("7. Exit\n");

        printf("Enter your choice (1-7): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to enqueue: ");
                scanf("%d", &item);
                enqueue(&queue, item);
                break;
            case 2:
                dequeue(&queue);
                break;
            case 3:
                peek(&queue);
                break;
            case 4:
                printf("Is Queue empty? %s\n", isEmpty(&queue) ? "Yes" : "No");
                break;
            case 5:
                printf("Is Queue full? %s\n", isFull(&queue) ? "Yes" : "No");
                break;
            case 6:
                display(&queue);
                break;
            case 7:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }

    return 0;
}

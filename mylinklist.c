#include <stdio.h>
#include <stdlib.h>

// Define a structure for a singly linked list node
struct Node {
    int data;           // Data of the node
    struct Node* next;  // Pointer to the next node
};

int main() {
    // Declare three nodes
    struct Node* head = NULL;  // The head of the linked list
    struct Node* second = NULL;
    struct Node* third = NULL;

    // Allocate memory for the nodes
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    // Assign data to each node and set the next pointers
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;  // Mark the end of the list

    // Print the linked list
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");

    // Free the allocated memory
    free(head);
    free(second);
    free(third);

    return 0;
}

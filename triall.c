#include <stdio.h>
#include <stdlib.h>

// Define a struct for a singly linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at a specified position in the linked list
void insertNode(struct Node** head, int data, int pos) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    if (new_node == NULL) {
        perror("Memory allocation error");
        exit(1);
    }
    new_node->data = data;

    if (pos == 1 || *head == NULL) {
        // Insert at the beginning or if the list is empty
        new_node->next = *head;
        *head = new_node;
    } else {
        // Insert at the specified position
        struct Node* temp = *head;
        int i = 1;
        while (i < pos - 1 && temp->next != NULL) {
            temp = temp->next;
            i++;
        }
        struct Node* temp1 = temp->next;
        temp->next = new_node;
        new_node->next = temp1;
    }
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    int data, pos;

    // Input data and position
    printf("Enter data for the new node: ");
    scanf("%d", &data);
    printf("Enter the position to insert: ");
    scanf("%d", &pos);

    insertNode(&head, data, pos);

    // Print the updated linked list
    printf("Linked list after insertion: ");
    printList(head);

    return 0;
}


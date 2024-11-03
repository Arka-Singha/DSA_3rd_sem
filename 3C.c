#include <stdio.h>          //2230068 - Arka Singha
#include <stdlib.h>         

// Define a structure for a node in the Circular Doubly Linked List
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

// Function to create a new node with the given data
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode) {
        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = NULL;
    }
    return newNode;
}

// Function to insert a node at the end of the Circular Doubly Linked List
void insertEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (!newNode) {
        printf("Memory allocation failed.\n");
        return;
    }

    if (*head == NULL) {
        // If the list is empty, make the new node the head itself
        *head = newNode;
        newNode->next = newNode;
        newNode->prev = newNode;
    } else {
        // Otherwise, insert the new node at the end
        struct Node* last = (*head)->prev;
        last->next = newNode;
        newNode->prev = last;
        newNode->next = *head;
        (*head)->prev = newNode;
    }
}

// Function to display the Circular Doubly Linked List
void displayList(struct Node* head) {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    struct Node* current = head;
    do {
        printf("%d <-> ", current->data);
        current = current->next;
    } while (current != head);
    printf("(Back to the beginning)\n");
}

int main() {
    struct Node* head = NULL;
    int n, data;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        insertEnd(&head, data);
    }

    printf("Circular Doubly Linked List: ");
    displayList(head);

    return 0;
}


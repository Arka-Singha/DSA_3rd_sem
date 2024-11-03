#include <stdio.h>
#include <stdlib.h>

// Define a structure for a singly linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the beginning of the list
struct Node* insertAtBeginning(struct Node int *root, int *newData) {
    // Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    
    // Set the data for the new node
    newNode->data = newData;
    
    // Make the new node point to the current root of the list
    newNode->next = root;
    
    // Update the root to be the new node
    root = newNode;
    
    return root;
}

// Function to print the linked list
// void printList(struct Node* root) {
//     struct Node* current = root;
//     while (current != NULL) {
//         printf("%d -> ", current->data);
//         current = current->next;
//     }
//     printf("NULL\n");
// }

int main() {
    struct Node root = NULL; // Initialize an empty list
    
    // Insert some elements at the beginning of the list
    root = insertAtBeginning(&root, 3);
    root = insertAtBeginning(&root, 2);
    root = insertAtBeginning(&root, 1);
    
    // Print the linked list
    //printf("Linked List: ");
    //printList(root);
    
    // Clean up: free memory (not shown in this example)

    return 0;
}

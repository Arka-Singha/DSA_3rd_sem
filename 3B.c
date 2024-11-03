#include <stdio.h>                              //Name : Arka Singha
#include <stdlib.h>                             // Roll No: 2230068

// Structure for a node in the double-linked list
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the beginning of the list
void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    if (*head != NULL)
        (*head)->prev = newNode;
    *head = newNode;
}

// Function to insert a node at the end of the list
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

// Function to insert a node at a specified position
void insertAtPosition(struct Node** head, int data, int position) {
    if (position <= 0) {
        printf("Invalid position\n");
        return;
    }

    if (position == 1) {
        insertAtBeginning(head, data);
        return;
    }

    struct Node* newNode = createNode(data);
    struct Node* temp = *head;
    int currentPos = 1;

    while (temp != NULL && currentPos < position - 1) {
        temp = temp->next;
        currentPos++;
    }

    if (temp == NULL) {
        printf("Position exceeds the length of the list\n");
        return;
    }

    newNode->next = temp->next;
    newNode->prev = temp;
    if (temp->next != NULL) {
        temp->next->prev = newNode;
    }
    temp->next = newNode;
}

// Function to delete a node at a specified position
void deleteAtPosition(struct Node** head, int position) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }

    if (position <= 0) {
        printf("Invalid position\n");
        return;
    }

    struct Node* temp = *head;
    int currentPos = 1;

    while (temp != NULL && currentPos < position) {
        temp = temp->next;
        currentPos++;
    }

    if (temp == NULL) {
        printf("Position exceeds the length of the list\n");
        return;
    }

    if (temp->prev != NULL) {
        temp->prev->next = temp->next;
    } else {
        *head = temp->next;
    }

    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }

    free(temp);
}

// Function to count the number of nodes in the list
int countNodes(struct Node* head) {
    int count = 0;
    struct Node* current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

// Function to reverse the list
void reverseList(struct Node** head) {
    struct Node* temp = NULL;
    struct Node* current = *head;

    while (current != NULL) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    if (temp != NULL) {
        *head = temp->prev;
    }
}

// Function to search for a node with a specific value
int searchList(struct Node* head, int value) {
    struct Node* current = head;
    int position = 1;
    while (current != NULL) {
        if (current->data == value) {
            return position;
        }
        current = current->next;
        position++;
    }
    return -1; // Return -1 if the value is not found
}

// Function to check if the list is empty
int isEmpty(struct Node* head) {
    return head == NULL;
}

// Function to traverse the list forward
void traverseForward(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Function to traverse the list backward
void traverseBackward(struct Node* head) {
    struct Node* current = head;
    while (current != NULL && current->next != NULL) {
        current = current->next;
    }

    while (current != NULL) {
        printf("%d ", current->data);
        current = current->prev;
    }
    printf("\n");
}

// Function to free the memory allocated for the list
void freeList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        struct Node* next = current->next;
        free(current);
        current = next;
    }
}

int main() {
    struct Node* head = NULL;
    int choice, data, position;

    while (1) {
        // printf("\n");
        // printf("1. Traverse forward\n");
        // printf("2. Traverse backward\n");
        // printf("3. Check if the list is empty\n");
        // printf("4. Insert node\n");
        // printf("5. Delete node\n");
        // printf("6. Count nodes\n");
        // printf("7. Reverse list\n");
        // printf("8. Search list\n");
        // printf("9. Exit\n");
        // printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                traverseForward(head);
                break;
            case 2:
                traverseBackward(head);
                break;
            case 3:
                if (isEmpty(head)) {
                    printf("The list is empty\n");
                } else {
                    printf("The list is not empty\n");
                }
                break;
            case 4:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                printf("1. Insert at the beginning\n");
                printf("2. Insert at the end\n");
                printf("3. Insert at a specific position\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);
                switch (choice) {
                    case 1:
                        insertAtBeginning(&head, data);
                        break;
                    case 2:
                        insertAtEnd(&head, data);
                        break;
                    case 3:
                        printf("Enter the position to insert: ");
                        scanf("%d", &position);
                        insertAtPosition(&head, data, position);
                        break;
                    default:
                        printf("Invalid choice for insertion\n");
                }
                break;
            case 5:
                printf("1. Delete at the beginning\n");
                printf("2. Delete at the end\n");
                printf("3. Delete at a specific position\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);
                switch (choice) {
                    case 1:
                        deleteAtPosition(&head, 1);
                        break;
                    case 2:
                        deleteAtPosition(&head, countNodes(head));
                        break;
                    case 3:
                        printf("Enter the position to delete: ");
                        scanf("%d", &position);
                        deleteAtPosition(&head, position);
                        break;
                    default:
                        printf("Invalid choice for deletion\n");
                }
                break;
            case 6:
                printf("Number of nodes: %d\n", countNodes(head));
                break;
            case 7:
                reverseList(&head);
                break;
            case 8:
                printf("Enter value to search: ");
                scanf("%d", &data);
                position = searchList(head, data);
                if (position != -1) {
                    printf("Value %d found at position %d\n", data, position);
                } else {
                    printf("Value not found in the list\n");
                }
                break;
            case 9:
                freeList(head);
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}

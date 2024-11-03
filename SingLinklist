#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the beginning of the linked list
struct Node* insertAtBeginning(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = head;
    return newNode;
}

// Function to insert a node at the end of the linked list
struct Node* insertAtEnd(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        return newNode;
    }
    struct Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
    return head;
}

// Function to insert a node at a specific position in the linked list
struct Node* insertAtPosition(struct Node* head, int data, int position) {
    if (position < 1) {
        printf("Invalid position!\n");
        return head;
    }
    if (position == 1 || head == NULL) {
        return insertAtBeginning(head, data);
    }
    struct Node* newNode = createNode(data);
    struct Node* current = head;
    int currentPosition = 1;
    while (currentPosition < position - 1 && current->next != NULL) {
        current = current->next;
        currentPosition++;
    }
    if (current->next == NULL && currentPosition != position - 1) {
        printf("Position out of range!\n");
        return head;
    }
    newNode->next = current->next;
    current->next = newNode;
    return head;
}

// Function to delete a node at the beginning of the linked list
struct Node* deleteAtBeginning(struct Node* head) {
    if (head == NULL) {
        printf("List is empty. Cannot delete.\n");
        return head;
    }
    struct Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}

// Function to delete a node at the end of the linked list
struct Node* deleteAtEnd(struct Node* head) {
    if (head == NULL) {
        printf("List is empty. Cannot delete.\n");
        return head;
    }
    if (head->next == NULL) {
        free(head);
        return NULL;
    }
    struct Node* current = head;
    while (current->next->next != NULL) {
        current = current->next;
    }
    free(current->next);
    current->next = NULL;
    return head;
}

// Function to delete a node at a specific position in the linked list
struct Node* deleteAtPosition(struct Node* head, int position) {
    if (head == NULL) {
        printf("List is empty. Cannot delete.\n");
        return head;
    }
    if (position < 1) {
        printf("Invalid position!\n");
        return head;
    }
    if (position == 1) {
        return deleteAtBeginning(head);
    }
    struct Node* current = head;
    int currentPosition = 1;
    while (currentPosition < position - 1 && current->next != NULL) {
        current = current->next;
        currentPosition++;
    }
    if (current->next == NULL || currentPosition != position - 1) {
        printf("Position out of range!\n");
        return head;
    }
    struct Node* temp = current->next;
    current->next = current->next->next;
    free(temp);
    return head;
}

// Function to delete a node with a specific key from the linked list
struct Node* deleteByKey(struct Node* head, int key) {
    struct Node* current = head;
    struct Node* prev = NULL;

    // If the key is found at the beginning
    if (current != NULL && current->data == key) {
        head = current->next;
        free(current);
        return head;
    }

    // Search for the key
    while (current != NULL && current->data != key) {
        prev = current;
        current = current->next;
    }

    // If the key is not found
    if (current == NULL) {
        printf("Key not found in the list!\n");
        return head;
    }

    // Key found, unlink the node
    prev->next = current->next;
    free(current);
    return head;
}

// Function to count the total number of nodes in the linked list
int countNodes(struct Node* head) {
    int count = 0;
    struct Node* current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

// Function to search for an element in the linked list
int searchElement(struct Node* head, int key) {
    struct Node* current = head;
    int position = 1;
    while (current != NULL) {
        if (current->data == key) {
            return position;
        }
        current = current->next;
        position++;
    }
    return -1; // Element not found
}

// Function to reverse the linked list
struct Node* reverseList(struct Node* head) {
    struct Node* prev = NULL;
    struct Node* current = head;
    struct Node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev; // New head of the reversed list
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    int choice, data, position, key, count, element, result;

    while (1) {
        printf("\n--- Single Linked List Menu ---\n");
        printf("1. Traverse the list\n");
        printf("2. Check if the list is empty\n");
        printf("3. Insert a node\n");
        printf("4. Delete a node\n");
        printf("5. Delete a node by key\n");
        printf("6. Count the total number of nodes\n");
        printf("7. Search for an element\n");
        printf("8. Reverse the list\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("List: ");
                printList(head);
                break;
            case 2:
                if (head == NULL) {
                    printf("List is empty.\n");
                } else {
                    printf("List is not empty.\n");
                }
                break;
            case 3:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                printf("1. Insert at beginning\n");
                printf("2. Insert at end\n");
                printf("3. Insert at a specific position\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);
                switch (choice) {
                    case 1:
                        head = insertAtBeginning(head, data);
                        break;
                    case 2:
                        head = insertAtEnd(head, data);
                        break;
                    case 3:
                        printf("Enter position to insert: ");
                        scanf("%d", &position);
                        head = insertAtPosition(head, data, position);
                        break;
                    default:
                        printf("Invalid choice!\n");
                }
                break;
            case 4:
                if (head == NULL) {
                    printf("List is empty. Cannot delete.\n");
                } else {
                    printf("1. Delete at beginning\n");
                    printf("2. Delete at end\n");
                    printf("3. Delete at a specific position\n");
                    printf("Enter your choice: ");
                    scanf("%d", &choice);
                    switch (choice) {
                        case 1:
                            head = deleteAtBeginning(head);
                            break;
                        case 2:
                            head = deleteAtEnd(head);
                            break;
                        case 3:
                            printf("Enter position to delete: ");
                            scanf("%d", &position);
                            head = deleteAtPosition(head, position);
                            break;
                        default:
                            printf("Invalid choice!\n");
                    }
                }
                break;
            case 5:
                printf("Enter the key to delete: ");
                scanf("%d", &key);
                head = deleteByKey(head, key);
                break;
            case 6:
                count = countNodes(head);
                printf("Total number of nodes: %d\n", count);
                break;
            case 7:
                printf("Enter the element to search for: ");
                scanf("%d", &element);
                result = searchElement(head, element);
                if (result != -1) {
                    printf("Element found at position %d\n", result);
                } else {
                    printf("Element not found in the list\n");
                }
                break;
            case 8:
                head = reverseList(head);
                printf("List reversed.\n");
                break;
            case 9:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}

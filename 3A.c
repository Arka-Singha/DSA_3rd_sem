#include <stdio.h>           //Name : Arka Singha
#include <stdlib.h>          // Roll No: 2230068

// Structure to represent a distance in km and meters
struct Distance {
    int km;
    int meters;
};

// Node structure for the single linked list
struct Node {
    struct Distance data;
    struct Node* next;
};

// Function to create a new node with given distance data
struct Node* createNode(struct Distance data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to add a node at the beginning of the list
void insertAtBeginning(struct Node** head, struct Distance data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

// Function to add a node at the end of the list
void insertAtEnd(struct Node** head, struct Distance data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Function to traverse the list and print the distances
void traverseList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d km %d meters -> ", current->data.km, current->data.meters);
        current = current->next;
    }
    printf("NULL\n");
}

// Function to check if the list is empty
int isEmpty(struct Node* head) {
    return head == NULL;
}

// Function to delete a node at a specific position
void deleteNodeAtPosition(struct Node** head, int position) {
    if (isEmpty(*head)) {
        printf("List is empty. Cannot delete.\n");
        return;
    }

    if (position == 0) {
        struct Node* temp = *head;
        *head = (*head)->next;
        free(temp);
        return;
    }

    struct Node* current = *head;
    int i;
    for (i = 0; i < position - 1 && current->next != NULL; i++) {
        current = current->next;
    }

    if (current->next == NULL || position < 0) {
        printf("Invalid position. Cannot delete.\n");
        return;
    }

    struct Node* temp = current->next;
    current->next = temp->next;
    free(temp);
}

// Function to delete a node with a given key
void deleteNodeWithKey(struct Node** head, struct Distance key) {
    struct Node* current = *head;
    struct Node* prev = NULL;

    if (current != NULL && current->data.km == key.km && current->data.meters == key.meters) {
        *head = current->next;
        free(current);
        return;
    }

    while (current != NULL && (current->data.km != key.km || current->data.meters != key.meters)) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("Key not found. Cannot delete.\n");
        return;
    }

    prev->next = current->next;
    free(current);
}

// Function to count the total number of nodes
int countNodes(struct Node* head) {
    int count = 0;
    struct Node* current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

// Function to search for a given key in the linked list
int searchKey(struct Node* head, struct Distance key) {
    struct Node* current = head;
    int position = 0;
    while (current != NULL) {
        if (current->data.km == key.km && current->data.meters == key.meters) {
            return position;
        }
        current = current->next;
        position++;
    }
    return -1; // Key not found
}

// Function to reverse the sequence of elements in the list
void reverseList(struct Node** head) {
    struct Node* prev = NULL;
    struct Node* current = *head;
    struct Node* next;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head = prev;
}

// Function to add two distances
struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;
    result.km = d1.km + d2.km;
    result.meters = d1.meters + d2.meters;

    if (result.meters >= 1000) {
        result.km += result.meters / 1000;
        result.meters %= 1000;
    }

    return result;
}

int main() {
    struct Node* head = NULL;
    int choice, position;
    struct Distance data, key;

    while (1) {
        printf("\nLinked List Operations:\n");
        printf("1. Traverse the list\n");
        printf("2. Check if the list is empty\n");
        printf("3. Insert a node at the beginning\n");
        printf("4. Insert a node at the end\n");
        printf("5. Insert a node at a certain (0 to n) position\n");
        printf("6. Delete a node at a certain position\n");
        printf("7. Delete a node for the given key\n");
        printf("8. Count the total number of nodes\n");
        printf("9. Search for an element in the linked list\n");
        printf("10. Reverse the sequence elements in a list\n");
        printf("11. Add two distances\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Linked List: ");
                traverseList(head);
                break;
            case 2:
                if (isEmpty(head)) {
                    printf("List is empty.\n");
                } else {
                    printf("List is not empty.\n");
                }
                break;
            case 3:
                printf("Enter the distance to insert at the beginning (in km and meters): ");
                scanf("%d %d", &data.km, &data.meters);
                insertAtBeginning(&head, data);
                break;
            case 4:
                printf("Enter the distance to insert at the end (in km and meters): ");
                scanf("%d %d", &data.km, &data.meters);
                insertAtEnd(&head, data);
                break;
            case 5:
                printf("Enter the position to insert a node (0 for beginning, -1 for end, or a valid position): ");
                scanf("%d", &position);
                printf("Enter the distance to insert (in km and meters): ");
                scanf("%d %d", &data.km, &data.meters);
                if (position == 0) {
                    insertAtBeginning(&head, data);
                } else if (position == -1) {
                    insertAtEnd(&head, data);
                } else {
                    // Check for valid position
                    if (position < 0 || position > countNodes(head)) {
                        printf("Invalid position. Cannot insert.\n");
                    } else {
                        // Insert at the specified position
                        struct Node* current = head;
                        for (int i = 0; i < position - 1; i++) {
                            current = current->next;
                        }
                        struct Node* newNode = createNode(data);
                        newNode->next = current->next;
                        current->next = newNode;
                    }
                }
                break;
            case 6:
                printf("Enter the position to delete a node (0 for beginning, -1 for end, or a valid position): ");
                scanf("%d", &position);
                if (isEmpty(head)) {
                    printf("List is empty. Cannot delete.\n");
                } else if (position == 0) {
                    struct Node* temp = head;
                    head = head->next;
                    free(temp);
                } else if (position == -1) {
                    struct Node* current = head;
                    struct Node* prev = NULL;
                    while (current->next != NULL) {
                        prev = current;
                        current = current->next;
                    }
                    prev->next = NULL;
                    free(current);
                } else {
                    if (position < 0 || position >= countNodes(head)) {
                        printf("Invalid position. Cannot delete.\n");
                    } else {
                        struct Node* current = head;
                        for (int i = 0; i < position - 1; i++) {
                            current = current->next;
                        }
                        struct Node* temp = current->next;
                        current->next = temp->next;
                        free(temp);
                    }
                }
                break;
            case 7:
                printf("Enter the key to delete a node (in km and meters): ");
                scanf("%d %d", &key.km, &key.meters);
                deleteNodeWithKey(&head, key);
                break;
            case 8:
                printf("Total number of nodes: %d\n", countNodes(head));
                break;
            case 9:
                printf("Enter the key to search (in km and meters): ");
                scanf("%d %d", &key.km, &key.meters);
                int position = searchKey(head, key);
                if (position != -1) {
                    printf("Key found at position %d\n", position);
                } else {
                    printf("Key not found in the list.\n");
                }
                break;
            case 10:
                reverseList(&head);
                printf("List reversed.\n");
                break;
            case 11:
                printf("Enter the first distance (in km and meters): ");
                scanf("%d %d", &data.km, &data.meters);
                struct Distance d1 = data;
                printf("Enter the second distance (in km and meters): ");
                scanf("%d %d", &data.km, &data.meters);
                struct Distance d2 = data;
                struct Distance sum = addDistances(d1, d2);
                printf("Sum of distances: %d km %d meters\n", sum.km, sum.meters);
                break;
            case 0:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
//Open Ended DSA Q.II) : Gr A.
// Defining structure for a node
typedef struct Node {
    int coeff;
    int exp;
    struct Node* next;
} Node;

// Function to create a new node with a coefficient and exponent
Node* createNode(int coeff, int exp) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->coeff = coeff;
    newNode->exp = exp;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a new node at the end of the linked list
void insertNode(Node** head, int coeff, int exp) {
    Node* newNode = createNode(coeff, exp);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
}

// Function to display the polynomial
void displayPolynomial(Node* head) {
    if (head == NULL) {
        printf("Polynomial is empty.\n");
        return;
    }
    while (head != NULL) {
        printf("%dx^%d", abs(head->coeff), head->exp);
        if (head->next != NULL) {
            if (head->next->coeff>=0) 
            {
            printf(" + ");
            }
            else
            {
            printf(" - ");
            }
        }
        head = head->next;
    }
    printf("\n");
}

int main() {
    printf("Group -A \n Anish Kumar - 2230065\n Anisha Tiwari - 2230066\n Arka Singha - 2230068\n Arka Banerjee - 2230069\n Arpit Rath - 2230070\n");
    Node* head = NULL;

    insertNode(&head, 5, 7);
    insertNode(&head, -3, 5);
    insertNode(&head, 1, 2);
    insertNode(&head, 9, 0);

    displayPolynomial(head);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

// Structure to represent a node in the stack
struct Node {
    int data;
    struct Node* next;
};

// Structure to represent the stack
struct Stack {
    struct Node* top;
};

// Initialize the stack
void initialize(struct Stack* stack) {
    stack->top = NULL;
}

// Check if the stack is empty
int isEmpty(struct Stack* stack) {
    return (stack->top == NULL);
}

// Push an element onto the stack
void push(struct Stack* stack, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode) {
        newNode->data = value;
        newNode->next = stack->top;
        stack->top = newNode;
        printf("Pushed %d onto the stack.\n", value);
    } else {
        printf("Memory allocation failed. Unable to push.\n");
    }
}

// Pop an element from the stack
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty. Cannot pop from an empty stack.\n");
        return -1; // Return a sentinel value to indicate an error
    } else {
        struct Node* temp = stack->top;
        int poppedValue = temp->data;
        stack->top = temp->next;
        free(temp);
        printf("Popped %d from the stack.\n", poppedValue);
        return poppedValue;
    }
}

// Display the contents of the stack
void display(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack contents: ");
        struct Node* current = stack->top;
        while (current != NULL) {
            printf("%d ", current->data);
            current = current->next;
        }
        printf("\n");
    }
}

int main() {
    struct Stack stack;
    initialize(&stack);
    int choice, value;

    while (1) {
        printf("\nStack Menu:\n");
        printf("1. Check if the stack is empty\n");
        printf("2. Display the contents of the stack\n");
        printf("3. Push\n");
        printf("4. Pop\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (isEmpty(&stack)) {
                    printf("Stack is empty.\n");
                } else {
                    printf("Stack is not empty.\n");
                }
                break;

            case 2:
                display(&stack);
                break;

            case 3:
                printf("Enter a value to push onto the stack: ");
                scanf("%d", &value);
                push(&stack, value);
                break;

            case 4:
                pop(&stack);
                break;

            case 5:
                printf("Exiting the program.\n");
                return 0;

            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    }

    return 0;
}

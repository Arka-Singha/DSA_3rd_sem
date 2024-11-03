#include <stdio.h>      // 2230068 - Arka Singha
#include <stdlib.h>

#define MAX_SIZE 100

// Structure to represent a stack
struct Stack {
    int items[MAX_SIZE];
    int top;
};

// Function to initialize an empty stack
void initialize(struct Stack* stack) {
    stack->top = -1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack* stack) {
    return (stack->top == -1);
}

// Function to check if the stack is full
int isFull(struct Stack* stack) {
    return (stack->top == MAX_SIZE - 1);
}

// Function to push an element onto the stack
void push(struct Stack* stack, int item) {
    if (isFull(stack)) {
        printf("Stack overflow. Cannot push.\n");
    } else {
        stack->items[++(stack->top)] = item;
        printf("Pushed: %d\n", item);
    }
}

// Function to pop an element from the stack
void pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty. Cannot pop.\n");
    } else {
        printf("Popped: %d\n", stack->items[(stack->top)--]);
    }
}

// Function to display the contents of the stack
void display(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack contents: ");
        for (int i = 0; i <= stack->top; i++) {
            printf("%d ", stack->items[i]);
        }
        printf("\n");
    }
}

int main() {
    struct Stack stack;
    initialize(&stack);

    int choice, item;
    char ch;

    do {
        printf("\nMenu:\n");
        printf("a) Check if the stack is empty\n");
        printf("b) Display the contents of the stack\n");
        printf("c) Push\n");
        printf("d) Pop\n");
        printf("e) Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &ch);

        switch (ch) {
            case 'a':
                if (isEmpty(&stack)) {
                    printf("Stack is empty.\n");
                } else {
                    printf("Stack is not empty.\n");
                }
                break;

            case 'b':
                display(&stack);
                break;

            case 'c':
                printf("Enter the element to push: ");
                scanf("%d", &item);
                push(&stack, item);
                break;

            case 'd':
                pop(&stack);
                break;

            case 'e':
                exit(0);

            default:
                printf("Invalid choice, please try again.\n");
        }
    } while (1);

    return 0;
}
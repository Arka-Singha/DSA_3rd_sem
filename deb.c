#include <stdio.h>

void insert(int arr[], int n, int element, int position) {
    for (int i = n - 1; i >= position - 1; i--) {
        arr[i + 1] = arr[i];
    }
    arr[position - 1] = element;
}

void delete(int arr[], int n, int position) {
    for (int i = position - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
}

int linear_search(int arr[], int n, int element) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            return i;
        }
    }
    return -1;
}

void traverse(int arr[], int n) {
    printf("Array Elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int n;
    printf("Enter size n: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("**MENU**\n");
    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("3. Linear Search\n");
    printf("4. Traverse\n");
    printf("5. Exit\n");
    
    while (1) {
        int option;
        printf("Enter option: ");
        scanf("%d", &option);
        if (option == 5) {
            break;
        }
        switch(option) {
            case 1:
                printf("Element to insert: ");
                int element, position;
                scanf("%d", &element);
                printf("Enter Position: ");
                scanf("%d", &position);
                insert(arr, n, element, position);
                printf("Element inserted\n");
                break;
            case 2:
                printf("Enter Position: ");
                scanf("%d", &position);
                delete(arr, n, position);
                printf("Element deleted\n");
                break;
            case 3:
                printf("Enter element to search: ");
                scanf("%d", &element);
                int index = linear_search(arr, n, element);
                if (index == -1) {
                    printf("Element not found\n");
                } else {
                    printf("Element found at index %d\n", index);
                }
                break;
            case 4:
                traverse(arr, n);
                break;
            default:
                printf("Invalid option\n");
        }
        printf("\n");
    }
}
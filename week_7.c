#include <stdio.h>
#include <stdlib.h>                                 //Arka Singha - 2230068
                                                  
// Structure for a node in the binary tree
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to perform pre-order traversal
void preOrderTraversal(struct Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}

// Function to perform in-order traversal
void inOrderTraversal(struct Node* root) {
    if (root != NULL) {
        inOrderTraversal(root->left);
        printf("%d ", root->data);
        inOrderTraversal(root->right);
    }
}

// Function to perform post-order traversal
void postOrderTraversal(struct Node* root) {
    if (root != NULL) {
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        printf("%d ", root->data);
    }
}

// Function to search for a value in the tree
struct Node* search(struct Node* root, int value) {
    if (root == NULL || root->data == value) {
        return root;
    }

    if (value < root->data) {
        return search(root->left, value);
    } else {
        return search(root->right, value);
    }
}

// Function to find the minimum value in the tree
struct Node* findMin(struct Node* root) {
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}

// Function to find the maximum value in the tree
struct Node* findMax(struct Node* root) {
    while (root->right != NULL) {
        root = root->right;
    }
    return root;
}

// Function to find the height of the tree
int findHeight(struct Node* root) {
    if (root == NULL) {
        return -1;
    }

    int leftHeight = findHeight(root->left);
    int rightHeight = findHeight(root->right);

    return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
}

int main() {
    // Creating a sample binary tree
    struct Node* root = createNode(67);
    root->left = createNode(34);
    root->right = createNode(80); 
    root->left->left = createNode(12);
    root->left->right = createNode(45); 
    root->left->left->left = createNode(10);
    root->left->right->left = createNode(38); 
    root->left->right->right = createNode(60);
    root->right->left = createNode(78); root->right->right = createNode(95);
    root->right->right->left = createNode(86);

    int choice, value;
    do { printf("\n");
        //  printf("1: Pre-order traversal\n2: In-order traversal\n3: Post-order traversal\n");
        //  printf("4: Searching\n5: Finding minimum value\n6: Finding maximum value\n7: Finding height\n0: Exit\n");
          printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Pre-order traversal: ");
                preOrderTraversal(root);
                break;
            case 2:
                printf("In-order traversal: ");
                inOrderTraversal(root);
                break;
            case 3:
                printf("Post-order traversal: ");
                postOrderTraversal(root);
                break;
            case 4:
                printf("Enter the value to search: ");
                scanf("%d", &value);
                if (search(root, value) != NULL) {
                    printf("%d found in the tree.\n", value);
                } else {
                    printf("%d not found in the tree.\n", value);
                }
                break;
            case 5:
                printf("Minimum value in the tree: %d\n", findMin(root)->data);
                break;
            case 6:
                printf("Maximum value in the tree: %d\n", findMax(root)->data);
                break;
            case 7:
                printf("Height of the tree: %d\n", findHeight(root));
                break;
            case 0:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 0);

    return 0;
}
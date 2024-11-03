//TREE
//left -> 
#include <stdio.h>
#include <stdlib.h>

// Structure for a binary tree node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node with given data
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to perform Pre-order traversal
void preOrderTraversal(struct Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}

// Function to perform In-order traversal
void inOrderTraversal(struct Node* root) {
    if (root != NULL) {
        inOrderTraversal(root->left);
        printf("%d ", root->data);
        inOrderTraversal(root->right);
    }
}

// Function to perform Post-order traversal
void postOrderTraversal(struct Node* root) {
    if (root != NULL) {
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        printf("%d ", root->data);
    }
}

// Function to search for a value in the tree
struct Node* search(struct Node* root, int key) {
    if (root == NULL || root->data == key) {
        return root;
    }

    if (key < root->data) {
        return search(root->left, key);
    }

    return search(root->right, key);
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
        return -1; // height of an empty tree is -1
    }

    int leftHeight = findHeight(root->left);
    int rightHeight = findHeight(root->right);

    return 1 + ((leftHeight > rightHeight) ? leftHeight : rightHeight);
}

int main() {
    // Creating a sample binary tree
    struct Node* root = createNode(67);
    root->left = createNode(34);
    root->right = createNode(80);
    root->left->left = createNode(12);
    root->left->right = createNode(45);
    root->right->left = createNode(12);
    root->right->right = createNode(18);

    int choice, key;
    do {
        printf("\n1: Pre-order traversal\n2: In-order traversal\n3: Post-order traversal\n");
        printf("4: Searching\n5: Finding minimum value\n6: Finding maximum value\n");
        printf("7: Finding the height of the Tree\n8: Exit\n");
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
                scanf("%d", &key);
                if (search(root, key) != NULL) {
                    printf("Value %d found in the tree.\n", key);
                } else {
                    printf("Value %d not found in the tree.\n", key);
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
            case 8:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 8);

    return 0;
}

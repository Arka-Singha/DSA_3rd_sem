#include <stdio.h>
#include <stdlib.h>
//Open Ended DSA Q.II) : Gr A.
struct Node {
    char data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(char data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void displayPrefix(struct Node* root) {
    if (root != NULL) {
        printf("%c ", root->data);
        displayPrefix(root->left);
        displayPrefix(root->right);
    }
}

void displayPostfix(struct Node* root) {
    if (root != NULL) {
        displayPostfix(root->left);
        displayPostfix(root->right);
        printf("%c ", root->data);
    }
}

int main() {

    printf("Group -A \n Anish Kumar - 2230065\n Anisha Tiwari - 2230066\n Arka Singha - 2230068\n Arka Banerjee - 2230069\n Arpit Rath - 2230070\n");
    struct Node* root = createNode('+');
    root->left = createNode('+');
    root->right = createNode('*');
    root->left->left = createNode('*');
    root->left->right = createNode('*');
    root->left->left->right = createNode('Q');
    root->left->left->left = createNode('P');
    root->left->right->left = createNode('P');
    root->left->right->right = createNode('R');
    root->right->left = createNode('Q');
    root->right->right = createNode('R');

    printf("Prefix form: ");
    displayPrefix(root);
    printf("\n");

    printf("Postfix form: ");
    displayPostfix(root);
    printf("\n");

    return 0;
}

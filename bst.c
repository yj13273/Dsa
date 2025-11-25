#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the node structure
struct Node {
    char type[50];
    char company[50];
    int year;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(char t[], char c[], int y) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->type, t);
    strcpy(newNode->company, c);
    newNode->year = y;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Insert a node into BST based on year
struct Node* insert(struct Node* root, char t[], char c[], int y) {
    if (root == NULL)
        return createNode(t, c, y);

    if (y < root->year)
        root->left = insert(root->left, t, c, y);
    else if (y > root->year)
        root->right = insert(root->right, t, c, y);

    return root;
}

// Find the node with minimum value in a tree (used in deletion)
struct Node* minValueNode(struct Node* node) {
    struct Node* current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}

// Delete a node from BST
struct Node* deleteNode(struct Node* root, int year) {
    if (root == NULL)
        return root;

    if (year < root->year)
        root->left = deleteNode(root->left, year);
    else if (year > root->year)
        root->right = deleteNode(root->right, year);
    else {
        // Node with one or no child
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }

        // Node with two children
        struct Node* temp = minValueNode(root->right);
        strcpy(root->type, temp->type);
        strcpy(root->company, temp->company);
        root->year = temp->year;
        root->right = deleteNode(root->right, temp->year);
    }
    return root;
}

// Inorder traversal (sorted by year)
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%s - %s - %d\n", root->type, root->company, root->year);
        inorder(root->right);
    }
}

// Preorder traversal
void preorder(struct Node* root) {
    if (root != NULL) {
        printf("%s - %s - %d\n", root->type, root->company, root->year);
        preorder(root->left);
        preorder(root->right);
    }
}

// Postorder traversal
void postorder(struct Node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%s - %s - %d\n", root->type, root->company, root->year);
    }
}

// Main function
int main() {
    struct Node* root = NULL;

    // Insert automobiles
    root = insert(root, "Sedan", "Toyota", 2015);
    root = insert(root, "SUV", "Ford", 2018);
    root = insert(root, "Hatchback", "Honda", 2012);
    root = insert(root, "Coupe", "BMW", 2020);
    root = insert(root, "Convertible", "Mercedes", 2017);

    printf("Inorder traversal (sorted by year):\n");
    inorder(root);

    printf("\nPreorder traversal:\n");
    preorder(root);

    printf("\nPostorder traversal:\n");
    postorder(root);

    // Delete a node
    printf("\nDeleting car with year 2018:\n");
    root = deleteNode(root, 2018);
    inorder(root);
    return 0;
}

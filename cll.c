#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* tail = NULL; // global tail

// Create a new node
struct Node* createNode(int x) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = newNode; // points to itself
    return newNode;
}

// Insert at the front
void insertFront(int x) {
    struct Node* newNode = createNode(x);
    if (tail == NULL) {
        tail = newNode;
    } else {
        newNode->next = tail->next;
        tail->next = newNode;
    }
}

// Insert at the end
void insertEnd(int x) {
    struct Node* newNode = createNode(x);
    if (tail == NULL) {
        tail = newNode;
    } else {
        newNode->next = tail->next;
        tail->next = newNode;
        tail = newNode;
    }
}

// Traverse and print
void traverse() {
    if (tail == NULL) {
        printf("List is empty\n");
        return;
    }
    struct Node* temp = tail->next;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != tail->next);
    printf("\n");
}

int main() {
    insertEnd(10);
    insertEnd(20);
    insertFront(5);
    insertEnd(30);

    traverse();

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node* front = NULL;
struct Node* rear = NULL;


struct Node* CreateNode(int x){
    struct Node* t = (struct Node*)malloc(sizeof(struct Node));
    t->data = x;
    t->next = NULL;
}
//Enqueue (Insertion at front)
void insert(int x){
    struct Node *t = CreateNode(x);
    if (rear == NULL){
        front = t;
        rear = t;
        return;
    }
    rear->next = t;
    rear = t;

}
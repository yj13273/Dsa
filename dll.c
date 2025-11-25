#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node *head = NULL;

struct Node* CreateNode(int x){
    struct Node* t = (struct Node*)malloc(sizeof(struct Node));
    t->data = x;
    t->prev = NULL;
    t->next = NULL;
    return t;
}

void InsertFront(int x){
    struct Node *t = CreateNode(x);
    t->next = head;
    if (head != NULL) head->prev = t;
    head = t;
}

void DeleteEnd(){
    if (head == NULL) return;
    if (head->next == NULL){
        free(head);
        head = NULL;
        return;
    }
    struct Node *p = head;
    while (p->next->next != NULL){
        p = p->next;
    }
    free(p->next);
    p->next = NULL;
}

void PrintList(){
    struct Node *p = head;
    while (p != NULL){
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main(){
    InsertFront(20);
    InsertFront(30);
    InsertFront(40);
    PrintList(); // 40 30 20
    DeleteEnd();
    PrintList(); // 40 30
    return 0;
}

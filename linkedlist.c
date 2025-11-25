/*To create a linked list containing student information and to perform the following operations:

Insert a new node at a specified position.

Delete a node based on a given student roll number.

Reverse the linked list.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

struct node* createNode(int x) {
    struct node *t = (struct node*)malloc(sizeof(struct node));
    t->data = x;
    t->next = NULL;
    return t;
}

void insertFront(int x) {
    struct node *t = createNode(x);
    t->next = head;
    head = t;
}

void insertEnd(int x){
    struct node *t = createNode(x);
    if (head == NULL){
        head = t;
        return;
    }
    struct node* p = head;
    while (p->next != NULL){ p = p->next;}
    p->next = t;
}

void insertatindex(int x, int pos){
    if (pos == 1){
        insertFront(x);
        return;
    }
    struct node *t = createNode(x);
    struct node *p = head;
    for (int i = 1; i < pos-1 && p != NULL; i++ ){
        p = p->next;
    }
    t->next = p->next;
    p->next = t;
}

void deletefront(){
    if (head == NULL) return;
    struct node *t = head;
    head = head->next;
    free(t);
}

void deleteEnd(){
    if (head == NULL) return;
    if (head->next == NULL){
        free(head);
        head = NULL;
        return;
    }
    struct node *p = head;
    while (p->next->next != NULL) p = p->next;
    free (p->next);
    p->next = NULL;
}

void deletePos(int pos){
    if (head == NULL) return;
    if (pos == 1 ){
        deleteFront();
        return;
    }
    struct node *p = head;
    int i;
    for (i = 1; i < pos-1 && p->next != NULL; i++){
        p = p->next;
    }
    if (p->next = NULL) return;
    struct node *t = p->next;
    p->next = t->next;
    free(t);
}

void search(int key){
    struct node *p = head;
    int pos = 1;
    while(p != NULL) {
        if(p->data == key) {
            printf("Found at position %d\n", pos);
            return;
        }
        p = p->next;
        pos++;
    }
    printf("Not found\n");
}

void display() {
    struct node *p = head;
    while(p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

void reverse(){
    struct node *prev = NULL;
    struct node *current = head;
    struct node *next;
    while (current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
}

int main() {
    insertFront(10);
    insertEnd(20);
    insertEnd(30);
    insertPos(15, 2);
    display();
    deleteFront();
    display();
    deleteEnd();
    display();
    deletePos(2);
    display();
    insertEnd(40);
    insertEnd(50);
    search(50);
    reverse();
    return 0;
}


#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL; 

void push(int x){   //Insertion at front
    struct Node *t = (struct Node*)malloc(sizeof(struct Node));
    t->data = x;
    t->next = top;
    top = t;
}

void pop(){ //deletion from front
    if (top == NULL){
        printf("Stack is empty.\n");
        return;
    }
    struct Node *t = top;
    top = top->next;
    free(t);
}

void peek(){
    if (top == NULL){
        printf("Stack Underflow.\n");
        return;
    }
    printf("%d\n", top->data);
}

void traverse(){
    if (top == NULL) {
        printf("Stack is empty\n");
        return;
    }
    struct Node *t = top;
    printf("Stack (top -> bottom): ");
    while (t != NULL){
        printf("%d ", t->data);
        t = t->next;
    }
    printf("\n");
}

int main() {
    push(10);
    push(20);
    push(30);

    traverse();         // Output: 30 20 10

    printf("Top element: "); 
    peek();

    pop();
    traverse();         // Output: 20 10

    printf("Top element: "); 
    peek();

    pop();
    pop();
    pop();              // Stack Underflow

    return 0;
}

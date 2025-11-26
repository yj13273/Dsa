#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int arr[SIZE];
int top1 = -1;       // Stack 1 top
int top2 = SIZE;     // Stack 2 top

// Push into Stack 1
void push1(int x) {
    if (top1 + 1 == top2) {
        printf("Stack Overflow\n");
        return;
    }
    arr[++top1] = x;
}

// Push into Stack 2
void push2(int x) {
    if (top1 + 1 == top2) {
        printf("Stack Overflow\n");
        return;
    }
    arr[--top2] = x;
}

// Pop from Stack 1
void pop1() {
    if (top1 == -1) {
        printf("Stack1 Underflow\n");
        return;
    }
    printf("Popped from Stack1: %d\n", arr[top1--]);
}

// Pop from Stack 2
void pop2() {
    if (top2 == SIZE) {
        printf("Stack2 Underflow\n");
        return;
    }
    printf("Popped from Stack2: %d\n", arr[top2++]);
}

// Peek Stack1
void peek1() {
    if (top1 == -1) {
        printf("Stack1 is empty\n");
        return;
    }
    printf("Top of Stack1: %d\n", arr[top1]);
}

// Peek Stack2
void peek2() {
    if (top2 == SIZE) {
        printf("Stack2 is empty\n");
        return;
    }
    printf("Top of Stack2: %d\n", arr[top2]);
}

// Traverse Stack1
void traverse1() {
    if (top1 == -1) {
        printf("Stack1 is empty\n");
        return;
    }
    printf("Stack1: ");
    for (int i = top1; i >= 0; i--)
        printf("%d ", arr[i]);
    printf("\n");
}

// Traverse Stack2
void traverse2() {
    if (top2 == SIZE) {
        printf("Stack2 is empty\n");
        return;
    }
    printf("Stack2: ");
    for (int i = top2; i < SIZE; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    push1(10);
    push1(20);
    push2(100);
    push2(200);

    traverse1();   // Stack1: 20 10
    traverse2();   // Stack2: 100 200

    peek1();       // Top of Stack1: 20
    peek2();       // Top of Stack2: 200

    pop1();        // Popped from Stack1: 20
    pop2();        // Popped from Stack2: 200

    traverse1();   // Stack1: 10
    traverse2();   // Stack2: 100

    return 0;
}

#include <stdio.h>
#define MAX 10

int stack[MAX], top = -1;

void push(int value) {
    if (top == MAX - 1) {
        printf("Stack overflow.\n");
    } else {
        stack[++top] = value;
    }
}

int pop() {
    if (top == -1) {
        printf("Stack underflow.\n");
        return -1;
    } else {
        return stack[top--];
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    printf("Popped element: %d\n", pop());
    display();

    return 0;
}

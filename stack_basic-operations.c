#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int* stack;
    int top;
    int capacity;
} CustomStack;

void initStack(CustomStack* stack, int size) {
    stack->stack = (int*)malloc(size * sizeof(int));
    stack->capacity = size;
    stack->top = -1;
}

void push(CustomStack* stack, int item) {
    if (stack->top == stack->capacity - 1) {
        printf("Stack Overflow!\n");
        return;
    }
    stack->stack[++stack->top] = item;
}

int pop(CustomStack* stack) {
    if (stack->top == -1) {
        printf("Stack Underflow!\n");
        return -1;
    }
    return stack->stack[stack->top--];
}

int peek(CustomStack* stack) {
    if (stack->top == -1) {
        printf("Stack is Empty!\n");
        return -1;
    }
    return stack->stack[stack->top];
}

int isEmpty(CustomStack* stack) {
    return stack->top == -1;
}

void display(CustomStack* stack) {
    if (stack->top == -1) {
        printf("Stack is Empty!\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = 0; i <= stack->top; i++) {
        printf("%d ", stack->stack[i]);
    }
    printf("\n");
}

int main() {
    CustomStack stack;
    int n;

    scanf("%d", &n);

    initStack(&stack, 5); 
    for (int i = 0; i < n; i++) {
        int ele;
        scanf("%d", &ele);
        push(&stack, ele);
    }
    display(&stack);

    printf("Popped element: %d\n", pop(&stack));
    display(&stack);

    printf("Top element: %d\n", peek(&stack));

    free(stack.stack);
    return 0;
}

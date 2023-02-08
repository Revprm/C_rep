// Stack implementation using array in C

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct Stack{
    int top;
    unsigned size;
    int* arr;
}s;

s* new(unsigned size){
    s* Stack = (s*)malloc(sizeof(s));
    Stack->size = size;
    Stack->top  = -1;
    Stack->arr = (int*)malloc(Stack->size * sizeof(int));
    return Stack;
}

int isFull(s* Stack){
    return Stack->top == Stack->size - 1;
}

int isEmpty(s* Stack){
    return Stack->top == -1;
}

void push(s* Stack, int num){
    if (isFull(Stack)) return;
    Stack->arr[++Stack->top] = num;
    printf("%d telah dimasukkan ke dalam stack\n", num);
}

int pop(s* Stack){
    if (isEmpty(Stack)) return INT_MIN;
    return Stack->arr[Stack->top--];
}

int top(s* Stack){
    if (isEmpty(Stack)) return INT_MIN;
    return Stack->arr[Stack->top];
}

int main(){
    s* stack = new(10);
    push(stack, 5);
    push(stack, 10);
    push(stack, 20);
    push(stack, 15);
    push(stack, 29);
    push(stack, 34);
    push(stack, 61);
    push(stack, 53);
    push(stack, 42);
    push(stack, 78);
    push(stack, 100);
        
    while (!isEmpty(stack)){
        printf("%d ", top(stack));
        pop(stack);
    }

    return 0;
}
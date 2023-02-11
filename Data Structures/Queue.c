#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct Queue{
    int front, rear, size;
    unsigned max;
    int* arr;
}Q;

Q* newQueue(unsigned sz){
    Q* queue = (Q*)malloc(sizeof(queue));
    queue->max = sz;
    queue->front = queue->size = 0;
    queue->rear = sz - 1;
    queue->arr = (int*)malloc(queue->max * sizeof(int));
    return queue;
}

int isFull(Q* queue){
    return (queue->size == queue->max);
}

int isEmpty(Q* queue){
    return (queue->size == 0);
}

void enqueue(Q* queue, int num){
    if (isFull(queue)) return;
    queue->rear = (queue->rear + 1) % queue->max;
    queue->arr[queue->rear] = num;
    queue->size++;
    printf("%d telah ditambahkan ke antrian\n", num);
}

int dequeue(Q* queue){
    if (isEmpty(queue)) return INT_MIN;
    int num = queue->arr[queue->front];
    queue->front = (queue->front + 1) % queue->max;
    queue->size--;
    return num;
}

int front(Q* queue){
    if (isEmpty(queue)) return INT_MIN;
    return queue->arr[queue->front];
    
}

int rear(Q* queue){
    if (isEmpty(queue)) return INT_MIN;
    return queue->arr[queue->rear];
}

int main(){
    Q* queue = newQueue(1000);

    enqueue(queue, 5);
    enqueue(queue, 10);
    enqueue(queue, 15);
    enqueue(queue, 20);
    enqueue(queue, 42);
    enqueue(queue, 92);
    enqueue(queue, 18);
    enqueue(queue, 39);

    printf("\nThe front of the queue is %d\n", front(queue));
    printf("The rear of the queue is %d\n", rear(queue));

    printf("The Queue is ");
    while (!isEmpty(queue)){
        printf("%d ", front(queue));
        dequeue(queue);
    }
    
    

    return 0;
}
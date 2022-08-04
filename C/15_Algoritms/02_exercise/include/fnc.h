#ifndef FNC_H
#define FNC_H
#include <stdio.h>
#include <stdlib.h>
 
typedef struct queueNode
{
    int data;
    struct queueNode *next;
} queueNode;
 
typedef queueNode *ptrQueue;
typedef struct Queue
{
    ptrQueue front, rear;
} Queue;
 
Queue *QueueInit();
 
void enqueue(Queue *myQueue, int x);
void dequeue(Queue *myQueue);
void display(Queue *myQueue);
void fillQueue(Queue *queue, int size);
void mergeQueues(Queue *firstQueue, Queue *secondQueue, Queue *mergeQueue, int size);

#endif
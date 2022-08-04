#ifndef FNC_H
#define FNC_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;
typedef Node *ptrQueue;
typedef struct Queue Queue;
Queue *QueueInit();

void enqueue(struct Queue *myQueue, int x);
void dequeue(struct Queue *myQueue);
void display(struct Queue *myQueue);

#endif
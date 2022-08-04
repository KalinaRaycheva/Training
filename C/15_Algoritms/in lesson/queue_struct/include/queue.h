#ifndef FNC_H
#define FNC_H

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node *ptrQueue;

struct Queue
{
    ptrQueue front, rear;
};

struct Queue *QueueInit();

void enqueue(struct Queue *myQueue, int x);
void dequeue();
void display();

#endif
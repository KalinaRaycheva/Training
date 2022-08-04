#include "..\include\queue.h"
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Queue
{
    ptrQueue front, rear;
};

struct Queue *QueueInit()
{
    struct Queue *thisQueue = malloc(sizeof(*thisQueue));
    thisQueue->front = NULL;
    thisQueue->rear = NULL;
    return thisQueue;
};

void enqueue(struct Queue *myQueue, int x)
{
    struct Node *temp;
    temp = malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;

    if (myQueue->front == NULL && myQueue->rear == NULL)
    {
        myQueue->front = myQueue->rear = temp;
        return;
    }
    myQueue->rear->next = temp;
    myQueue->rear = temp;
}

void dequeue(struct Queue *myQueue)
{
    struct Node *temp = myQueue->front;
    if (myQueue->front = NULL)
        return;
    if (myQueue->front == myQueue->rear)
    {
        myQueue->front = myQueue->rear = NULL;
    }
    else
    {
        myQueue->front = myQueue->front->next;
    }
    free(temp);
}

void display(struct Queue *myQueue)
{
    struct Node *tmp = myQueue->front;
    while (tmp)
    {
        printf("%d\n", tmp->data);
        tmp = tmp->next;
    }
}

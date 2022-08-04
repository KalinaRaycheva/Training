#include "..\include\fnc.h"
#include <stdio.h>
#include <stdlib.h>

Queue *QueueInit()
{
    Queue *thisQueue = (Queue *)malloc(sizeof(*thisQueue));
    thisQueue->front = NULL;
    thisQueue->rear = NULL;
    return thisQueue;
}

void enqueue(Queue *myQueue, int x)
{
    queueNode *temp;
    temp = (queueNode *)malloc(sizeof(queueNode));
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
 
void dequeue(Queue *myQueue)
{
    queueNode *temp = myQueue->front;
    if (myQueue->front == NULL)
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
 
void display(Queue *myQueue)
{
    printf("\n");
    queueNode *tmp = myQueue->front;
    while (tmp)
    {
        printf("%d\n", tmp->data);
        tmp = tmp->next;
    }
}

void fillQueue(Queue *queue, int size)
{
	int number = 0;
    printf("Enter %d number: ", size);
	for (int i = 0; i < size; i++)
	{
		scanf(" %d", &number);
		enqueue(queue, number);
	}
}

void mergeQueues(Queue *firstQueue, Queue *secondQueue, Queue *mergeQueue, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (firstQueue->front != NULL && firstQueue->front->data < secondQueue->front->data)
		{
			enqueue(mergeQueue, firstQueue->front->data);
			dequeue(firstQueue);
		}
		else
		{
			enqueue(mergeQueue, secondQueue->front->data);
			dequeue(secondQueue);
		}
	}
}
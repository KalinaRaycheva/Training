/*
10. Като използвате опашка, отпечатайте първите n числа на
Фибоначи.
Напомняне F_0=1, F_1=1, F_2=F_0+F_1=2
или всяка следващо е сбора на предишните две числа
*/
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
void printFib(Queue *queue, int size);

int main()
{
    int N = 0;
    printf("Enter N: ");
    scanf("%d", &N);
    Queue *fib = QueueInit();
    printFib(fib, N);
    return 0;
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
    queueNode *tmp = myQueue->front;
    while (tmp)
    {
        printf("%d\n", tmp->data);
        tmp = tmp->next;
    }
}

Queue *QueueInit()
{
    Queue *thisQueue = (Queue *)malloc(sizeof(*thisQueue));
    thisQueue->front = NULL;
    thisQueue->rear = NULL;
    return thisQueue;
}

void printFib(Queue *queue, int size)
{
    enqueue(queue, 1);
    printf("%d ", queue->front->data);
    enqueue(queue, 1);
    printf("%d ", queue->rear->data);
    int data = 0;
    for (int i = 3; i <= size; i++)
    {
        data = queue->front->data + queue->rear->data;
        enqueue(queue, data);
        printf("%d ", data);
        dequeue(queue);
    }
}
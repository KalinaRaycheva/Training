#include "..\include\queue.h"

int main()
{
    struct Queue * firstQueue;
    firstQueue = QueueInit();
    enqueue (firstQueue, 5);
    enqueue(firstQueue, 55);
    enqueue(firstQueue, 555);
    enqueue(firstQueue, 5555);
    dequeue(firstQueue);
    display(firstQueue);
         
    return 0;
}
#include "..\include\queue.h"

#define SIZE 15

int main()
{
    struct Queue *firstQueue = QueueInit();
    struct Queue *secondQueue = QueueInit();
    struct Queue *thirdQueue = QueueInit();

    int nums[SIZE] = {0};
    for (int i = 0; i < SIZE; i++)
    {
   		printf("Enter %d nums: ", i);
        scanf(" %d", &nums[i]);
        if (nums[i] < 1)
            enqueue(firstQueue, nums[i]);
        else if (nums[i] >= 10 && nums[i] <= 50)
            enqueue(secondQueue, nums[i]);
        else
            enqueue(thirdQueue, nums[i]);
    }
	
	printf("first:\n");
    display(firstQueue);
	
	printf("second:\n");
    display(secondQueue);
	
	printf("third:\n");
    display(thirdQueue);
    return 0;
}
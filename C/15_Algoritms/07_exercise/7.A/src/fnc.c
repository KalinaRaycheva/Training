#include "..\include\fnc.h"
#include <stdio.h>

int setStackSize()
{
	int size = 0;
	printf("Enter Stack size: ");
	scanf("%d", &size);
	return size;
}

int maxSum(Stack *stack)
{
	int sum = 0;
	for (stackNode *temp = stack->top; temp != NULL; temp = temp->prev)
	{
		sum += temp->data;
	}
	return sum;
}
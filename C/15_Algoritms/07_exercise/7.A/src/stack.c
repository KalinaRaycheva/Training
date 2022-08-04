#include "..\include\stack.h"
#include <stdio.h>
#include <stdlib.h>
 
Stack *initStack()
{
    Stack *currentNode = (Stack *)malloc(sizeof(Stack));
    currentNode->top = NULL;
 
    return currentNode;
}
 
void fillStack(Stack *stack, int size)
{
    int number = 0;
    printf("Enter %d numbers: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf(" %d", &number);
        push(stack, number);
    }
}

void push(Stack *currentStack, int data)
{
    struct stackNode *tmp = (stackNode *)malloc(sizeof(stackNode));
    tmp->data = data;
    if (currentStack->top == NULL)
    {
        currentStack->top = tmp;
        tmp->prev = NULL;
 
        return;
    }
    tmp->prev = currentStack->top;
    currentStack->top = tmp;
}
 
void pop(Stack *currentStack)
{
    struct stackNode *tmp = currentStack->top;
    if (currentStack == NULL)
    {
        printf("The stack is empty");
        return;
    }
    currentStack->top = tmp->prev;
    free(tmp);
}
 
void display(struct Stack *currentStack)
{
    struct stackNode *tmp = currentStack->top;
    while (tmp != NULL)
    {
        printf("%d ", tmp->data);
        tmp = tmp->prev;
    }
    printf("\n");
}
#include "..\include\stack.h"

Stack *initStack()
{
    Stack *currentNode = (Stack *)malloc(sizeof(Stack));
    currentNode->top = NULL;

    return currentNode;
}

void printLimitedData(Stack *stack)
{
    char name[20];
    int counter = 0;
    while (counter < LIMIT)
    {
        printf("Enter name: ");
        scanf("%s", &name);
        push(stack, name);
        counter += strlen(name);
    }

    printf("%s", name);
}

void push(Stack *currentStack, char *data)
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
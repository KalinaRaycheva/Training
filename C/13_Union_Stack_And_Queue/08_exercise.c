/*
8. Даден е стек от произволни реални числа. Да се напише програма, която
изтрива от този стек всички отрицателни числа.
*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

typedef struct stackNode
{
    int data;
    struct stackNode *prev;
} stackNode;

typedef struct Stack
{
    struct stackNode *top;
} Stack;

Stack *initStack();
void push(Stack *currentStack, int data);
void pop(Stack *currentStack);
void display(Stack *currentStack);
void randomFillStack(Stack *stack);
Stack *removeNegative(Stack *stack);

int main()
{
    Stack *numbers = initStack();
    randomFillStack(numbers);
    display(numbers);
    numbers = removeNegative(numbers);
    display(numbers);
    return 0;
}


Stack *initStack()
{
    Stack *currentNode = (Stack *)malloc(sizeof(Stack));
    currentNode->top = NULL;

    return currentNode;
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

void randomFillStack(Stack *stack)
{
    int number = 0;
    for (int i = 0; i < SIZE; i++)
    {
        number = rand() % 100;
        if (i % 3 == 0)
            number *= -1;
        
        push(stack, number);
    }
}

Stack *removeNegative(Stack *stack)
{
    Stack *positiveStack = initStack();
    for (int i = 0; i < SIZE; i++)
    {
        if(stack->top->data >= 0)
            push(positiveStack, stack->top->data);

        pop(stack);
    }
    return positiveStack;
}

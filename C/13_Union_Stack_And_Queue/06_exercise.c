/*
6. Дадени сa два стека с числа и числата в тях са сортирани във низходящ
ред отдолу нагоре.Да се напише програма на C, която слива двата стека в
сортиран масив
*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

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
void fillStack(Stack *stack);
void combineStacks(int *array, Stack *firstStack, Stack *secondStack);
void swap(int *x, int *y);
void bubbleSort(int *array);
void printArray(int *array);

int main()
{
    Stack *firstStack = initStack();
    fillStack(firstStack);
    Stack *secondStack = initStack();
    fillStack(secondStack);
    int *array = (int *)calloc(SIZE * 2, sizeof(int));
    combineStacks(array, firstStack, secondStack);
    bubbleSort(array);
    printArray(array);
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

void fillStack(Stack *stack)
{
    int number = 0, temp = 0;
    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter number: ");
        scanf("%d", &number);
        while (temp > number)
        {
            printf("Enter a greater number: ");
            scanf("%d", &number);
        }
        temp = number;
        push(stack, number);
    }
}

void combineStacks(int *array, Stack *firstStack, Stack *secondStack)
{
    int i = 0;
    for (stackNode *temp = firstStack->top; temp != NULL; temp = temp->prev)
        array[i++] = temp->data;

    for (stackNode *temp = secondStack->top; temp != NULL; temp = temp->prev)
        array[i++] = temp->data;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int *array)
{
    int n = SIZE * 2;
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (array[j] > array[j + 1])
                swap(&array[j], &array[j + 1]);
}

void printArray(int *array)
{
    for (int i = 0; i < SIZE * 2; i++)
        printf("%d ", array[i]);
    printf("\n");
}
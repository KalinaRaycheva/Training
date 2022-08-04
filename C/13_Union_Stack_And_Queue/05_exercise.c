/*
5. Използвайте динамична реализация на стек за въвеждане на поредица от цели положителни
числа и нейното извеждане върху екрана в обратен ред. За край на поредицата от
клавиатурата се въвежда 0.
*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 6

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

int main()
{
    int data = 0;
    Stack *nums = initStack();
    for(int i = 1; i <= SIZE; i++){
        printf("Enter data: "); scanf("%d", &data);
        push(nums, data);
    }
    display(nums);
    
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

#ifndef STACK_H
#define STACK_H
 
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
void fillStack(Stack *stack, int size);
void push(Stack *currentStack, int data);
void pop(Stack *currentStack);
void display(Stack *currentStack);
 
#endif
#ifndef STACK_H
#define STACK_H
#include <stdlib.h>
 
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
 
#endif
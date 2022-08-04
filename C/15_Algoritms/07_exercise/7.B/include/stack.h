#ifndef STACK_H
#define STACK_H
#define LIMIT 20
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stackNode
{
    char *data;
    struct stackNode *prev;
} stackNode;
 
typedef struct Stack
{
    struct stackNode *top;
} Stack;
 
Stack *initStack();
void printLimitedData(Stack *stack);
void push(Stack *currentStack, char *data);
 
#endif
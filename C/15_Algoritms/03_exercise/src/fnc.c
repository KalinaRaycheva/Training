#include "..\include\fnc.h"
#include <stdio.h>

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

void changeElement(Stack *numbers, int position, int data){
    Stack *temp = initStack();
    for (int i = 1; i < position; i++)
    {
        push(temp, numbers->top->data);
        pop(numbers);
    }
    numbers->top->data = data;
    for (int i = 1; i < position; i++)
    {
        push(numbers, temp->top->data);
        pop(temp);
    }
    free(temp);
}

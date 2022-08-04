/*
12. Като използвате стек, напишете програма, която прочита едно
цяло положително число и преобразува това число в двоична
бройна система, т.е. записва го в двоичен вид.
*/
#include <stdio.h>
#include <stdlib.h>
#define LEN 5
struct Node
{
    int data;
    struct Node *next;
};
void push(struct Node **top, int value);
void pop(struct Node **top);
void displayStack(struct Node **top);
void printReversedOrder(struct Node *top);
void decToBinary(int n);

int main()
{
    int n = 10;
    decToBinary(n);
    return 0;
}

void push(struct Node **top, int value)
{
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value; // assign value to the node
    if ((*top) == NULL)
    {
        newNode->next = NULL;
    }
    else
    {
        newNode->next = (*top); // Make the node as top
    }
    (*top) = newNode; // top always points to the newly created node
}

void pop(struct Node **top)
{
    if ((*top) == NULL)
    {
        printf("\nStack Underflow\n");
    }
    else
    {
        struct Node *temp = (*top);
        int temp_data = (*top)->data;
        (*top) = (*top)->next;
        free(temp);
    }
}
void decToBinary(int n)
{
    struct Node *s = NULL;
    while (n > 0)
    {
        push(&s, n % 2);
        n = n / 2;
    }
    displayStack(&s);
}
void displayStack(struct Node **top)
{
    // Display the elements of the stack
    if ((*top) == NULL)
    {
        printf("\nStack Underflow\n");
    }
    else
    {
        struct Node *temp = (*top);
        while (temp->next != NULL)
        {
            printf("%d", temp->data);
            temp = temp->next;
        }
        printf("%d\n", temp->data);
    }
}

/*
11. Напишете програма, която въвежда едно голямо цяло число,
записано в масив и като използвате стек и опашка запишете
това число в обратен ред, четено отзад напред.
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
void printRevNumber(int arr[]);

int main(){
    int arr[LEN];
    arr[0]=5;
    arr[1]=4;
    arr[2]=3;
    arr[3]=2;
    arr[4]=1;
    printf("Number before: ");
    for(int i=0;i<LEN;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    printf("Number after: ");
    printRevNumber(arr);
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
void printRevNumber(int arr[])
{
    struct Node *s = NULL;
    for (int i = 0; i < LEN; i++)
    {
        push(&s, arr[i]);
    }
    displayStack(&s);
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

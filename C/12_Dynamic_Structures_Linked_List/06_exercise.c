/*
Задача 6. Напишете програма за триене на N-тия елемент от края на двойно
свързан списък.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct TDList
{
    int data;
    struct TDList *next;
    struct TDList *prev;

} TDList;

TDList *head, *tail;

void createTDList();
void display();
void displayReverse();
void removeElementFromBehind(int n);

int main()
{
    for (int i = 0; i < 5; i++)
    {
        createTDList();
    }
    display();
    displayReverse();
    removeElementFromBehind(3);
    display();
    displayReverse();

    return 0;
}

void createTDList()
{
    TDList *current = (TDList *)malloc(sizeof(TDList));
    int num;
    printf("Enter num : ");
    scanf("%d", &num);
    current->data = num;
    if (head == NULL)
    {
        head = current;
        tail = current;
        current->prev = NULL;
        current->next = NULL;
    }
    else
    {
        current->prev = tail;
        tail->next = current;
        current->next = NULL;
        tail = current;
    }
}

void display()
{
    TDList *current = head;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

void displayReverse()
{
    TDList *current = tail;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->prev;
    }
    printf("\n");
}
void removeElementFromBehind(int n)
{
    TDList *remove = tail;
    while (n > 1)
    {
        remove = remove->prev;
        n--;
    }
    TDList *tmp = remove->next;
    tmp->prev = remove->prev;
    tmp = remove->prev;
    tmp->next = remove->next;
    free(remove);
}
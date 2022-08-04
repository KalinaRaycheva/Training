/*
Задача 6. Напишете програма за въвеждане на елемент по средата на двойно
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
int TDListLength();
void addElToMiddle();

int main()
{
    for (int i = 0; i < 5; i++)
    {
        createTDList();
    }
    display();
    displayReverse();
    addElToMiddle();
    display();
    displayReverse();
}

void createTDList()
{
    TDList *current = (TDList *)malloc(sizeof(TDList));
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    current->data = n;
    if (head == NULL)
    {
        head = current;
        tail = current;
        head->next = NULL;
        head->prev = NULL;
    }
    else
    {
        current->prev = tail;
        current->next = NULL;
        tail->next = current;
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
int TDListLength()
{
    TDList *current = head;
    int j = 0;
    while (current != NULL)
    {
        current = current->next;
        j++;
    }
    return j;
}

void addElToMiddle()
{
    TDList *current = head;
    TDList *elToAdd = (TDList *)malloc(sizeof(TDList));
    int num;
    printf("Enter element to add : ");
    scanf("%d", &num);
    elToAdd->data = num;
    int len = TDListLength();
    if (len % 2 == 0)
    {
        len /= 2;
    }
    else
    {
        len = (len + 1) / 2;
    }
    int count = 1;
    while (count < len)
    {
        current = current->next;
        count++;
    }

    elToAdd->next = current->next;
    elToAdd->prev = current;
    current->next = elToAdd;
    current = elToAdd->next;
    current->prev = elToAdd;
}

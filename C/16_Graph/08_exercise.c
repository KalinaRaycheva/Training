/*
Задача 8. Напишете програма за триене на елемент от двойно свързан списък по
зададена позиция в него.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct TDListNode
{
    int m_nValue;
    struct TDListNode *m_pNextNode;
    struct TDListNode *m_pPrevNode;
} TDListNode;

TDListNode *head, *tail = NULL;
void createTDListNode();
void display();
void displayReverse();
void removeElement(int n);
void addElement(int n);

int main()
{

    for (int i = 0; i < 5; i++)
    {
        createTDListNode();
    }
    display();
    removeElement(5);
    // addElement(5);
    display();
    displayReverse();
}

void createTDListNode()
{
    TDListNode *current = (TDListNode *)malloc(sizeof(TDListNode));
    int num;
    printf("Enter num : ");
    scanf("%d", &num);
    current->m_nValue = num;
    if (head == NULL)
    {

        current->m_pPrevNode = NULL;
        current->m_pNextNode = NULL;
        head = current;
        tail = current;
    }
    else
    {
        current->m_pNextNode = NULL;
        current->m_pPrevNode = tail;
        tail->m_pNextNode = current;
        tail = current;
    }
}

void display()
{
    TDListNode *current = head;
    while (current != NULL)
    {
        printf("%d ", current->m_nValue);
        current = current->m_pNextNode;
    }
    printf("\n");
}

void displayReverse()
{
    TDListNode *current = tail;
    while (current != NULL)
    {
        printf("%d ", current->m_nValue);
        current = current->m_pPrevNode;
    }
    printf("\n");
}

void removeElement(int n)
{
    TDListNode *current = head;
    while (current->m_nValue != n)
    {
        current = current->m_pNextNode;
    }

    if (current == head)
    {
        head = current->m_pNextNode;
        head->m_pPrevNode = NULL;
        free(current);
    }
    else
    {
        TDListNode *tmp = current->m_pNextNode;
        tmp->m_pPrevNode = current->m_pPrevNode;
        tmp = current->m_pPrevNode;
        tmp->m_pNextNode = current->m_pNextNode;
        free(current);
    }
}
void addElement(int n)
{
    TDListNode *current = head;
    TDListNode *addElement = (TDListNode *)malloc(sizeof(TDListNode));
    int num;
    printf("Enter value of element to add : ");
    scanf("%d", &num);
    addElement->m_nValue = num;
    while (current->m_nValue != n)
    {
        current = current->m_pNextNode;
    }

    if (current == tail)
    {
        tail = addElement;
        tail->m_pPrevNode = current;
        tail->m_pNextNode = NULL;
    }
    else
    {
        addElement->m_pNextNode = current->m_pNextNode;
        addElement->m_pPrevNode = current;
        current->m_pNextNode = addElement;
        current = addElement->m_pNextNode;
        current->m_pPrevNode = addElement;
    }
}

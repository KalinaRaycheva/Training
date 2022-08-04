#include "listfnc.h"
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

struct node
{
    int value;
    struct node *next;
};

node *initiateNode()
{
    node *start = (node *)malloc(sizeof(node));
    return start;
}

void fillNodeValues(node *start)
{
    start->value = 0;
    start->next = NULL;
    node *current = NULL;

    for (int i = 1; i < SIZE; i++)
    {
        current = (node *)malloc(sizeof(node));
        current->value = i;
        current->next = NULL;
        start->next = current;
        start = start->next;
    }
}

void display(node *list)
{
    node *ptr = NULL;
    if (list == NULL)
    {
        printf("List is empty!\n");
        return;
    }
    else
    {
        ptr = list;
        while (ptr != NULL)
        {
            printf("%d\t", ptr->value);
            ptr = ptr->next;
        }
        printf("\n");
    }
}

void split(node *list)
{
    //count nodes in list
    int countNodes = 0;
    node *count = initiateNode();
    count = list;
    while(count != NULL){
        countNodes++;
        count = count->next;
    }
    //search even and odd positions
    node *evenList = initiateNode();
    evenList->value = list->value;
    evenList->next = NULL;
    list = list->next;
    node *oddList = initiateNode();
    oddList->value = list->value;
    oddList->next = NULL;
    node *tmpEven = evenList, *tmpOdd = oddList, *current = NULL;
    for (int i = 2; i < countNodes; i++)
    {
        list = list->next;
        current = initiateNode();
        if (i % 2 == 0)
        {
            current->value = list->value;
            tmpEven->next = current;
            tmpEven = current;
        }
        else
        {
            current->value = list->value;
            tmpOdd->next = current;
            tmpOdd = current;
        }
    }

    tmpOdd->next = NULL;
    tmpEven->next = NULL;

    printf("The nodes of the even positions are:\n");
    display(evenList);
    printf("The nodes of the odd positions are:\n");
    display(oddList);
    freeList(evenList);
    freeList(oddList);
}

void freeList(node *head)
{
    node *tmp;
    while (head != NULL)
    {
        tmp = head;
        head = head->next;
        free(tmp);
    }
}

void insertList(node *start, node *list)
{
    if(list == NULL)
    {
        list = initiateNode();
        fillNodeValues(list);
    }

    while(start->next != NULL)
        start = start->next;

    start->next = list;
}

void menuOpen(node *start)
{
    do
    {
        printf(".......... Linked list ..........\n");
        printf("1. Insert at specified position\n");
        printf("2. Insert list\n");
        printf("3. Split\n");
        printf("4. Delete from specified position\n");
        printf("5. Display\n");
        printf("0. Quit\n");
        printf(".................................\n");
        printf("Enter your choise: ");

        int option = -1; scanf("%d", &option);
        node *list = NULL;

        switch (option)
        {
            case 1:
                insertPos(&start);
                break;

            case 2:
                insertList(start, list);
                break;

            case 3:
                split(start);
                break;

            case 4:
                deletePosition(&start);
                break;

            case 5:
                printf("List values: \n");
                display(start);
                break;

            case 0:
                exit(0);
            default:
                printf("Your options are only from 0 to 5.\n\n");
        }
    } while (1);
}

void insertPos(node **start)
{
    node *ptr = NULL, *temp = NULL;
    int position = 0;
    temp = (node *)malloc(sizeof(node));
    if (temp == NULL)
    {
        printf("Out of Memory Space!\n");
        return;
    }
    printf("Enter the position for the new node to be inserted: ");
    scanf("%d", &position);
    printf("Enter the data value of the node: ");
    scanf("%d", &temp->value);

    temp->next = NULL;
    if (position == 1)
    {
        temp->next = (*start);
        (*start) = temp;
    }
    else
    {
        ptr = (*start);
        for (int i = 2; i < position; i++)
        {
            ptr = ptr->next;
            if (ptr == NULL)
            {
                printf("Position not found!\n");
                return;
            }
        }
        temp->next = ptr->next;
        ptr->next = temp;
    }
}

void deletePosition(node **start)
{
    if ((*start) == NULL)
    {
        printf("The List is Empty!\n");
        return;
    }
    else
    {
        int position = 0;
        node *ptr = NULL;
        printf("Enter the position of the node to be deleted: ");
        scanf("%d", &position);
        if (position == 1)
        {
            ptr = (*start);
            (*start) = (*start)->next;
            printf("The deleted element is: %d\n", ptr->value);
            free(ptr);
        }
        else
        {
            node *temp = NULL;
            ptr = (*start);
            for (int i = 1; i < position; i++)
            {
                temp = ptr;
                ptr = ptr->next;
                if (ptr == NULL)
                {
                    printf("Position not found!\n");
                    return;
                }
            }
            temp->next = ptr->next;
            printf("The deleted element is: %d\n", ptr->value);
            free(ptr);
        }
    }
}
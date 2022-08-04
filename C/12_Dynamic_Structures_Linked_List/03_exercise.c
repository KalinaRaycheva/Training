/*
Задача 3. Моделиране на играта “Броеница”: N деца застават в кръг
и получават номера от 1 до N. Като се започне от дете 1, по
часовниковата стрелка се отброяват М деца. Дете с номер М излиза
от кръга, след което започва ново броене от следващото дете.
Продължава, докато остане само едно дете, чийто номер трябва да
се определи.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int num;
    struct node *next;
} node;

node *head, *tail = NULL;

void createNode();
void display();
void removeM(node *s);

int main()
{
    int kidn;
    int m;
    printf("Enter kids number : ");
    scanf("%d", &kidn);
    printf("Enter M : ");
    scanf("%d", &m);
    for (int i = 0; i < kidn; i++)
    {
        createNode(i + 1);
    }
    display();
    node *current = head;
    while (head->next != head)
    {
        for (int i = 1; i < m - 1; i++)
        {
            current = current->next;
        }

        removeM(current);

        current = current->next;

        printf("After the round : \n");
        display();
    }

    return 0;
}

void createNode(int i)
{
    node *current = (node *)malloc(sizeof(node));
    current->num = i;
    current->next = head;
    if (head == NULL)
    {
        head = current;
        tail = current;
    }
    else
    {
        tail->next = current;
        tail = current;
    }
}

void display()
{
    node *current = head;
    while (current->next != head)
    {
        printf("%d ", current->num);
        current = current->next;
    }
    printf("%d\n", current->num);
}

void removeM(node *s)
{
    node *elToDelete;

    elToDelete = s->next;
    if (elToDelete == head)
    {
        head = head->next;
        tail->next = head;
        free(elToDelete);
    }
    else if (elToDelete == tail)
    {
        tail = s;
        tail->next = head;
        free(elToDelete);
    }
    else
    {
        s->next = elToDelete->next;
        free(elToDelete);
    }
}

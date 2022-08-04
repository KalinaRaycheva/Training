/*
Задача 2. Направете едносвързан списък, съдържащ числата 1-14 и
принтирайте петия елемент от края му.
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 14

typedef struct t_node{
    int m_nValue;
    struct t_node *m_pNext;
} t_node;

void display(t_node *start);

int main(){
    t_node *start = NULL, *current = NULL, *previous = NULL;
    start = (t_node*)malloc(sizeof(t_node));
    start->m_nValue = 1;
    start->m_pNext = NULL;
    current = start;
    for (int i = 2; i <= SIZE; i++){
        previous = current;
        current = (t_node *)malloc(sizeof(t_node));
        current->m_nValue = i;
        current->m_pNext = NULL;
        previous->m_pNext = current;
    }

    display(start);

    t_node *ptr = start;
    int len = SIZE - 5; // 5 from backward
    for (int i = 0; i < len; i++)
        ptr = ptr->m_pNext;

    printf("Value of %d = %d", SIZE - 4, ptr->m_nValue);

    return 0;
}

void display(t_node *start){
    t_node *ptr = NULL;
    if (start == NULL){
        printf("List is empty!\n");
        return;
    }else{
        ptr = start;
        printf("The List elements are:\n");
        while (ptr != NULL){
            printf("%d\t", ptr->m_nValue);
            ptr = ptr->m_pNext;
        }
        printf("\n");
    }
}
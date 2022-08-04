/*
Задача 1. Реализация на списък. Напишете програма, която добавя и
изтрива елемент от списък по позиция в списъка. Използвайте следния
елемент на динамичния списък:
typedef struct t_node {
int m_nValue;
t_node* m_pNext;
} t_node;
*/

#include <stdio.h>
#include <stdlib.h>

void display();
void insert_pos();
void delete_pos();

typedef struct t_node{
    int m_nValue;
    t_node *m_pNext;
}t_node;

t_node *start = NULL;

int main(){
    int choice;
    while (1){
        printf("\t\tMENU\n");
        printf("1.Display\n");
        printf("2.Insert at specified position\n");
        printf("3.Delete from specified position\n");
        printf("0.Exit\n");
        printf("--------------------------------------\n");
        printf("Enter your choice: "); scanf("%d", &choice);
        switch (choice){
            case 1:
                display();
                break;
            case 2:
                insert_pos();
                break;
            case 3:
                delete_pos();
                break;
            case 0:
                exit(0);
                break;
            default:
                printf("Wrong input!\n");
                break;
        }
    }
    return 0;
}

void display(){
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

void insert_pos(){
    t_node *ptr = NULL, *temp = NULL;
    int i, pos;
    temp = (t_node *)malloc(sizeof(t_node));
    if (temp == NULL){
        printf("Out of Memory Space!\n");
        return;
    }
    printf("Enter the position for the new node to be inserted: "); scanf("%d", &pos);
    printf("Enter the data value of the node: "); scanf("%d", &temp->m_nValue);

    temp->m_pNext = NULL;
    if(pos == 0){
        temp->m_pNext = start;
        start = temp;
    }else{
        for (i = 0, ptr = start; i < pos - 1; i++){
            ptr = ptr->m_pNext;
            if (ptr == NULL){
                printf("Position not found!\n");
                return;
            }
        }
        temp->m_pNext = ptr->m_pNext;
        ptr->m_pNext = temp;
    }
}

void delete_pos(){
    int i, pos;
    t_node *temp = NULL, *ptr = NULL;
    if (start == NULL){
        printf("The List is Empty!\n");
        exit(0);
    }else{
        printf("Enter the position of the node to be deleted: "); scanf("%d", &pos);
        if (pos == 0){
            ptr = start;
            start = start->m_pNext;
            printf("The deleted element is: %d\n", ptr->m_pNext);
            free(ptr);
        }else{
            ptr = start;
            for (i = 0; i < pos; i++){
                temp = ptr;
                ptr = ptr->m_pNext;
                if (ptr == NULL){
                    printf("Position not Found!\n");
                    return;
                }
            }
            temp->m_pNext = ptr->m_pNext;
            printf("The deleted element is: %d\n", ptr->m_pNext);
            free(ptr);
        }
    }
}
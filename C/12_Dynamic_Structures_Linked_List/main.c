#include <stdio.h>
#include <stdlib.h>

typedef struct TDListNode{
    int m_nValue;
    struct TDListNode *m_pNextNode;
    struct TDListNode *m_PrevNode;
}TDListNode;

void print(TDListNode *s);

int main(){
    TDListNode *start = NULL;
    TDListNode *current = (TDListNode *)malloc(sizeof(TDListNode));
    
    if (current == NULL){
        printf("No memmory");
        return 1;
    }

    if(start == NULL){
        current->m_nValue = 12;
        current->m_pNextNode = NULL;
        current->m_PrevNode = NULL;
        start = current;
    } 
    else{
        TDListNode *tmp = start;
        while(tmp->m_pNextNode != NULL){
            tmp = tmp->m_pNextNode;
        }
        current->m_nValue = 12;
        current->m_pNextNode = NULL;
        current->m_PrevNode = tmp;
        tmp = current;
        print(tmp);
    }
    return 0;
}

void print(TDListNode *s){
    for (TDListNode *tmp = s; tmp != NULL; tmp = tmp->m_pNextNode)
        printf("%d\n", tmp->m_nValue);    
}

/*
................................................................
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node, *list;

int printList(list);
int printListR(list);
int printListO(list);

int main(){
    list l = NULL, current = NULL; 
    int n, data;
    printf("Enter data, terminate by Ctrl + D\n");
    while(scanf("%d, &data") != EOF){
        l = (list)malloc(sizeof(node));
        l->data = data; l->next = current;
        current = l; //Last data at the head, LIFO
    }
    printf("Input data are: ");
    n = printList(l);
//    n = printListR(l);
//    n = printListO(l);
    putchar('\n');
    printf("Data count: %d\n", n);
}
............................................................................
#include <stdio.h>
#include <stdlib.h>

struct node{
    char *name;
    char *number;
    struct node *next;
};

int main(){
    struct node *head, *tmp, *current;
    head = malloc(sizeof(struct node));
    printf("Enter name: "); scanf("%s", head->name);
    printf("Enter phone number: "); scanf("%s", head->number);
    head->next = NULL;
    tmp = head;
    for (int i = 0; i < 5; i++){
        current = malloc(sizeof(struct node));
        printf("Enter name: ");
        scanf("%s", current->name);
        printf("Enter phone number: ");
        scanf("%s", current->number);
        current->next=NULL;
        tmp->next = current;
        tmp = tmp->next;
    }
    
    //free
    current = head;
    while(current){
        tmp = current;
        current = current->next;
        free(tmp);
    }
    
    return 0;
}
*/
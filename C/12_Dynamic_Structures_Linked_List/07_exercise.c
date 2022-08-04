/*
Задача 7. Напишете програма за триене на елемент от двойно свързан
списък по зададена позиция в него.
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct TDList{
    int data;
    struct TDList * next;
    struct TDList * prev;
}TDList;

TDList * head , * tail = NULL;

void createTDList();
void display();
void displayReverse();
void removeElementN(int n);

int main(){
    for(int i = 0 ; i < 5 ; i++){
        createTDList();
    }
    display();
    displayReverse();
    removeElementN(2);
    display();
    displayReverse();

}

void createTDList(){
    TDList * current =(TDList*)malloc(sizeof(TDList));
    int num;
    printf("Enter num : ");
    scanf("%d",&num);
    current->data=num;
    if(head==NULL){
        head = current;
        tail = current;
        current->prev=NULL;
        current->next=NULL;

    }else{
        current->prev=tail;
        current->next=NULL;
        tail->next=current;
        tail=current;
    }
}

void display(){
    TDList * current = head;
    while(current!=NULL){
        printf("%d ",current->data);
        current = current->next;
    }
    printf("\n");
}

void displayReverse(){
    TDList * current = tail;
    while(current!=NULL){
        printf("%d ",current->data);
        current = current->prev;
    }
    printf("\n");
}

void removeElementN(int n){
    TDList * remove = head;
    int count=1;
    while(count<n){
        remove = remove->next;
        count++;
    }
    TDList *  tmp = remove->prev;
    tmp->next=remove->next;
    tmp = remove->next;
    tmp->prev = remove->prev;
    free(remove);
}
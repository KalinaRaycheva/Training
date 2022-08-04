#include "..\include\fnc.h"
#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int value;
    struct queue *next;
};

void init(){
    front=NULL;
    rear=NULL;
}

void fillQueue(){
    int n = 0;
	printf("Write count of numbers , that you want to enter.- ");
	scanf("%d", &n);

    int num;
	for(int i = 1; i <= n; i++){
        printf("Enter %d num - ", i); scanf("%d", &num);

        queue *node = (queue *)malloc(sizeof(queue));
        if(node==NULL){
            printf("Failed to allocate data...");
             return;
        }
        node->value = num;
        node->next = NULL;
        if(front==NULL){
            front = node;
            rear = node;
        }
        else{
            rear->next = node;
            rear = node;
        }
    }
}
void display(){
    queue *queue = front;
    while(queue!=NULL){
        printf("%d ", queue->value);
        queue=queue->next;
    }
    printf("\n");
}

void deQueue(){
    while(front!=NULL){
        queue *node = front;
        front=node->next;
        if (front == NULL){
            rear = NULL;
        }
        free(node);
    }            
}


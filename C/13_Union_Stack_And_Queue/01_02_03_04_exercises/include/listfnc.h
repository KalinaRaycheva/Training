#ifndef LISTFNC_H
#define LISTFNC_H

typedef struct node node;
node *initiateNode();
void fillNodeValues(node *start);
void display(node *list);
void freeList(node *head);
void insertList(node *start, node *list);
void split(node *list);
void insertPos(node **start);
void deletePosition(node **start);
void menuOpen(node *list);

#endif 
#ifndef FNC_H
#define FNC_H

typedef struct queue queue;
extern queue *front , *rear;

void init();
void fillQueue();
void display();
void deQueue();

#endif
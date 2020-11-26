#ifndef _QUEUE_
#define _QUEUE_

#define MAX_QUEUE_SIZE 3
typedef int bool;

typedef struct queue {
    int list[MAX_QUEUE_SIZE];
    int length;
    int front;
} queue;

queue makeQueue();
int sizeQueue(queue * q);
bool isEmptyQueue(queue * q);
bool isFullQueue(queue * q);
int backAt(queue * q);
int peek(queue * q);
void dequeue(queue * q);
void enqueue(queue * q,int e);


void increment(int * n);
void decrement(int * n);






#endif
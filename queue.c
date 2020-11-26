#include "queue.h"
#include <stdio.h>


queue makeQueue(){
    //printf("Calling makeQueue\n");
    queue q;
    q.length = 0;
    q.front = 0;
    return q;
}

void increment(int * n){
    *(n) = (*(n) + 1) % MAX_QUEUE_SIZE;
}

void decrement(int * n){
    *(n) = (*(n) + MAX_QUEUE_SIZE - 1) % MAX_QUEUE_SIZE;
}

int sizeQueue(queue * q){
    return q->length;
}
bool isEmptyQueue(queue * q){
    return (sizeQueue(q) == 0);
}
bool isFullQueue(queue * q){
    return (q->length < MAX_QUEUE_SIZE);
}
int backAt(queue * q){
    int f = q->front;
    int l = sizeQueue(q);
    return (f+l -1) % MAX_QUEUE_SIZE;
}

int peek(queue * q){
   int b = q->front;
    //return q->list[f];
    return q->list[b];
}

void dequeue(queue * q){
    //printf("Called dequeue\n");
    if(!isEmptyQueue(q)){
        q->length = q->length -1;
        increment( &(q->front));
        printf("Removed %d from queue\n", peek(q));
    }
}
void enqueue(queue * q,int e){
    //printf("Called enqueue\n");
    if( isFullQueue(q)){
        int b = backAt(q);
        q->list[b+1] = e;
        q->length = q->length +1;
        printf("Inserted %d into queue\n",e);
    }

}


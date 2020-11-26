#ifndef _STACK_
#define _STACK_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//#define MAX_STACK_SIZE 1000
typedef int bool;

typedef enum {
    STACK_INT,
    STACK_CHAR,
    STACK_UINT64
} DataType;

typedef struct Stack {
    DataType type;
    size_t size;
    void * data;
    //void * top;
    long long top;
}Stack;



Stack stackCreate(size_t size, DataType type);
void stackDelete(Stack *s);

void stackPush(Stack* s,void * el);
char stackPop(Stack* s);
bool stackIsFull(Stack* s);
bool stackIsEmpty(Stack* s);
char stackTop(Stack* s);





#endif
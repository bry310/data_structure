#ifndef _STACK_
#define _STACK_

#define MAX_STACK_SIZE 1000
typedef int bool;

typedef struct stack {
    char  list[MAX_STACK_SIZE];
    int top;
}stack;


stack make_stack();
void push(stack* s,char);
char pop(stack* s);
bool isFull(stack* s);
bool isEmpty(stack* s);
char top(stack* s);





#endif
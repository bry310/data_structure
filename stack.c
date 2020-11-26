#include "stack.h"


stack make_stack()
{
    stack s;
    s.top = -1;
    return s;
}

void push(stack* s,char c){
    printf("Pushing %c onto stack\n",c);
    if (isFull(s)){
        //printf("stack is full\n");
    }else{
        int t = s->top;
        s->list[t+1] = c;
        s->top = t + 1;

    } 
    
}

char pop(stack* s){

    if(isEmpty(s)){
        // stuff
    }else{
        int t = s->top;
        char c = s->list[t];
        printf("poping %c from stack\n",c);
        s->top = t-1;
        return c;

    }
}

bool isFull(stack* s)
{
    return s->top == MAX_STACK_SIZE - 1;
}
bool isEmpty(stack* s)
{
    return s->top < 0;
}
char top(stack* s)
{
    int t = s->top;
    return s->list[t];
}
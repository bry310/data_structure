#include "stack.h"



// stack make_stack()
// {
//     stack s;
//     s.top = -1;
//     return s;
// }

Stack stackCreate(size_t size, DataType type){
    size_t effectiveSize = 0;
    if (type == STACK_CHAR){
        effectiveSize = size * sizeof(char);
    } else if (type == STACK_INT){
        effectiveSize = size * sizeof(int);
    }else if (type == STACK_UINT64){
        effectiveSize = size * sizeof( unsigned long long);
    }

     Stack s = {
         .type = type,
         .size = size,
         .data = malloc(effectiveSize),
         .top = -1
     };

     return s;

 }
 void stackDelete(Stack * s){
     free(s->data);
     s->top = -1;
 }

  void stackPush(Stack * s, void * el ){
      DataType type = s->type;

      if ( stackIsEmpty(s) ){
          s->top = 0;
      }else{
          
          s->top =  s->top + 1;
      }

    long long t = s->top;
    if (type == STACK_CHAR){
       ( (char*)(s->data))[t] = *( (char *)el );

    } else if (type == STACK_INT){
        ( (int *)(s->data))[t] = *( (int *)el );
    }else if (type == STACK_UINT64){
        ( (unsigned long long *)(s->data))[t] = *( (unsigned long long *)el );
    }

    
  }

 bool stackIsEmpty(Stack * s){
     return s->top == -1; 
 }



// bool isFull(stack* s)
// {
//     return s->top == MAX_STACK_SIZE - 1;
// }
// bool isEmpty(stack* s)
// {
//     return s->top < 0;
// }
// char top(stack* s)
// {
//     int t = s->top;
//     return s->list[t];
// }
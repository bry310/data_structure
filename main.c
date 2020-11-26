#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include "stack.h"



//Need to fix reverce 
//Use malloc
char * reverce(char* w)
{
    int n = strlen(w);
    char* ans = (char*)malloc(n * sizeof(char));
    stack st = make_stack();
    


    //Push char's unto stack
    for (int i = 0; i < n; i++){
        char c = *(w + i);
        push(&st,c);

    }
    
    int i = 0;
    while(! isEmpty(&st)){
        char c = pop(&st);
        ans[i] = c;
        i++;
    }
    return ans;

}

bool isBalanced(char* exp){
    int n = strlen(exp);
    stack st = make_stack();

    for(int i = 0; i < n; i++){
        char c = exp[i];
        
            if( c == '('){
                push(&st,c);
            }

            else if( c == ')' ){
                if (isEmpty(&st)){
                    return 0;
                }else{
                    if (top(&st) == '(' ){
                        pop(&st);
                    }else{
                        push(&st,c);
                    }
                }
        }
    }

    return isEmpty(&st);

}

//WE want to evaluate expressions such as (+ 2 3), (+ (* 8 33) 9)


int main()
{
    /*
    char  w[20];
    printf("Enter a word: \n");
    scanf("%s",w);
    printf("The reverced of \"%s\" is: \n",w);
    char *m = reverce(w);
    printf("%s\n",m);
    */


    char exp[20];
    printf("Enter an expression: \n");
    scanf("%s",exp);
    if( isBalanced(exp)){
        printf("%s is balanced\n",exp);
    }else{
        printf("%s is not balanced\n", exp);
    }


    printf("\"this\"== \"ths\" is %d\n", "this"=="ths");
    

}
#include <stdio.h>

char stack[512];
int top = 0;

void push(char c){
    stack[top] = c;
    top++;
}

char pop(){
    top--;
    return stack[top];
}

int is_empty(){
    return top;
}

int main(void){
    push('1');
    push('2');
    push('3');
    push('4');
    while(is_empty()){
        putchar(pop());
        // printf("%c", pop());
    }
    printf("\n");
    return 0;
}

#include <stdio.h>

int foo(void){
    int i;
    printf("%d\n", i);
    i = 777;
}

void main(void){
    foo();
    printf("注释后结果不一样哦\n");
    foo();
}

#include "stdio.h"
#include "stack.h"
#include "foo.c"

int main(){
    push('a');
    push('b');
    push('c');
    push('d');

    while(!is_empty()){
        /* int top = 1; */
        /* putchar(pop()); */

        f_pop();
        /* printf("%d", top); */
    }
    putchar('\n');

    return 0;
}

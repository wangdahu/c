#include <stdio.h>

int main(void){
    int count[2] = {3, 2}, i;
    for(i = 0; i < 2; i++){
        printf("count[%d] = %d\n", i, count[i]);
    }
    printf("%d\n", count[-1]);
    return 0;
}

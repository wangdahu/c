#include <stdio.h>
void main(){
    int i, sum = 0;
    for(i=1; i<101; i++){
        sum += i;
    }
    printf("%d\n", sum);
}

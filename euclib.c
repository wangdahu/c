#include <stdio.h>

int euclib(int a, int b){
    if((a % b) == 0){
        return b;
    }else{
        return euclib(b, (a % b));
    }
}

int main(void){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d,%d公约数: %d\n", a, b, euclib(a, b));
}

#include <stdio.h>

int fib(int n){
    if(n == 0 || n == 1){
        return 1;
    }else{
        int result = fib(n-1) + fib(n-2);
        return result;
    }
}

int main(void){
    int n;
    scanf("%d", &n);
    printf("n: %d\n", fib(n));
}

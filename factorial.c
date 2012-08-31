#include <stdio.h>

int factorial(int n){
    if(n == 0){
        return 1;
    }else{
        printf("n -> %d \n", n);
        int result = n * factorial(n -1);
        return result;
    }
}

int main(void){
    int n;
    printf("请输入一个数: ");
    scanf("%d", &n);
    printf("这个数的阶乘为: %d\n", factorial(n));
}

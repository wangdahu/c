#include <stdio.h>

int remaind(int num){
    int ten, mantissa;
    mantissa = num % 10;
    ten = (num % 100) / 10;
    printf("十位数为:%d\n个位数为:%d\n", ten, mantissa);
    return 0;
}

int main(void){
    int num;
    printf("请随便输入一个数字: ");
    scanf("%d", &num);
    printf("你们输入的数字为: %d\n", num);
    remaind(num);
    if(-1){
        printf("-1也为真!!\n");
    }
    return 0;
}

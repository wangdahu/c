#include <stdio.h>

void main(void){
    int year;
    printf("请输入年份:");
    scanf("%d", &year);
    if(is_leap_year(year)){
        printf("润年!\n");
    }else{
        printf("不是润年!\n");
    }
}

int is_leap_year(int year){
    if((year % 4 == 0) && ((year % 100) == 0 && (year % 400) == 0)){
        return 1;
    }
    return 0;
}

#include <stdio.h>

int main(void){
    char gesture[3][10] = {"剪刀", "石头", "布"};
    int man, computer, result, ret;
    while(1){
        srand(time(0));
        computer = rand() % 3;
        printf("请输入数字:0-->剪刀 1-->石头 2-->布\n");
        ret = scanf("%d", &man);
        if(ret != 1 || man > 2 || man < 0){
            printf("输入错误!,请输入0,1,2\n");
        }
        printf("您出的是:%s\n", gesture[man]);
        printf("计算机出的是:%s\n", gesture[computer]);

        result = (man - computer + 4) % 3;
        char resultOut[3][10] = {"您输了", "和了", "您赢了"};
        printf("%s\n", resultOut[result]);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

#define N 2000

int a[N];
int howMany[10];

int how_many(int value){
    howMany[value] ++;
}

void gen_random(int upper_bound){
    srand((unsigned)time(0)); // 产生随机因子,每次产生的随机数都不一样
    printf("now: %d\n", (unsigned)time(0));
    int i;
    for(i = 0; i < N; i++){
        a[i] = rand() % upper_bound;
        how_many(a[i]);
    }
}

int main(void){
    gen_random(10);
    int j;
    printf("value   how many \n");
    for(j = 0; j < 10; j++){
        printf("%d       %d \n", j, howMany[j]);
    }
    return 0;
}

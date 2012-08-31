#include <stdio.h>

int add_range(int low, int high){
    int i, sum;
    for(i = low; i <= high; i++){
        sum = sum + i;
    }
    return sum;
}

int main(void){
    int result[100];
    result[0] = add_range(1, 10);
    result[1] = add_range(1, 100);
    printf("first: %d\nsecond: %d\n", result[0], result[1]);
    return 0;
}

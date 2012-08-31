#include <stdio.h>

int n = 2;
int a[2] = { 4, 3, };

int maxs(int n){
    if(n == 1){
        return a[0];
    }else{
        if(maxs(n-1) < a[n-1]){
            return a[n-1];
        }else{
            return maxs(n-1);
        }
    }
}

int main(void){
    printf("%d", maxs(n));
    return 0;
}

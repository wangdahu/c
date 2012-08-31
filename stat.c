#include <stdio.h>
void main(){
    char string[81];
    int i, num = 0;
    char c;
    gets(string);
    for(i=0; (c=string[i])!='\0'; i++){
        printf("%c string[i]\n", string[i]);
        if(c == ' '){
            num++;
        }
    }
    printf("%d words\n", num);
}

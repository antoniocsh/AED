#include<stdio.h>
int main(void){
    char nome;
    char sugoma[40];
    
    printf("What's your name?\n");
    gets(sugoma);
    //scanf("%s", &nome);

    // printf("Hello, %s!\n", &nome);
    printf("Hello, %s!\n", sugoma);

    return 0;




}
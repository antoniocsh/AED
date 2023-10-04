#include<stdio.h>
#include<math.h>

int square(int x){
    return x*x;
}

int main(void){
    int numero;
    printf("Quantas linhas na tabela babe: ");
    scanf("%d", &numero);

    for (int i = 0; i <= numero; i++)
    {
        printf("%d\t%d\t%.3f\n", i, square(i), sqrt(i));
    }

    return 0;
}
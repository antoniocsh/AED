#include <assert.h>
#include <stdio.h>

int num_chamadas;

unsigned long T(unsigned int n){
    assert(n > 0);

    if (n == 1) 
    {
        return 1;
    }

    num_chamadas++;
    return n + T(n/2);
}


int main (void){

    int n;
    long int r;
    printf("Insira um numero não negativo: ");
    scanf("%d", &n);

    printf("\n calculo do valor da recorrencia 1: \n\n");
    printf("%6s %6s %6s\n", "n", "T(n)", "chamadas");

    for (int i=1; i<=n; i++) {
        num_chamadas = 0;
        r = T(i);
        printf("%6d %6ld %6d\n", i, r, num_chamadas);
    }


    return 0;
}
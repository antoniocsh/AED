#include <assert.h>
#include <stdio.h>

long num_add;
long num_call;

int DellanoyRec(int n, int m){
    num_call++;
    if (n == 0 || m == 0) 
    {
        return 1;
    }

    num_add+=2;
    return DellanoyRec(m-1,n) + DellanoyRec(m-1, n-1) + DellanoyRec(m, n-1);
}

int main (void){

    int n;
    int m;
    long int r;
    printf("Insira um numero não negativo (m): ");
    scanf("%d", &n);
    printf("Insira outro numero não negativo (n): ");
    scanf("%d", &m);
    num_call = 0;
    num_add = 0;
    r = DellanoyRec(n,m);
    printf("\n calculo do valor de Delannoy: \n\n");
    printf("%6s %6s %12s %14s %12s\n", "n", "m", "D(n,m)", "num chamadas", "num adicoes");
    printf("%6d %6d %12ld %14ld %12ld\n", n, m, r, num_call, num_add);





    return 0;
}
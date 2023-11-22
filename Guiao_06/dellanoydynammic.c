#include <assert.h>
#include <stdio.h>

long num_add;
long num_call;

int DellanoyDyn(int n, int m){
    num_call++;
    if (n == 0 || m == 0) 
    {
        return 1;
    }

    long unsigned int D[n+1][m+1];
    for (unsigned int i = 0; i <= n; i++){
        D[i][0] = 1;
    }
    for (unsigned int j = 0; j <= n; j++){
        D[0][j] = 1;
    }

    for (unsigned int i = 1; i <= n; i++){
        for (unsigned int j = 1; j <= m; j++){
            num_add+=2;
            D[i][j] = D[i-1][j] + D[i-1][j-1] + D[i][j-1];
        }


    }
    return D[n][m];
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
    r = DellanoyDyn(n,m);
    printf("\n calculo do valor de Delannoy: \n\n");
    printf("%6s %6s %12s %14s %12s\n", "n", "m", "D(n,m)", "num chamadas", "num adicoes");
    printf("%6d %6d %12ld %14ld %12ld\n", n, m, r, num_call, num_add);


    return 0;
}
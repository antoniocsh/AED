#include<stdio.h>
#include<math.h>

int main(void){

    int angmin;
    int angmax;
    int angspace;

    printf("Qual o angulo minimo: ");
    scanf("%d", &angmin);
    printf("Qual o angulo maximo: ");
    scanf("%d", &angmax);
    printf("Qual o angulo de espaçamento: ");
    scanf("%d", &angspace);
    
    char *filename = "tabela_sen_cos.txt";

    FILE *fp = fopen(filename, "w");

    if (fp == NULL)
    {
        printf("Erro ao abrir o ficheiro %s\n", filename);
        return 1;
    }

    fprintf(fp, "%4s %10s %10s\n", "ang", "sen (ang)", "cos (ang)");
    fprintf(fp, "%4s %10s %10s\n", "----", "---------", "---------");
    for (int i = angmin; i <= angmax; i+=angspace)
    {
        fprintf(fp, "%4d %10.3f %10.3f\n", i, sin(i), cos(i));
    }

return 0;
}
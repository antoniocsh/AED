#include<stdio.h>
int arrayokay(int *arrayz, size_t len);
int main ( void )
{

    int array[10] = { 0,0,0,0,0,0,0,0,0,0};
    int lenarray = sizeof(array)/sizeof(array[0]);
    arrayokay(array, lenarray);

    int array1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int len1 = sizeof(array1)/sizeof(array1[0]);
    int array2[10] = {1, 2, 1, 4, 5, 6, 7, 8, 9, 10};
    int len2 = sizeof(array2)/sizeof(array2[0]);
    int array3[10] = {1, 2, 1, 3, 2, 6, 7, 8, 9, 10};
    int len3 = sizeof(array3)/sizeof(array3[0]);
    int array4[10] = {0, 2, 2, 0, 3, 3, 0, 4, 4, 0};
    int len4 = sizeof(array4)/sizeof(array4[0]);
    int array5[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int len5 = sizeof(array5)/sizeof(array5[0]);

    arrayokay(array1, len1);
    printf("\n");
    arrayokay(array2, len2);
    printf("\n");
    arrayokay(array3, len3);
    printf("\n");
    arrayokay(array4, len4);
    printf("\n");
    arrayokay(array5, len5);
    printf("\n");
    

    return 0;
   
}

 
    int arrayokay(int *arrayz, size_t len){
        int count = 0;
        int comparacao = 0;
        for (int i = 1; i<len-1; i++){
            comparacao++;
            if (arrayz[i] == arrayz[i-1] + arrayz[i+1]){
                count++;
            }
        }
        for (int i = 0; i<len; i++){
            printf("%d ", arrayz[i]);
        }
        printf("The array has %d elements that are the sum of their neighbours.\n", count);
        printf("Numero de comparações: %d\n", comparacao);
        return 0;
    }
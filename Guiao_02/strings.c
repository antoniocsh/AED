#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (void){

    char str1[100], str2[100];

    printf("Introduz a primeira string: ");
    scanf("%s", str1);

    printf("Introduz a segunda string: ");
    scanf("%s", str2);

    int count = 0;

    //MANEIRA MÁ (pq vai ter q ver qnt é o strlen(str1) em cada iteraçao do loop)
    /*
    for (int i = 0; i < strlen(str1); i++)
    { 
       if (isaplha(str1[i]))
       {
      count++;
       }
    }
    */  

    //MANEIRA BOA (nem sequer se usa o strlen)
    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (isalpha(str1[i]))
        {
            count++;
        }
    }

    //com ponteiros
    /*
    for (char *p = str1; *p != '\0'; p++)
    {
        if (isalpha(*p))
        //if ((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z'))
        {
            count++;
        }
    }
    */

    printf("A string '%s' tem %d letras\n", str1, count);
    count = 0;

    for (int i = 0; str2[i] != '\0'; i++)
    {
        if (isupper(str2[i]))
        {
            count++;
        }
    }

    printf("A string '%s' tem %d letras maiusculas\n", str2, count);
    count = 0;


    
    for(int i = 0; str1[i]; i++){
    str1[i] = tolower(str1[i]);
    }
    for(int i = 0; str2[i]; i++){
    str2[i] = tolower(str2[i]);
    }


    printf("String1 em lowercase: %s\nString2 em lowercase: %s\n", str1, str2);


    int value = strcmp(str1, str2);
    if (value == 0)
    {
        printf("As strings sao iguais\n");
    }
    else
    {
        if (value < 0)
        {
            printf("%s, %s\n", str1, str2);
        }
        else
        {
            printf("%s, %s\n", str2, str1);
        }
        
    }
    char COPIA[100];
    strcpy(COPIA, str2);

    printf("A string '%s' foi copiada para a string '%s'\n", str2, COPIA);

    printf("String 2 e a sua copia concatenadas sao: %s\n", strcat(str2, COPIA));



}
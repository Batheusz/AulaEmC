#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    //Toda string termina com o \0
    char Nome [] = "Matheus";
    printf("%s\n", Nome);
    printf("%i\n", strlen(Nome));

    //Copiar dados de uma string para outra
    char Sobrenome[50];
    printf("Digite seu sobrenome\n>>>");
    scanf("%s", Sobrenome);
    printf("%s\n",Sobrenome);
    //strcpy(Destino, Origem);
    //strncpy(Destino, Origem, Quantidade);
    strncpy(Sobrenome, Nome, 3); //Copia somente os 3 primeiros char de Nome para Sobrenome.
    printf("%s\n", Sobrenome);

    //Concatenar strings
    strncat(Nome,Sobrenome,5);
    printf("%s\n", Nome);

    //Comparar strings
    char str1[] = "abc";
    char str2[] = "aaa";
    char str3[] = "abc";
    char str4[] = "abd";
    // Retorna 0 para strings de valores ASCII iguais.
    // Retorna <0 para string1 de valor ASCII menor que string2.
    // Retorna >0 para string1 de valor ASCII maior que string2.
    printf("%i\n", strcmp(str1,str3));//Valor igual, retorna 0
    printf("%i\n", strcmp(str1,str2));//Valor maior, retorna 1
    printf("%i\n", strcmp(str1,str4));//Valor menor, retorna -1
    //strncmp também é um método válido.
}
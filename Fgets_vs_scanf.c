#include <stdio.h>

void main()
{
    char Nome[50];
    printf("Digite seu primeiro nome:\n>>>");
    //scanf("%s", Nome);
    printf("%s\n", Nome);
    //Tente digitar um nome composto como Ana Maria e veja que somente será lido até o espaço.
    printf("Digite seu primeiro nome:\n>>>");
    fgets(Nome,50,stdin);
    //Fgets lê a linha conforme o tamanho especificado, para usa-lo vc tem q saber quantos itens poderão ser escritos.
    printf("%s\n", Nome);
}
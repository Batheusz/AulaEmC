#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num = -11;
    // condição ? True : False;
    // variavel = condição ? valor_caso_true : valor_caso_false;
    num > 0 ? printf("Seu numero eh positivo\n") : printf("Seu numero eh negativo\n");
    int valor1 = num == 0 ? 10 : 5; // Como num nao é igual a 0 é atribuido valor 5 a valor1.
    int valor2 = num == 1 ? 1 : 2; // Como num é igual a 1 é atribuido valor 1 a valor2.
    printf("%i\n%i\n", valor1, valor2); 

    //Método com várias opções
    int dia;
    printf("Digite um numero de 1 a 7:\n>>>");
    scanf("%i", &dia);
    dia == 1 ? printf("Segunda\n") :
    dia == 2 ? printf("Terca\n") :
    dia == 3 ? printf("Quarta\n") :
    dia == 4 ? printf("Quinta\n") :
    dia == 5 ? printf("Sexta\n") :
    dia == 6 ? printf("Sabado\n") :
    dia == 7 ? printf("Domingo\n") : printf("Numero digitado incorreto");

}
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num1, num2, soma, subtracao, multiplicacao, divisao;
    printf("Digite seus numeros separados por espaco: ");
    scanf("%i %i", &num1, &num2);
    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = num1 / num2;
    printf("Sua soma eh: %i\nSua Subtracao eh: %i\nSua multiplicacao eh: %i\nSua divisao eh: %i\n", soma, subtracao, multiplicacao, divisao);
}
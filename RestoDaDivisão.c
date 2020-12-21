#include <stdio.h>
#include <stdlib.h>

void main()
{
    // É utilizado um operador específico para obter o resto da divisão, no caso o %.
    int num1, num2;
    printf("Digite seus numeros: \n");
    scanf("%i %i", &num1, &num2);
    printf("Seu resto eh: %i", num1 % num2);
}
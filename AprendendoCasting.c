#include <stdio.h>
#include <stdlib.h>

void main()
{
    int x = 16;
    int y = 3;

    float resultado = x / y;//Resultado sai em forma int pois é uma divisão de dois inteiros.
    float divisao = (float) x / y;//Resultado sai em forma de float pois foi realizado um casting.
    printf("%f\n", resultado);
    printf("%f\n", divisao);
}
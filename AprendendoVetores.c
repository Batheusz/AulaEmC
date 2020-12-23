#include <stdio.h>
#include <stdlib.h>

void main()
{
    // tipo nome[Tamanho];
    // o primeiro elemento está sempre na posição zero do vetor.
    float notas[4] = {2.1, 3.4,  7.6, 10,};
    printf("%.2f\n", notas[0]);
    printf("%.2f\n", notas[1]);
    printf("%.2f\n", notas[2]);
    printf("%.2f\n", notas[3]);
    //Como digitar valores num vetor
    float nota[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Digite a nota do aluno:\n>>>");
        scanf("%f", &nota[i]);
    }
    for ( int d = 0; d < 3 ; d++)
    {
        printf("Nota %i: %f\n", d + 1, nota[d]);
    }
}
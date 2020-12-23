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
    for ( int i = 0; i < 3 ; i++)
    {
        printf("Nota %i: %f\n", i + 1, nota[i]);
    }
    int vetor [2] [2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%i ", vetor [j]);
        }
        printf("\n");
    }
}
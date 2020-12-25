#include <stdio.h>
#include <stdlib.h>

int SomarVetor(int vetor[], const int n)
{
    //Método tradicional
    int *ponteiro = vetor;
    int valor, soma = 0;
    for (int i = 0; i < n; i++)
    {
        valor = *ponteiro;
        soma = soma + valor;
        ponteiro++;
    }
    //Usando ponteiros
    int *a1 = vetor;//aponta para o primeiro membro
    int *an = vetor + n - 1;//aponta para o ultimo membro
    int resultado = 0;
    for (a1; a1 <= an; a1++)
    {
        resultado += *a1;
    }   
    //return soma;
    return resultado;

}

void main()
{
    int vetor[] = {1, 2, 3, 4, 5, 6 ,7 , 8, 9, 10};
    printf("A soma dos membros eh = %i", SomarVetor(vetor,10));
}
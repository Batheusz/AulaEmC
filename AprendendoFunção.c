#include <stdio.h>
#include <stdlib.h>

void main()
{
    //Código simples sem função
    int v1, v2, res;
    printf("Digite seus dois numeros:\n>>>");
    scanf("%i %i", &v1, &v2);
    // res = v1 * v2;
    res = Multiplicacao(v1, v2);
    printf("Sua multiplicacao eh: %i", res);
}

//Utilizando função
    /* Tipo_de_retorno Nome (Parâmetros)
        {
            Intruções;
            retorno;
        }  
    */

int Multiplicacao (int n1, int n2) //crio uma função para desenvolver a multiplicação.
{
    int result = n1 * n2;
    return result;
}
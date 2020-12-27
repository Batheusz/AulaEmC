#include <stdio.h>
#include <stdlib.h>
void Variavel(int x), Ponteiro(int *px);
void main()
{
    int valor = 1;
    int *pvalor = &valor;
    Variavel(valor);
    printf("Valor: %i\nEndereco: %i\n", valor, pvalor);//Valor não altera.
    Ponteiro(pvalor);
    printf("Valor: %i\nEndereco: %i\n", valor, pvalor);//Valor altera.
    /*
        Motivo para isso ocorrer é que ao chamar a função é criado uma cópia de teste,
        com isso essa variável copia que sofre as alterações.Porém ao chamar o ponteiro
        não é utilado uma cópia pois ele é um endereço de memória, com isso a variável valor
        será modificada.
        Alem disso, ao criar a cópia é necessário alocar espaço para ela em sua memória fazendo 
        com que seu programa fique cada vez mais pessado.

    */
}

void Variavel(int x)
{
    ++x;
    //printf("%i\n", x);//Descomente para ver que a cópia sofreu mudança
}
void Ponteiro(int *px)
{
    ++*px;
}
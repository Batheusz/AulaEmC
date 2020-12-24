#include <stdio.h>
#include <stdlib.h>

void main()
{
    //Cria-se uma variável.
    int valor = 69;
    //Declaro um ponteiro.
    //Tipo *Nome;
    int *ponteiro; 
    //Atribuo o endereço de valor para ponteiro.
    ponteiro = &valor;

    printf("%i\n", valor); //Mostra a valor.
    printf("%i\n", &valor); //Mostra o endereço.
    printf("%i\n", ponteiro); //Mostra meu endereço.
    printf("%i\n", *ponteiro); //Mostra o valor nesse endereço.

    int x, y;
    x = 10;
    y = 20;
    ponteiro = &x;
    *ponteiro = y; //Altero o valor de x sem igualalo diretamente a y.

    printf("%i %i\n",x ,y);
    
}
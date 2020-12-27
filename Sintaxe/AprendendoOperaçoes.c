#include <stdio.h>
#include <stdlib.h>

void main()
{
    // Operador de adição.
        int num1, num2, soma1, soma2, a, b, c;
        num1 = 15;
        num2 = 10;
        soma1 = num1 + num2;
        soma2 = 2 + 3;
        printf("Adicao:\n%i\n%i\n", soma1, soma2);
    // Operador de subtração.
        int sub1 = num1 - num2;
        int sub2 = 7 - 3;
        printf("Subtracao:\n%i\n%i\n", sub1, sub2);
    //Operador de multiplicação
        int mult1 = num1 * num2;
        int mult2 = 2 * 4;
        printf("Multiplicacao:\n%i\n%i\n", mult1, mult2);
    //Operação de divisão
        int div1 =  num1 / num2; //Está sendo salvo somente o numero inteiro da divisão.
        int div2 =  100 / 2;
        printf("Divisao:\n%i\n%i\n", div1, div2);
    /*Expressões ordem de prioridade:
        1) ()
        2) *, /, %.
        3) +, -.
        4) <, <=, >, >=.
        5) ==, !=
    */
        float expresssao= ((num1 + num2) * num1)/ num2;
        printf("Resultado da sua expressao eh: %.0f\n", expresssao);
        a = 15;
        b = 10;
        c = 5;
        expresssao =  a - b * c; // primeiro 5 * 10 depois 15 - 35.
        printf("Resultado da sua expressao eh: %.0f\n", expresssao);
        expresssao =  (a - b) * c; // primeiro 15 - 10 depois 5 * 5.
        printf("Resultado da sua expressao eh: %.0f\n", expresssao);
}
#include <stdio.h>
#include <stdlib.h>

void main()
{
    short int x = 2147483647;
    short int y = -2147483648;

    printf("%i\n%i\n", x, y);//Os numeros possuem maiss bits doq a short pode aguentar, a isso se da o nome de Overflow ou Underflow depende de qual sentido está rompendo.

    int z = 2147483647;
    printf("%i\n", z);
}
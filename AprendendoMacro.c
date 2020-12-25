#include <stdio.h>
#include <math.h>

#define Pi 3.1415926
//Macros sãoa compresa de numeros ou expressões para uma string.
//Pode criar mais linhas em macros usando o /
#define AreaCirculo(raio) pow(raio,2) * Pi 
#define Maior(x, y) x > y ? x : y
#define Minusculo(char) char >= 'a' && char <= 'z'


void main()
{
    printf("%f\n", AreaCirculo(1));
    printf("%i\n", Maior(2,4));
    if (Minusculo('b'))
        printf("Sua letra eh minuscula.\n");
    else
        printf("Sua letra eh maiuscula\n");        
}
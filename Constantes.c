#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Podemos definir constantes ou por código ou por comando, ex:
// const Nome = Valor;
// #define nome valor

void main()
{
    // calcular área de uma circunferência.
    const double Pi = 3.14159265;
    float Raio;
    printf("Digite seu raio:\n>>>");
    scanf("%f", &Raio);
    printf("Sua area eh: %f metros quadrados", Pi * pow(Raio,2));
}
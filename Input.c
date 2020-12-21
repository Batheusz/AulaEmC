#include <stdio.h>
#include <stdlib.h>

void main()
{
    //Scanf função de leitura dos dados.
    int primeironum, base, altura, area;
    printf("Digite seu primeiro numero: ");
    scanf("%i", &primeironum); // Deve-se colocar o & para indicar o endereço da variável.
    printf("Seu numero eh: %i\n", primeironum);
     
    printf("Digite o base e altura de sua figura separados por espaco e na mesma linha: ");
    scanf("%i %i", &base, &altura);
    area = base * altura;
    printf("%i\n", area);
}
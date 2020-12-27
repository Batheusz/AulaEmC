#include <stdio.h>
#include <stdlib.h>

void main()
{
    struct Horario
    {
        int Hora, Minuto, Segundo;
    };

    struct Horario vetor [3];//Ao ser criado o vetor ira receber os valores da struct para cada posição.
    
    for (int i = 0; i < 3 ; i++)
    {
        vetor[i].Hora = 10;
        vetor[i].Minuto = 20;
        vetor[i].Segundo = 45;
        printf("%i : %i : %i\n", vetor[i].Hora, vetor[i].Minuto, vetor[i].Segundo);
    }
}
#include <stdio.h>
#include <stdlib.h>

void main()
{
    //Ponteiro apontando para uma estrutura.
    struct Horario
    {
        int Horas, Minutos, Segundos;
    }Agora = {0}, *Depois;
    Depois = &Agora;
    printf("%i : %i : %i\n", Agora.Horas, Agora.Minutos, Agora.Segundos);
    (*Depois).Horas = 14;
    printf("%i : %i : %i\n", Agora.Horas, Agora.Minutos, Agora.Segundos);
    Depois->Minutos = 20;
    printf("%i : %i : %i\n", Agora.Horas, Agora.Minutos, Agora.Segundos);

    //Estrutura contendo ponteiros.
    struct Ponteiros
    {
        int *pHora, *pMinuto, *pSegundo;
    }Hoje;
    int Hora, Minuto, Segundo;
    Hora = 15;
    Minuto = Segundo = 10;
    Hoje.pHora = &Segundo;
    Hoje.pMinuto = &Minuto;
    Hoje.pSegundo = &Hora;
    printf("%i : %i : %i\n", *Hoje.pHora, *Hoje.pMinuto, *Hoje.pSegundo);

}
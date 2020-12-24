#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Horario
{
    int Horas, Minutos, Segundos;
};

void main()
{
    /*
    struct nome
    {
        dados
    };
    */

   struct NomeCompleto //Armazena os dados mas não são acessíveis fora
   {
       char Nome [99];
       char Sobrenome [99];
       char Sexo;
       char NomeCompleto [];
   };
    //Agora deve-se atribuir esses dados a uma variável
    struct NomeCompleto Cadastro;
    printf("Digite seu nome:\n>>>");
    scanf("%s", &Cadastro.Nome);
    printf("Digite seu sobrenome:\n>>>");
    scanf("%s", &Cadastro.Sobrenome);
    printf("Digite seu sexo M/F:\n>>>");
    scanf("%s", &Cadastro.Sexo);
    strcat(Cadastro.NomeCompleto, Cadastro.Nome);
    strcat(Cadastro.NomeCompleto, " ");
    strcat(Cadastro.NomeCompleto, Cadastro.Sobrenome);
    printf("\n%s\n", Cadastro.NomeCompleto);
    printf("\n%c\n", Cadastro.Sexo);

    struct Horario agora;
    agora.Horas = 10;
    agora.Minutos = 10;
    agora.Segundos = 30;
    teste(agora);
}

struct Horario teste(struct Horario Name)
{
    return Name;
}

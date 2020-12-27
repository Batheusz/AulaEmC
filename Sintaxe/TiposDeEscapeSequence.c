#include <stdio.h>
#include <stdlib.h>

void main()
{
    /* 
       \n quebra a linha
       \t aplica tabulação
       \\ imprime a barra
       \" ou \' imprime aspas
       \0 finaliza o texto (o codigo ja realiza a sua utilização escondida automaticamente)
    */
   printf("Como diria Marcelo:\n\t\"Saco vazio nao para de pe\"\n");
   printf("Como diria Marcelo:\n\t\"Saco vazio nao\0 para de pe\"\n");
}
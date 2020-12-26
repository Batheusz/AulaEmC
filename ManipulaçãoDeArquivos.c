#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *Escrever;
    Escrever = fopen("ManipulacaoDeArquivos.txt", "w");
    //"r" Read = Ler, "w" Write = Escrever,"a" Attend
    fprintf(Escrever,"Hello World!!\n");
    fclose(Escrever);
    //Ao compilar cria um arquivo com o nome ManipulacaoDeArquivos no mesmo local onde se encontra esse arquivo .c
    FILE *Ler;
    Ler = fopen("ManipulacaoDeArquivos.txt", "r");
    char Texto[99];
    while (fgets(Texto, 99, Ler) != NULL)
    {
        printf("%s",Texto);
    }
    fclose(Ler);
}
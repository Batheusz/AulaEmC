#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *Escrever;
    Escrever = fopen("ManipulacaoDeArquivos.txt", "w");
    //"r" Read = Ler, "w" Write = Escrever,"a" Append = Anexar
    fprintf(Escrever,"Hello World!!");
    fclose(Escrever);
    //Ao compilar cria um arquivo com o nome ManipulacaoDeArquivos no mesmo local onde se encontra esse arquivo .c
    FILE *Ler;
    Ler = fopen("ManipulacaoDeArquivos.txt", "r");
    char Texto[99];
    while (fgets(Texto, 99, Ler) != NULL)
    {
        printf("%s\n",Texto);
    }
    fclose(Ler);
    FILE *Anexar;
    Anexar = fopen("ManipulacaoDeArquivos.txt", "a");
    fprintf(Anexar,"\nOla!!\n");
    fputs(Texto, Anexar);//Coloca string
    fputc('a', Anexar);//Coloca char
    fclose(Anexar);
}
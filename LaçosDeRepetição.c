#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
  /*
    Comando while
        while(Condição)
        {Comando}

    Comando do while 
        do {Código}
        while(Condição)

    Comando for
        for(variável, condição, incremento) 
        {Comando}   
  */

 int i, n;
 i = 1;
 printf("Digite quantas vezes que imprimir:");
 scanf("%i", &n);
 while (i<=n && i>0)
 {
     printf("Vez numero: %i\n", i);
     i++;
 }
 i = 0;
 do
 {
    printf("Opa: %i\n", i);
    i++;
 } while (i<=3); //se meu i <= 3 ele realiza o do novamente, porém o do é realizado no minimo uma vez.
 
 for (int f = 0; f <= 3; f++)
 {
     printf("Teste for\n");
 }
 
 
 }
 


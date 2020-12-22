#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
  /*
    Comando while
        while(Condição)
        {Comando}
    Comando for
        for()    
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
 
 
}

#include <stdio.h>
#include <stdlib.h>

void main()
{
    /*
        Operadores
            == igual a
            > maior que
            < menor que
            >= <= maior/menor igual
            != diferente de
            && E
            || OU
            ! NÃO
    */

   int num1, num2, operacao;
   printf("Escolha sua operacao:\n1-Adicao\n2-Subtracao\n3-Multiplicacao\n4-Divisao\n");
   scanf("%i", &operacao);
   printf("Operacao escolhida foi: %i\n", operacao);
   printf("Digite seus dois numeros: ");
   scanf("%i %i", &num1, &num2);

   // Fazendo somente com If/Else
   if (operacao == 1)
   {
       int resultado = num1 + num2;
       printf("Sua operacao retornou: %i\n", resultado);
   }
   else if (operacao == 2)
   {
       int resultado = num1 - num2;
       printf("Sua operacao retornou: %i\n", resultado);
   }
   else if (operacao == 3)
   {
       int resultado = num1 * num2;
       printf("Sua operacao retornou: %i\n", resultado);
   }
   else if (operacao == 4)
   {
       int resultado = num1 / num2;
       printf("Sua operacao retornou: %i\n", resultado);
   }
   else
   {
       printf("Escolha um operador valido!\n");
   }
   
   // Usando Switch Case
   switch(operacao)
   {
       case 1:
        {
            int resultadoA = num1 + num2;
            printf("Sua operacao retornou: %i\n", resultadoA);
        }
        break;

       case 2:
        {       
            int resultadoS = num1 - num2;
            printf("Sua operacao retornou: %i\n", resultadoS);
        }
        break; 

       case 3:
        {
            int resultadoM = num1 * num2;
            printf("Sua operacao retornou: %i\n", resultadoM);
        }    
        break;

       case 4:
        {
            int resultadoD = num1 / num2;
            printf("Sua operacao retornou: %i\n", resultadoD);
        }
        break;

       default:
        printf("Escolha um operacao valida\n"); 
   }
}
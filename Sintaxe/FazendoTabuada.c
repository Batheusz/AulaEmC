#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main()
{
    //Somente uma operaçao por execução.
    int tabuada, operacao;
    printf("Digite a tabuada desejada:\n>>>");
    scanf("%i", &tabuada);
    for(int i = 0; i <= 10; ++i)
    {
        printf("%ix%i = %i\n", tabuada, i, tabuada * i);   
    }
    
    //Várias operações por execução.
    do
    {
        printf("Digite a tabuada desejada:\n>>>");
        scanf("%i", &tabuada);
        for(int i = 0; i <= 10; ++i)
        {
            printf("%ix%i = %i\n", tabuada, i, tabuada * i);   
        }
        printf("Deseja realizar mais uma operacao?\n(1)SIM\t(2)NAO\n");
        scanf("%i", &operacao);
        system("cls");
    } while (operacao < 2);
    

}

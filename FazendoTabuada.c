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
        system("cls");
        printf("Digite a tabuada desejada:\n>>>");
        scanf("%i", &tabuada);
        for(int i = 0; i <= 10; ++i)
        {
            printf("%ix%i = %i\n", tabuada, i, tabuada * i);   
        }
    } while (operacao < 2);
    

}

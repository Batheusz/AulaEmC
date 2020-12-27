#include <stdio.h>
#include <stdlib.h>

void main()
{
    //https://youtu.be/EZ2yTJqQ43Y?list=PLa75BYTPDNKZWYypgOFEsX3H2Mg-SzuLW
    //Função malloc.
    //Fala o tamanho do espaço de memória que será alocado e retorna o ponteiro.
    int *p;
    printf("%i\n", p);
    p = malloc(2);
    *p = 10;
    printf("%i\n", p);
    printf("%i\n", *p);
    //Repare que o endereço de memória foi alterado.
    //Quer dizer que nosso sistema criou o ponteiro p em um endereço de memória e depois foi atribuido o endereço do local criado pelo malloc

    //https://youtu.be/Za1WFOq65A4?list=PLa75BYTPDNKZWYypgOFEsX3H2Mg-SzuLW
    //Função free
    //Desaloca um espaço da memória.
    free(p);
    printf("%i\n", p);
    //Note que p continua apontando para o local especificado pelo malloc, tome cuidado pois o sistema pode deixar lixos nesse endereço, pois não está alocado.

    //https://youtu.be/dQMvqz3Ooz8?list=PLa75BYTPDNKZWYypgOFEsX3H2Mg-SzuLW
    //Função calloc
    //calloc(quantidade de elementos, tamanho);
    //Inicializa os endereços com 0;
    p = calloc(1,2);
    printf("%i\n", *p);


}


    
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i = 0;
    i++;// i = i + 1;
    ++i;// i = 1 + i;
    i--;// i = i - 1;
    --i;// i = 1 - i;

    //tomar cuidado com i++ ou i-- pois ele so realizará o incremento após o processamento da linha veja:

    i = 0;
    printf("%i\n", ++i);
    printf("%i\n", i++);
    printf("%i\n", i);
}
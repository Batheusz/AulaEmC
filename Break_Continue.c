#include <stdio.h>
#include <stdlib.h>

void main()
{
    // Break -> Interrompe o laço
    // Continue -> Interrompe o ciclo
    for( int x = 0; x <= 100; x++)
    {
        //Quando executado saimos do ciclo e continuamos o for.
        if(x == 20)
            continue;
        //Quando executado saimos do laço for.
        if (x == 70)
            break;
        printf("%i ", x);
    }
}
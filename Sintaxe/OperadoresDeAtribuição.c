#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int x = 0;
    x = x + 1;
     // x += 1;
     // x++;
    x = x * 1;
     // x *= 1; 
     // e assim por sequente.
     // %= retornará o resto da divisão de x por tal numero.
    x = 0;
    printf("soma : %i\n", x+=1); // 0 + 1 = 1.
    printf("subtracao : %i\n", x-=1); // 1 - 1 = 0.
    x = 1;
    printf("multiplicacao : %i\n", x*=20); // 1 * 20 = 20
    printf("divisao : %i\n", x/=2); // 20 / 2 = 10
    printf("resto da divisao : %i\n", x%=3); // 10/3 = resto 1.
}

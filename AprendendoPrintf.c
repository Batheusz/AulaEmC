#include <stdio.h>

void main()
{
    /* Para mostrar variáveis no printf:
        printf ("%tipo da variável", nome da variável);
        int = %i ou %d
        float / double = %f
        char = %c
        string = %s
        módulo = %u
        endereço de memória = %p
        notação científica = %E ou %e
        imprimir porcentagem = %%

        Variáveis com casas decimais imprimem até as casas não sendo utilizada, portanto, deve-se especificar quantas casas serão utilizadas.
            printf("%.numero de casas + tipo", nome);

        1-Signed : números positivos e negativos.
        2-Unsigned : números positivos.
        3-Long : aumentar a sua capacidade.
        4-Short : diminuir o tamanho pouco utilizado hj em dia e não funciona em flutuantes.
        Ex: Unsigned int = 2Bytes, porém so de numeros positivos.
            Long int = 4Bytes de numeros.
    */
    int i = 15;
    char c = 'A';
    char string [18] = "Abertura de porta";
    float f = 10.52;
    double d = 15.98364;
    printf("%i\n", i);
    printf("%f\n", f);
    printf("%s\n", string);
    printf("%.3f\n", d); //Note que foi arredondado a 3 casa para um valor acima, pois o número subsequente era >= 5.
    printf("%c\n", c);
    printf("%i\n%.2f\n%.4f\n%c\n", i, f, d, c); // Imprimindo varias variaveis ao mesmo tempo.
}
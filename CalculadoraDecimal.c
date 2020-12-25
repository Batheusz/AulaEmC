#include <stdio.h>
#include <stdlib.h>

int Binario(int x);
int Octal(int x);
int Hexa(int x);

void main()
{
    int num;
    printf("Digite um numero ate 255:");
    scanf("%i", &num);
    if(num <256 && num >= 0)
    {
        printf("\n----------\n");
        Binario(num);
        printf("\n----------\n");
        Octal(num);
        printf("\n----------\n");
        Hexa(num);
    }
    else
    {
        printf("Digite um numero valido!!\n");
    }
    
}

int Binario(int x)
{
    int numero[8] = {0};
    int i = 7;
    do
    {
        int div = x / 2;
        int resto =  x % 2;
        numero[i] = resto;
        x = div;
        i--;
    } while (x != 0);
    printf("Seu binario eh: ");
    for (i++; i <= 7; i++)
    {
        printf("%i", numero[i]);
    }
}

int Octal(int x)
{
    int numero[3] = {0};
    int i = 2;
    do
    {
        int div = x / 8;
        int resto =  x % 8;
        numero[i] = resto;
        x = div;
        i--;
    } while (x != 0);
    printf("Seu octal eh: ");
    for (i++; i <= 2; i++)
    {
        printf("%i", numero[i]);
    }
}

int Hexa(int x)
{
    char numero[2] = {0};
    int i = 1;
    do
    {
        int div =  x / 16;
        int resto = x % 16;
        switch(resto)
        {
            case 10:
                resto = 'A';
            break;

            case 11:
                resto = 'B';
            break;

            case 12:
                resto = 'C';
            break;

            case 13:
                resto = 'D';
            break;

            case 14:
                resto = 'E';
            break;

            case 15:
                resto = 'F';
            break;
        }
        numero[i] = resto;
        x = div;
        i--;
    } while (x != 0);
    printf("Seu hexa eh: ");
    for (i++; i <= 1; i++)
    {
        if (numero[i] >= 65)
        {
            printf("%c", numero[i]);
        }
        else
        {
            printf("%i", numero[i]);
        }
        
    }
    
}
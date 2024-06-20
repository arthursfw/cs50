//[x]    pergunte um numero
//[x]    imprimir se é impar ou par.

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Digite o numero: ");
    if( n % 2 == 0)
    {
        printf("%d é par.\n", n);
    }
    else
    {
        printf("%d é impar.\n", n);
    }
}

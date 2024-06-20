//[x]    pedir pro usuario escrever quantas vezes vai miar
//[x]    criar uma função de miar

#include <cs50.h>
#include <stdio.h>

void meow(int miados);
int main(void)
{
    int n = get_int("Quantas vezes você quer que o gato mie? ");
    meow(n);
}

void meow(int miados)
{
    for(int i = 0; i < miados; i++)
    {
        printf("meow\n");
    }
}
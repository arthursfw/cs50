#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string nome = get_string("Qual o seu nome? ");
    string idade = get_string("Qual sua idade? ");
    printf("Olá, eu me chamo %s e tenho %s anos.\n", nome, idade);
}
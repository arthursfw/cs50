//[x]    perguntar quantos pontos perdeu;
//[x]    comparar se a pontuação é maior que 2.
//[x]    se for maior que 2, imprimir "perdeu mais pontos que Eu"
//[x]    se for menor que 2, imprimir "perdeu menos pontos que Eu"
//[x]    se nao for nenhuma das situações, imprimir "perdeu a mesma quantidade de pontos que Eu"


#include <cs50.h>
#include <stdio.h>

int main(void)
{
    const int MEU = 2;
    int pontos = get_int("Quantos pontos voce perdeu? ");
    if (pontos > MEU)
    {
        printf("Você perdeu mais pontos que eu.\n");
    }
    else if (pontos < MEU)
    {
        printf("Você perdeu menos pontos que eu.\n");
    }
    else
    {
        printf("Você perdeu a mesma quantidade de pontos.\n");
    }
}
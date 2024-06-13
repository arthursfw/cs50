//[x]    pedir pro usuario digitar o primeiro numero
//[x]    armazenar o 1° numero na memoria
//[x]    pedir pro usuario digitar o segundo numero
//[x]    armazenar o 2° numero na memoria
//[x]    somar esse numero usando uma função
//[x]    imprimir o resultado da função  com a mensagem

#include <stdio.h>

int soma(int n1, int n2)
{
    int resultado = n1 + n2;
    return resultado;
}

int main(void)
{
    int n1, n2;
    printf("Digite o 1o numero: ");
    scanf("%d", &n1);
    printf("Digite o 2o numero: ");
    scanf("%d", &n2);
    printf("O resultado de %d + %d é igual a: %d\n", n1, n2, soma(n1, n2));
}
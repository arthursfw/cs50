//[x]    perguntar ao usuario qual operação usar
//[x]    guardar na variável "op"
//[x]    pedir pro usuario digitar o primeiro numero
//[x]    armazenar o 1° numero na memoria
//[x]    pedir pro usuario digitar o segundo numero
//[x]    armazenar o 2° numero na memoria
//[x]    fazer a operação e guardar na variável
//[x]    imprimir o resultado na tela

#include <stdio.h>
#include<locale.h>

int adicao(int n1, int n2)
{
    int resultado = n1 + n2;
    return resultado;   }
//--------------------------------
int subtracao(int n1, int n2)
{
    int resultado = n1 - n2;
    return resultado;   }
//--------------------------------
int multiplicacao(int n1, int n2)
{
    int resultado = n1 * n2;
    return resultado;   }
//--------------------------------
int divisao(int n1, int n2)
{
    int resultado = n1 / n2;
    return resultado;   }
//--------------------------------

int main(void)
{
	setlocale(LC_ALL,"Portuguese");
    
    int op1, op2, op3, op4;
    int n1, n2;
    int op;
    printf("------------------------------\n");
    printf("Calculadora\n");
    printf("------------------------------\n");
    printf("1 - Adição\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("\nQual operação você quer fazer? ");
    scanf("%d", &op);


	if (op == 1)
	{
    	printf("\n------------------------------\n");
    	printf("\nAdição:\n");
    	printf("Digite o primeiro número: ");
    	scanf("%d", &n1);
    	printf("Digite o segundo número: ");
    	scanf("%d", &n2);
    	printf("Resultado: %d\n", adicao(n1, n2));
	}

	if (op == 2)
	{
    	printf("\n------------------------------\n");
    	printf("\nSubtração:\n");
    	printf("Digite o primeiro número: ");
    	scanf("%d", &n1);
   		printf("Digite o segundo número: ");
    	scanf("%d", &n2);
    	printf("Resultado: %d\n", subtracao(n1, n2));
	}

	if (op == 3)
	{
    	printf("\n------------------------------\n");
    	printf("\nMultiplicação:\n");
    	printf("Digite o primeiro número: ");
    	scanf("%d", &n1);
    	printf("Digite o segundo número: ");
    	scanf("%d", &n2);
    	printf("Resultado: %d\n", multiplicacao(n1, n2));
	}

	if (op == 4)
	{
    	printf("\n------------------------------\n");
    	printf("\nDivisão:\n");
    	printf("Digite o primeiro número: ");
    	scanf("%d", &n1);
    	printf("Digite o segundo número: ");
    	scanf("%d", &n2);
    	printf("Resultado: %d\n", divisao(n1, n2));
	}

}
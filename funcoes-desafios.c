//[x]   perguntar o email do usuário
//[x]   ler o email
//[x]   perguntar a senha do usuário
//[x]   ler a senha
//[x]   ver se o email e a senha do usuario existe no programa
//[x]   se sim, imprimir mensagem de boas-vindas
//[x]   se nao, dizer que o email e senha estao invalidos.

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string email = get_string("Qual o seu e-mail? ");
    string senha = get_string("Qual sua senha? ");

    if(email && senha)
    {
        printf("Bem-vindo!\n");
    }
    else
    {
        printf("Vai embora\n");
    }
}

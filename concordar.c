//[x]    perguntar se o usuario concorda;
//[x]    imprimir se concordou ou nao.

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("Você concorda? [s/n] ");
    if (c == 's' || c == 'S')
    {
        printf("Você concorda.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Você não concorda.\n");
    }
}

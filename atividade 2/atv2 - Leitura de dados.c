#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct{
    char nome[50];
}usuario_novo;

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    usuario_novo usuario;

    int idade;

    printf("\nDigite o nome do usuário: \n");
    fgets(usuario.nome, 50, stdin);
    usuario.nome[strcspn(usuario.nome, "\n")] = '\0';

    printf("\nDigite a idade: ");
    scanf(" %d", &idade);
    
    printf("%s tem %d anos", usuario.nome, idade);
    
    return 0;
    
}
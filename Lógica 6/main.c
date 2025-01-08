#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[256];
    int idade;

    printf("Qual seu nome?\n");
    scanf("%s", &nome);

    printf("\nQual sua idade?\n");
    scanf("%d", &idade);

    printf("Nome: %s \n Idade: %d\n", nome, idade);


    return 0;
}

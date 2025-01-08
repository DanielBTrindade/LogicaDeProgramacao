#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[256];
    char sobrenome[256];
    int ano_nascimento;
    int idade;
    int ano_atual;

    printf("Qual o seu nome?\n");
    scanf("%s", nome);
    printf("\nE seu sobrenome?\n");
    scanf("%s", sobrenome);

    printf("\nShow de bola %s %s. Qual a sua idade?\n", nome, sobrenome);
    scanf("%d",&idade);
    printf("\nLegal! %s %s tem %d anos\n", nome, sobrenome, idade);

    printf("\nEm que ano nos estamos?\n");
    scanf("%d", ano_atual);

    ano_nascimento = ano_atual-idade;

    printf("\nLegal! então você nasceu em %d \n", ano_nascimento);


    return 0;
}

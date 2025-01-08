#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[256];
    char sobrenome[256];
    char cidade[256];
    int ano_nascimento;
    int idade;
    int ano_atual;

    printf("Qual o seu nome?\n");
    scanf("%s", nome);
    printf("\nE seu sobrenome?\n");
    scanf("%s", sobrenome);

    printf("\nShow de bola, %s %s. Quantos anos você faz essa ano?\n", nome, sobrenome);
    scanf("%d",&idade);
    printf("\nLegal! %s %s você tem %d anos.\n", nome, sobrenome, idade);

    printf("\nEm que ano nos estamos?\n");
    scanf("%d", &ano_atual);


    printf("\nLegal! então você nasceu em %d.\n", ano_nascimento);

    printf("\nOnde você mora?\n");
    scanf("%s", cidade);

    printf("\nEu tambem, %s é uma otima cidade.\n", cidade);

    printf("\nBom te conhecer %s %s, de %s que nasceu em %d e tem %d anos\n", nome, sobrenome, cidade, ano_nascimento, idade);

    return 0;
}

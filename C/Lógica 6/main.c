#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    char nome[256];
    int idade;

    printf("Olá! Qual seu nome?\n");
    scanf("%s", &nome);

    printf("\nQual sua idade?\n");
    scanf("%d", &idade);

    printf("\nNome: %s \nIdade: %d\n", nome, idade);
    printf("\nAguarde...\n");
    printf("\nA primeira letra do seu nome é: %c\n", nome[0]);

    if(idade >= 65){
        printf("Você é idoso!");
    }else if(idade >= 18){
        printf("\nVocê é adulto!\n");
    }else if(idade >= 12){
        printf("\nVocê é adolecente!\n");
    }else if(idade > 3 ){
        printf("\nVocê é criança!\n");
    }else{
        printf("Você é um bebê");
    }

    return 0;
}
